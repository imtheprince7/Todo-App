#include "informationretrieve.h"
#include "ui_informationretrieve.h"

#include"loginwindow.h"
#include <QSqlQuery>
#include <QSqlError>
#include <QMessageBox>
#include <QDebug>

InformationRetrieve::InformationRetrieve(QWidget *parent) : QDialog(parent), ui(new Ui::InformationRetrieve) {
    ui->setupUi(this);
}

InformationRetrieve::~InformationRetrieve() {
     delete ui;
}

void InformationRetrieve::on_BackButton_clicked() {
    this->close();
    LoginWindow *loginWindow = new LoginWindow();
    loginWindow->show();
}

void InformationRetrieve::on_SearchButton_clicked() {

    LoginWindow login;
    QString username = ui->UsernameFirstLineEdit->text();
    QString email = ui->EmailIdLineEdit->text();

    if (username.isEmpty() || email.isEmpty()) {
        QMessageBox::warning(this, "Input Error", "Please fill both Username and Email fields.");
        return;
    }

    if (!login.connOpen()) {
        qDebug() << "Failed to open the Database";
        return;
    }

    QSqlQuery query;
    query.prepare("SELECT username, email FROM user_registration WHERE username = :username AND email = :email");
    query.bindValue(":username", username);
    query.bindValue(":email", email);

    if (query.exec()) {
        if (query.next()) {
            QString foundEmail = query.value(1).toString();
            QString foundMobile= query.value(2).toString();
            QString foundpassword= query.value(3).toString();
            QMessageBox::information(this, "User Found SuccessFull !!", "Your credentials are available in our database.");
        } else {
            QMessageBox::information(this, "User not Found !!", "Your credentials are not available in our database");

        }
    } else {
        QMessageBox::critical(this, "Search Error", query.lastError().text());
    }
    login.connClose();
}



void InformationRetrieve::on_UpdateButton_clicked() {
    LoginWindow login;
    QString username = ui->UsernameLineEdit->text();
    QString password = ui->PasswordLineEdit->text();
    QString confirmPassword = ui->ConfirmPasswordLineEdit->text();

    if (username.isEmpty() || password.isEmpty() || confirmPassword.isEmpty()) {
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
    query.prepare("UPDATE user_registration SET password = :password WHERE username = :username");
    query.bindValue(":username", username);
    query.bindValue(":password", password);

    if (query.exec()) {
        QMessageBox::information(this, "Update Success", "Your password has been updated successfully!");
        ui->UsernameLineEdit->clear();
        ui->PasswordLineEdit->clear();
        ui->ConfirmPasswordLineEdit->clear();
    } else {
        QMessageBox::critical(this, "Update Error", query.lastError().text());
    }

    login.connClose();
}
