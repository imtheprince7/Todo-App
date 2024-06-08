#ifndef DELETETASK_H
#define DELETETASK_H

#include <QDialog>
#include <QtSql>
#include"mainpage.h"
#include "loginwindow.h"

namespace Ui {
class DeleteTask;
}

class DeleteTask : public QDialog{
    Q_OBJECT

public:
    explicit DeleteTask(QWidget *parent = nullptr);
    ~DeleteTask();
    void setUserName(const QString &name, const QString &username);
     void fetchData(const QString &username);

private slots:
    void on_BackButton_clicked();

private:
    Ui::DeleteTask *ui;
    QString pname;
    QString pusername;
    void confirmDelete(int, int);
    void deleteRow(int);
    void populateTableWidget(QSqlQuery &query);
    void deleteSelectedRow();
};

#endif // DELETETASK_H
