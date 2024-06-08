#include "viewtasks.h"
#include "ui_viewtasks.h"
#include "mainpage.h"

#include <QMessageBox>


ViewTasks::ViewTasks(QWidget *parent) : QDialog(parent) , ui(new Ui::ViewTasks){
    ui->setupUi(this);
    LoginWindow login;
    if (!login.connOpen())
        ui->connectionMessageLabel->setText("Not Connected to DB !!");
    else
        ui->connectionMessageLabel->setText("Connected to DB !!");

    // Set up table widget
    ui->ViewTaskTableWidget->setColumnCount(4);
    ui->ViewTaskTableWidget->setHorizontalHeaderLabels({"SNo.", "Task Name", "Description", "Date"});

    // Fetch data from the database and populate the table widget
    fetchData();
}


ViewTasks::~ViewTasks(){
    delete ui;
}

void ViewTasks::on_pushButton_clicked(){
    this->close();
    MainPage mainpage;
    mainpage.setModal(true);
    mainpage.exec();

}

void ViewTasks::fetchData() {
    LoginWindow login;
    if (!login.connOpen()) {
        qDebug() << "Failed to open the Database";
        return;
    }

    QSqlQuery query;
    query.prepare("SELECT taskId, taskName, description, date FROM addtasks");

    if (!query.exec()) {
        QMessageBox::critical(this, tr("ERROR"), query.lastError().text());
        return;
    }
    // Populate the table widget with fetched data
    populateTableWidget();
    login.close();
}

void ViewTasks::populateTableWidget() {
     LoginWindow login;
    QSqlQuery query;
    query.prepare("SELECT taskId, taskName, description, date FROM addtasks");
    if (query.exec()) {
        int row = 0;
        while (query.next()) {
            ui->ViewTaskTableWidget->insertRow(row);
            ui->ViewTaskTableWidget->setItem(row, 0, new QTableWidgetItem(query.value(0).toString()));
            ui->ViewTaskTableWidget->setItem(row, 1, new QTableWidgetItem(query.value(1).toString()));
            ui->ViewTaskTableWidget->setItem(row, 2, new QTableWidgetItem(query.value(2).toString()));
            ui->ViewTaskTableWidget->setItem(row, 3, new QTableWidgetItem(query.value(3).toString()));
            row++;
        }
    }else {
        QMessageBox::critical(this, tr("ERROR"), query.lastError().text());
    }
    login.connClose();
}


