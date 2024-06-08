#include "informationretrieve.h"
#include "ui_informationretrieve.h"

#include"loginwindow.h"
#include <QSqlQuery>
#include <QSqlError>
#include <QMessageBox>
#include <QDebug>

InformationRetrieve::InformationRetrieve(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::InformationRetrieve) {
    ui->setupUi(this);

    LoginWindow login;
    if (!login.connOpen())
        qDebug() << "Not Connected to DB !!";
    else
        qDebug() << "Connected to DB !!";
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
    QString username = ui->UsernameTextField->toPlainText();
    QString email = ui->EmailIdTextField->toPlainText();

    if (username.isEmpty() || email.isEmpty()) {
        QMessageBox::warning(this, "Input Error", "Please fill both Username and Email fields.");
        return;
    }

    if (!login.connOpen()) {
        qDebug() << "Failed to open the Database";
        return;
    }

    QSqlQuery query;
    query.prepare("SELECT username, email FROM users WHERE username = :username AND email = :email");
    query.bindValue(":username", username);
    query.bindValue(":email", email);

    if (query.exec()) {
        if (query.next()) {
            QString foundUsername = query.value(1).toString();
            QString foundEmail = query.value(2).toString();

            ui->ForgetDetailsMessageLabel->setText("User found:\nUsername: " + foundUsername + "\nEmail: " + foundEmail);
        } else {
            ui->ForgetDetailsMessageLabel->setText("No matching credentials found.");
        }
    } else {
        QMessageBox::critical(this, "Search Error", query.lastError().text());
    }

    login.connClose();
}

void InformationRetrieve::on_UpdateButton_clicked() {
    LoginWindow login;
    QString username = ui->UsernameTextField->toPlainText();
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
    query.prepare("UPDATE users SET password = :password WHERE username = :username");
    query.bindValue(":username", username);
    query.bindValue(":password", password);

    if (query.exec()) {
        QMessageBox::information(this, "Update Success", "Your password has been updated successfully!");
        ui->UsernameTextField->clear();
        ui->PasswordLineEdit->clear();
        ui->ConfirmPasswordLineEdit->clear();
    } else {
        QMessageBox::critical(this, "Update Error", query.lastError().text());
    }

    login.connClose();
}
