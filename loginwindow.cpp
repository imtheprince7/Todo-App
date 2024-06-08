#include "loginwindow.h"
#include "ui_loginwindow.h"
#include "registrationpage.h"
#include "informationretrieve.h"
#include "mainpage.h"
#include <QSqlQuery>
#include <QSqlError>
#include <QDebug>
#include <QCryptographicHash>

LoginWindow::LoginWindow(QWidget *parent) : QMainWindow(parent), ui(new Ui::LoginWindow) {
    ui->setupUi(this);
}

LoginWindow::~LoginWindow() {
    connClose();
    delete ui;
}

QString LoginWindow::getHashedPassword(const QString &password) {
    // Hash password using SHA-256 algorithm
    QByteArray hash = QCryptographicHash::hash(password.toUtf8(), QCryptographicHash::Sha256);
    return QString(hash.toHex());
}

QString LoginWindow::getUserName(const QString &username, const QString &password) {
    QString name;
    QSqlQuery query;
    query.prepare("SELECT name, password FROM user_registration WHERE username = :username");
    query.bindValue(":username", username);

    if (query.exec()) {
        if (query.next()) {
            QString storedPassword = query.value(1).toString();
            QString hashedPassword = getHashedPassword(password);
            qDebug() << "Stored Password:" << storedPassword;
            qDebug() << "Hashed Password:" << hashedPassword;
            if (storedPassword == hashedPassword) {
                name = query.value(0).toString();
            } else {
                qDebug() << "Password mismatch";
            }
        } else {
            qDebug() << "No user found with the provided username";
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
        mainpage.setUserName(name, username);
        mainpage.setModal(true);
        mainpage.exec();

        connClose();
    } else {
        ui->ErrorMessageLabel->setText("Username or Password is Wrong..!!");
        ui->lineEditUsername->clear();
        ui->lineEditPassword->clear();
    }
}

void LoginWindow::on_RegisterButton_clicked() {
    this->hide();
    RegistrationPage registerpage;
    registerpage.setModal(true);
    registerpage.exec();
}

void LoginWindow::on_ForgetPasswordButton_clicked() {
    InformationRetrieve informationRetrieve;
    informationRetrieve.setModal(true);
    informationRetrieve.exec();
}
