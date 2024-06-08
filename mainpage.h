#ifndef MAINPAGE_H
#define MAINPAGE_H

#include <QDialog>
#include"loginwindow.h"
#include"addtask.h"
#include"edittask.h"
#include"viewtasks.h"
#include"deletetask.h"
#include"marktaskascomplete.h"

namespace Ui {
class MainPage;
}

class MainPage : public QDialog
{
    Q_OBJECT

public:
    explicit MainPage(QWidget *parent = nullptr);
    ~MainPage();
    void setUserName(const QString &name, const QString &username);

private slots:

    void on_logoutButton_clicked();
    void on_AddTasksButton_clicked();
    void on_EditTaskButton_clicked();
    void on_ViewTaskButton_clicked();
    void on_deleteTasksButton_clicked();
    void on_MarkCompleteTaskButton_clicked();

private:
    Ui::MainPage *ui;
    QString pname;
    QString pusername;
};

#endif // MAINPAGE_H
