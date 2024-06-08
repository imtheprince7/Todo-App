#include "edittask.h"
#include "ui_edittask.h"
#include "mainpage.h"
#include <QVBoxLayout>
#include <QMessageBox>
#include <QDebug>


EditTask::EditTask(QWidget *parent) : QDialog(parent), ui(new Ui::EditTask) {
    ui->setupUi(this);

    // Set up table widget
    ui->ViewTaskTableWidget->setColumnCount(6);
    ui->ViewTaskTableWidget->setHorizontalHeaderLabels({"SNo.", "Task Name", "Task Description", "Task Date", "Person Name", "Username"});
    ui->ViewTaskTableWidget->setSizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
    QVBoxLayout *layout = new QVBoxLayout(this);
    layout->addWidget(ui->ViewTaskTableWidget);
    setLayout(layout);

 // Connect signals for cell change
    connect(ui->ViewTaskTableWidget, &QTableWidget::cellChanged, this, &EditTask::cellChanged);
}

EditTask::~EditTask() {
    delete ui;
}

void EditTask::setUserName(const QString &name, const QString &username) {
    pname = name;
    pusername = username;
    fetchData(pusername);
}

void EditTask::on_BackButton_clicked() {
    this->close();
    MainPage mainpage;
    mainpage.setUserName(pname, pusername);
    mainpage.setModal(true);
    mainpage.exec();
}

void EditTask::fetchData(const QString &username) {
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

void EditTask::populateTableWidget(QSqlQuery &query) {
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

void EditTask::cellChanged(int row, int column) {
    if (column == 0)
        return;

    QString taskId = ui->ViewTaskTableWidget->item(row, 0)->text();
    QString newValue = ui->ViewTaskTableWidget->item(row, column)->text();
    QString columnName;

    switch (column) {
    case 1: columnName = "taskName"; break;
    case 2: columnName = "taskDescription"; break;
    case 3: columnName = "taskDate"; break;
    default: return;
    }

    LoginWindow login;
    if (!login.connOpen()) {
        QMessageBox::critical(this, tr("ERROR"), "Failed to connect to the database.");
        return;
    }

    QSqlQuery query;
    query.prepare(QString("UPDATE tasks SET %1 = :value WHERE taskId = :id").arg(columnName));
    query.bindValue(":value", newValue);
    query.bindValue(":id", taskId);

    if (!query.exec()) {
        QMessageBox::critical(this, tr("ERROR"), query.lastError().text());
    }

    login.connClose();
}

void EditTask::clearSelection() {
    ui->ViewTaskTableWidget->clearSelection();
}
