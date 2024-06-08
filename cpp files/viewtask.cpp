#include "viewtask.h"
#include "ui_viewtask.h"

ViewTask::ViewTask(LoginWindow *loginWindow, QWidget *parent)
    : QDialog(parent), ui(new Ui::ViewTask), m_loginWindow(loginWindow) {
    ui->setupUi(this);

    // Use the existing connection from loginWindow
    if (!m_loginWindow->connOpen()) {
        ui->connectionMessageLabel->setText("Not Connected to DB !!");
    } else {
        ui->connectionMessageLabel->setText("Connected to DB !!");

        // Set up table widget
        ui->ViewTaskTableWidget->setColumnCount(4);
        ui->ViewTaskTableWidget->setHorizontalHeaderLabels({"SNo.", "Task Name", "Description", "Date"});

        // Fetch data from the database and populate the table widget
        fetchData();
    }
}

ViewTask::~ViewTask() {
    delete ui;
}

void ViewTask::fetchData() {
    QSqlQuery query(m_loginWindow->mydb);
    if (!query.exec("SELECT taskId, taskName, description, date FROM addtasks")) {
        qDebug() << "Failed to execute query:" << query.lastError().text();
        return;
    }

    // Populate the table widget with fetched data
    populateTableWidget();
}

void ViewTask::populateTableWidget() {
    QSqlQuery query(m_loginWindow->mydb);
    if (query.exec("SELECT taskId, taskName, description, date FROM addtasks")) {
        int row = 0;
        while (query.next()) {
            ui->ViewTaskTableWidget->insertRow(row);
            ui->ViewTaskTableWidget->setItem(row, 0, new QTableWidgetItem(query.value(0).toString()));
            ui->ViewTaskTableWidget->setItem(row, 1, new QTableWidgetItem(query.value(1).toString()));
            ui->ViewTaskTableWidget->setItem(row, 2, new QTableWidgetItem(query.value(2).toString()));
            ui->ViewTaskTableWidget->setItem(row, 3, new QTableWidgetItem(query.value(3).toString()));
            row++;
        }
    }
}
