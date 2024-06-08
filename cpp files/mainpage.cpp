#include "mainpage.h"
#include "ui_mainpage.h"
#include "loginwindow.h"
#include "addtask.h"
#include "edittask.h"
#include "viewtasks.h"
#include "deletetask.h"
#include "marktaskascomplete.h"

MainPage::MainPage(QWidget *parent) : QDialog(parent), ui(new Ui::MainPage) {
    ui->setupUi(this);
}

MainPage::~MainPage() {
    delete ui;
}

void MainPage::setUserName(const QString &name, const QString &username) {
    ui->UsernameTextField->setText(username);
    pname = name;
    pusername = username;
}

// Logout Button Logic
void MainPage::on_logoutButton_clicked() {
    this->hide();
    LoginWindow *loginWindow = new LoginWindow();
    loginWindow->show();
}

// Add-Task_Button Logic
void MainPage::on_AddTasksButton_clicked() {
    this->hide();
    AddTask addtasks;
    addtasks.setUserName(pname, pusername);
    addtasks.setModal(true);
    addtasks.exec();
    this->show();
}

// View_Task_Button Logic
void MainPage::on_ViewTaskButton_clicked() {
    this->hide();
    ViewTasks viewtask;
    viewtask.setUserName(pname, pusername);
    viewtask.fetchData(pusername);
    viewtask.setModal(true);
    viewtask.exec();
    this->show();
}

// Delete_Task_Button Logic
void MainPage::on_deleteTasksButton_clicked() {
    this->hide();
    DeleteTask deletetask;
    deletetask.setUserName(pname, pusername);
    deletetask.fetchData(pusername);
    deletetask.setModal(true);
    deletetask.exec();
    this->show();
}

// Edit_Task_Button Logic
void MainPage::on_EditTaskButton_clicked() {
    this->hide();
    EditTask editask;
    editask.setUserName(pname, pusername);
    editask.fetchData(pusername);
    editask.setModal(true);
    editask.exec();
    this->show();
}

// Mark_Complete_Task_Button Logic
void MainPage::on_MarkCompleteTaskButton_clicked() {
    MarkTaskAsComplete mark;
    mark.setModal(true);
    mark.exec();
}
