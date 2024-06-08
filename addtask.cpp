#include "addtask.h"
#include "ui_addtask.h"
#include "mainpage.h"
#include <QMessageBox>
#include <QSqlQuery>
#include <QSqlError>
#include <QDebug>


AddTask::AddTask(QWidget *parent) : QDialog(parent) , ui(new Ui::AddTask){
    ui->setupUi(this);

    LoginWindow login;
    if (!login.connOpen())
        ui->connectionMessageLabel->setText("Not Connected to DB !!");
    else
        ui->connectionMessageLabel->setText("Connected to DB !!");
}

AddTask::~AddTask() {
    delete ui;
}


void AddTask::on_BackButton_clicked() {
    this->close();
    MainPage mainpage;
    mainpage.setModal(true);
    mainpage.exec();
}

void AddTask::on_AddTaskButton_clicked() {
    LoginWindow login;
    QString taskName = ui->TaskNameLineEdit->text();
    QString description = ui->DescriptionLineEdit->text();
    QString date = ui->datepicker->text();

    if (taskName.isEmpty() || description.isEmpty() || date.isEmpty()) {
        QMessageBox::warning(this, tr("Input Error"), tr("Please fill all fields."));
        return;
    }

    if (!login.connOpen()) {
        qDebug() << "Failed to open the Database";
        return;
    }

    QSqlQuery query;
    query.prepare("INSERT INTO addtasks (taskName, description, date) VALUES (:taskName, :description, :date)");
    query.bindValue(":taskName", taskName);
    query.bindValue(":description", description);
    query.bindValue(":date", date);

    if (query.exec()) {
        QMessageBox::information(this, tr("SAVE"), tr("Your task has been saved successfully!"));
        ui->TaskNameLineEdit->clear();
        ui->DescriptionLineEdit->clear();
    } else {
        QMessageBox::critical(this, tr("ERROR"), query.lastError().text());
    }
    login.connClose();
}
