#include "mainpage.h"
#include "ui_mainpage.h"

#include"loginwindow.h"
#include"addtask.h"
#include"edittask.h"
#include"viewtasks.h"
#include"deletetask.h"
#include"marktaskascomplete.h"



MainPage::MainPage(QWidget *parent) : QDialog(parent) , ui(new Ui::MainPage){
    ui->setupUi(this);
}

MainPage::~MainPage(){
    delete ui;
}

void MainPage::setUserName(const QString &name) {
    ui->UsernameTextField->setText(name);
}
// Logout Button Logic
void MainPage::on_logoutButton_clicked(){
    this->hide();
    LoginWindow *loginWindow = new LoginWindow();  // Create a new instance of LoginWindow
    loginWindow->show();
}


// Add-Task_Button Logic
void MainPage::on_AddTasksButton_clicked(){
    this->hide();
    AddTask addtasks;
    addtasks.setModal(true);
    addtasks.exec();
    this->show();
}


// View_Task_Button Logic
void MainPage::on_ViewTaskButton_clicked(){
    ViewTasks viewtask;
    viewtask.setModal(true);
    viewtask.exec();
}


// Delete_Task_Button Logic
void MainPage::on_deleteTasksButton_clicked(){
    DeleteTask deletetask;
    deletetask.setModal(true);
    deletetask.exec();
}


// Edit_Task_Button Logic
void MainPage::on_EditTaskButton_clicked(){
    EditTask editask;
    editask.setModal(true);
    editask.exec();
}


// Mark_Complete_Task_Button Logic
void MainPage::on_MarkCompleteTaskButton_clicked(){
    MarkTaskAsComplete mark;
    mark.setModal(true);
    mark.exec();
}



