#include "addtask.h"
#include "ui_addtask.h"
#include "mainpage.h"
#include <QMessageBox>
#include <QSqlQuery>
#include <QSqlError>
#include <QDebug>

AddTask::AddTask(QWidget *parent) : QDialog(parent), ui(new Ui::AddTask){
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

void AddTask::setUserName(const QString &name, const QString &username) {
    pname = name;
    pusername = username;
}

void AddTask::on_BackButton_clicked() {
    this->close();
    MainPage mainpage;
    mainpage.setUserName(pname, pusername);
    mainpage.setModal(true);
    mainpage.exec();
}

void AddTask::on_AddTaskButton_clicked() {
    LoginWindow login;
    QString taskName = ui->TaskNameLineEdit->text();
    QString taskDescription = ui->DescriptionLineEdit->text();
    QString taskDate = ui->datepicker->text();
    QString personName = pname;
    QString personUsername = pusername;

    if (taskName.isEmpty() || taskDescription.isEmpty() || taskDate.isEmpty() || personName.isEmpty() || personUsername.isEmpty()) {  // Check if pname and pusername are also filled
        QMessageBox::warning(this, tr("Input Error"), tr("Please fill all fields."));
        return;
    }

    if (!login.connOpen()) {
        qDebug() << "Failed to open the Database";
        return;
    }

    QSqlQuery query;
    query.prepare("INSERT INTO tasks (taskName, taskDescription, taskDate, name, username) VALUES (:taskName, :taskDescription, :taskDate, :personName, :personUsername)");
    query.bindValue(":taskName", taskName);
    query.bindValue(":taskDescription", taskDescription);
    query.bindValue(":taskDate", taskDate);
    query.bindValue(":personName", personName);  // Correct binding key
    query.bindValue(":personUsername", personUsername);  // Correct binding key

    if (query.exec()) {
        QMessageBox::information(this, tr("SAVE"), tr("Your task has been saved successfully!"));
        ui->TaskNameLineEdit->clear();
        ui->DescriptionLineEdit->clear();
    } else {
        QMessageBox::critical(this, tr("ERROR"), query.lastError().text());
    }
    login.connClose();
}
