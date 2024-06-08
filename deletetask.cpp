#include "deletetask.h"
#include "ui_deletetask.h"
#include "mainpage.h"
#include <QMessageBox>
#include <QVBoxLayout>
#include <QDebug>

const int COLUMN_COUNT = 6;

DeleteTask::DeleteTask(QWidget *parent) : QDialog(parent), ui(new Ui::DeleteTask) {
    ui->setupUi(this);
    ui->ViewTaskTableWidget->setColumnCount(COLUMN_COUNT);
    ui->ViewTaskTableWidget->setHorizontalHeaderLabels({"SNo.", "Task Name", "Task Description", "Task Date", "Person Name", "Username"});
    ui->ViewTaskTableWidget->setSizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);

    QVBoxLayout *layout = new QVBoxLayout(this);
    layout->addWidget(ui->ViewTaskTableWidget);
    setLayout(layout);

    fetchData();

    connect(ui->ViewTaskTableWidget, &QTableWidget::cellClicked, this, &DeleteTask::confirmDelete);
}

DeleteTask::~DeleteTask() {
    delete ui;
}

void DeleteTask::setUserName(const QString &name, const QString &username) {
    pname = name;
    pusername = username;
}

void DeleteTask::on_BackButton_clicked() {
    this->close();
    MainPage mainpage;
    mainpage.setUserName(pname, pusername);
    mainpage.setModal(true);
    mainpage.exec();
}

void DeleteTask::fetchData() {
    LoginWindow login;
    if (!login.connOpen()) {
        qDebug() << "Failed to open the Database";
        return;
    }

    QSqlQuery query;
    query.prepare("SELECT taskId, taskName, taskDescription, taskDate, name, username FROM tasks");
    // WHERE username = :pusername");
    // query.bindValue(":pusername", pusername);

    if (!query.exec()) {
        QMessageBox::critical(this, tr("ERROR"), query.lastError().text());
        return;
    }
    populateTableWidget(query);
    login.close();
}

void DeleteTask::populateTableWidget(QSqlQuery &query) {
    if (query.exec()) {
        while (query.next()) {
            int row = ui->ViewTaskTableWidget->rowCount();
            ui->ViewTaskTableWidget->insertRow(row);
            for (int col = 0; col < COLUMN_COUNT; ++col) {
                ui->ViewTaskTableWidget->setItem(row, col, new QTableWidgetItem(query.value(col).toString()));
            }
        }
    } else {
        QMessageBox::critical(this, tr("ERROR"), query.lastError().text());
    }

    ui->ViewTaskTableWidget->resizeColumnsToContents();
    ui->ViewTaskTableWidget->horizontalHeader()->setSectionResizeMode(2, QHeaderView::Stretch);
}

void DeleteTask::confirmDelete(int row, int column) {
    if (row < 0 || column < 0)
        return;

    QMessageBox::StandardButton confirmDelete;
    confirmDelete = QMessageBox::question(this, "Confirm Delete", "Are you sure you want to delete this row?",
                                          QMessageBox::Yes | QMessageBox::No);
    if (confirmDelete == QMessageBox::Yes) {
        deleteRow(row);
    }
}

void DeleteTask::deleteRow(int row) {
    QTableWidgetItem *idItem = ui->ViewTaskTableWidget->item(row, 0);
    if (!idItem)
        return;

    int taskId = idItem->text().toInt();
    LoginWindow login;
    if (!login.connOpen()) {
        qDebug() << "Failed to open the Database";
        return;
    }

    QSqlQuery query;
    query.prepare("DELETE FROM tasks WHERE taskId = :id");
    query.bindValue(":id", taskId);
    if (!query.exec()) {
        QMessageBox::critical(this, tr("ERROR"), query.lastError().text());
        return;
    }

    ui->ViewTaskTableWidget->removeRow(row);
    login.close();
}
