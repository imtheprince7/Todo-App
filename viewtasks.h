#ifndef VIEWTASKS_H
#define VIEWTASKS_H

#include <QDialog>
#include <QtSql>
#include"mainpage.h"
#include "loginwindow.h"

namespace Ui {
class ViewTasks;
}

class ViewTasks : public QDialog
{
    Q_OBJECT

public:
    explicit ViewTasks(QWidget *parent = nullptr);
    ~ViewTasks();

private slots:
    void on_pushButton_clicked();

private:
    Ui::ViewTasks *ui;
    void fetchData();
    void populateTableWidget();
};

#endif // VIEWTASKS_H
