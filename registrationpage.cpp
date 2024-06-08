#include "registrationpage.h"
#include "ui_registrationpage.h"
#include "loginwindow.h"
#include <QSqlQuery>
#include <QSqlError>
#include <QMessageBox>
#include <QDebug>

RegistrationPage::RegistrationPage(QWidget *parent) : QDialog(parent) , ui(new Ui::RegistrationPage){
    ui->setupUi(this);
    LoginWindow login;
    if (!login.connOpen())
        qDebug() << "Not Connected to DB !!";
    else
        qDebug() << "Connected to DB !!";
}

RegistrationPage::~RegistrationPage(){
    delete ui;
}


void RegistrationPage::on_BackButton_clicked(){
    this->hide();
    LoginWindow *loginWindow = new LoginWindow();  // Create a new instance of LoginWindow
    loginWindow->show();
}


void RegistrationPage::on_RegisterButton_clicked(){
    LoginWindow login;
    QString name = ui->NameTextField->toPlainText();
    QString username = ui->UsernameTextField->toPlainText();
    QString email = ui->EmailIdTextField->toPlainText();
    QString phone = ui->MobileNumberTextField->toPlainText();
    QString password = ui->PasswordLineEdit->text();
    QString confirmPassword = ui->ConfirmPasswordLineEdit->text();


    // Input validation
    if (name.isEmpty() || username.isEmpty() || email.isEmpty() || phone.isEmpty() || password.isEmpty() || confirmPassword.isEmpty()) {
        QMessageBox::warning(this, "Input Error", "Please fill all fields.");
        return;
    }

    if (password != confirmPassword) {
        QMessageBox::warning(this, "Password Error", "Passwords do not match.");
        return;
    }
    if (!login.connOpen()) {
        qDebug() << "Failed to open the Database";
        return;
    }


    QSqlQuery query;
    query.prepare("INSERT INTO users (name, username, email, phone, password, confirmPassword ) VALUES (:name, :username, :email, :phone, :password, :confirmPassword)");
    query.bindValue(":name", name);
    query.bindValue(":username", username);
    query.bindValue(":email", email);
    query.bindValue(":phone", phone);
    query.bindValue(":password", password);
    query.bindValue(":confirmPassword", confirmPassword);

    if (query.exec()) {
        QMessageBox::information(this, "Registration Success", "You have been registered successfully!");
        ui->NameTextField->clear();
        ui->UsernameTextField->clear();
        ui->EmailIdTextField->clear();
        ui->MobileNumberTextField->clear();
        ui->PasswordLineEdit->clear();
        ui->ConfirmPasswordLineEdit->clear();
    } else {
        QMessageBox::critical(this, "Registration Error", query.lastError().text());
    }
}
