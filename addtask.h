#ifndef ADDTASK_H
#define ADDTASK_H

#include <QDialog>
#include <QtSql>
#include"mainpage.h"
#include "loginwindow.h"

namespace Ui {
class AddTask;
}

class AddTask : public QDialog
{
    Q_OBJECT

public:
    explicit AddTask(QWidget *parent = nullptr);
    ~AddTask();
    void setUserName(const QString &name, const QString &username);

private slots:
    void on_BackButton_clicked();
    void on_AddTaskButton_clicked();

private:
    Ui::AddTask *ui;
    QString pname;
    QString pusername;
};

#endif // ADDTASK_H
