#include "loginwindow.h"
#include "ui_loginwindow.h"
#include "registrationpage.h"
#include "informationretrieve.h"
#include "mainpage.h"
#include <QSqlQuery>
#include <QSqlError>
#include <QDebug>


LoginWindow::LoginWindow(QWidget *parent) : QMainWindow(parent) , ui(new Ui::LoginWindow) {
    ui->setupUi(this);
    if (!connOpen())
        ui->connectionMessageLabel->setText("Not Connected to DB !!");
    else
        ui->connectionMessageLabel->setText("Connected to DB !!");
}

LoginWindow::~LoginWindow(){
    connClose();
    delete ui;
}

// To get the name from Users table and send that name in MainPage Window
QString LoginWindow::getUserName(const QString &username, const QString &password) {
    QString name;
    QSqlQuery query;

    query.prepare("SELECT name FROM users WHERE username = :username AND password = :password");
    query.bindValue(":username", username);
    query.bindValue(":password", password);

    if (query.exec()) {
        if (query.next()) {
            name = query.value(0).toString();
        } else {
            qDebug() << "No user found with the provided credentials";
        }
    } else {
        qDebug() << "Query execution error: " << query.lastError();
    }
    return name;
}

void LoginWindow::on_LoginButton_clicked() {
    QString username = ui->lineEditUsername->text();
    QString password = ui->lineEditPassword->text();

    if (!mydb.isOpen()) {
        if (!connOpen()) {
            qDebug() << "Failed to open the Database";
            return;
        }
    }

    QString name = getUserName(username, password);
    if (!name.isEmpty()) {
        this->hide();
        MainPage mainpage;
        mainpage.setUserName(name);
        mainpage.setModal(true);
        mainpage.exec();

        connClose();
    } else {
        ui->ErrorMessageLabel->setText("Username or Password is Wrong..!!");
        ui->lineEditUsername->clear();
        ui->lineEditPassword->clear();
    }
}

void LoginWindow::on_RegisterButton_clicked(){
    this->hide();
    RegistrationPage registerpage;
    registerpage.setModal(true);
    registerpage.exec();

}


void LoginWindow::on_ForgetPasswordButton_clicked(){
    InformationRetrieve informationRetrieve;
    informationRetrieve.setModal(true);
    informationRetrieve.exec();

}

