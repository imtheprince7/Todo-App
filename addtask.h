#ifndef ADDTASK_H
#define ADDTASK_H

#include <QDialog>
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

private slots:
    void on_BackButton_clicked();
    void on_AddTaskButton_clicked();

private:
    Ui::AddTask *ui;
};

#endif // ADDTASK_H