#include "viewtasks.h"
#include "ui_viewtasks.h"
#include "mainpage.h"
#include <QMessageBox>
#include <QVBoxLayout>
#include <QDebug>


void ViewTasks::setUserName(const QString &name, const QString &username) {
    pname = name;
    pusername = username;
}

ViewTasks::ViewTasks(QWidget *parent) : QDialog(parent), ui(new Ui::ViewTasks){
    ui->setupUi(this);

 // Set up table widget
    ui->ViewTaskTableWidget->setColumnCount(6);
    ui->ViewTaskTableWidget->setHorizontalHeaderLabels({"SNo.", "Task Name", "Task Description", "Task Date", "Person Name", "Username"});

    ui->ViewTaskTableWidget->setSizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
    QVBoxLayout *layout = new QVBoxLayout(this);
    layout->addWidget(ui->ViewTaskTableWidget);
    setLayout(layout);

    fetchData(pusername);
}

ViewTasks::~ViewTasks(){
    delete ui;
}
void ViewTasks::on_pushButton_clicked(){
    this->close();
    MainPage mainpage;
    mainpage.setUserName(pname, pusername);
    mainpage.setModal(true);
    mainpage.exec();

}

void ViewTasks::fetchData(const QString &username) {
    LoginWindow login;
    if (!login.connOpen()) {
        qDebug() << "Failed to open the Database";
        return;
    }

    QSqlQuery query;
    query.prepare("SELECT taskId, taskName, taskDescription, taskDate, name, username FROM tasks WHERE username = :username");
    query.bindValue(":username", username);
    if (!query.exec()) {
        QMessageBox::critical(this, tr("ERROR"), query.lastError().text());
        return;
    }
    populateTableWidget(query);
    login.close();
}
void ViewTasks::populateTableWidget(QSqlQuery &query) {
    if (query.exec()) {
        int row = 0;
        while (query.next()) {
            ui->ViewTaskTableWidget->insertRow(row);
            for (int col = 0; col < 6; ++col) {
                ui->ViewTaskTableWidget->setItem(row, col, new QTableWidgetItem(query.value(col).toString()));
            }
            row++;
        }
    } else {
        QMessageBox::critical(this, tr("ERROR"), query.lastError().text());
    }

    ui->ViewTaskTableWidget->resizeColumnsToContents();
    ui->ViewTaskTableWidget->horizontalHeader()->setSectionResizeMode(2, QHeaderView::Stretch);
}

