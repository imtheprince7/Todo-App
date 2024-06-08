/********************************************************************************
** Form generated from reading UI file 'loginwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.7.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LOGINWINDOW_H
#define UI_LOGINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_LoginWindow
{
public:
    QWidget *centralwidget;
    QLabel *usernameLabel;
    QLabel *welcomeMessageLabel;
    QLabel *PasswordLabel;
    QPushButton *LoginButton;
    QPushButton *RegisterButton;
    QPushButton *ForgetPasswordButton;
    QLabel *connectionMessageLabel;
    QLineEdit *lineEditUsername;
    QLineEdit *lineEditPassword;
    QLabel *ErrorMessageLabel;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *LoginWindow)
    {
        if (LoginWindow->objectName().isEmpty())
            LoginWindow->setObjectName("LoginWindow");
        LoginWindow->resize(800, 550);
        LoginWindow->setMaximumSize(QSize(800, 550));
        centralwidget = new QWidget(LoginWindow);
        centralwidget->setObjectName("centralwidget");
        usernameLabel = new QLabel(centralwidget);
        usernameLabel->setObjectName("usernameLabel");
        usernameLabel->setGeometry(QRect(160, 120, 150, 41));
        usernameLabel->setMaximumSize(QSize(150, 50));
        QFont font;
        font.setPointSize(17);
        font.setBold(true);
        font.setItalic(true);
        usernameLabel->setFont(font);
        welcomeMessageLabel = new QLabel(centralwidget);
        welcomeMessageLabel->setObjectName("welcomeMessageLabel");
        welcomeMessageLabel->setGeometry(QRect(220, 10, 381, 61));
        welcomeMessageLabel->setMaximumSize(QSize(400, 100));
        QFont font1;
        font1.setPointSize(26);
        font1.setBold(true);
        font1.setItalic(true);
        font1.setUnderline(true);
        welcomeMessageLabel->setFont(font1);
        PasswordLabel = new QLabel(centralwidget);
        PasswordLabel->setObjectName("PasswordLabel");
        PasswordLabel->setGeometry(QRect(160, 210, 150, 41));
        PasswordLabel->setMaximumSize(QSize(150, 50));
        PasswordLabel->setFont(font);
        LoginButton = new QPushButton(centralwidget);
        LoginButton->setObjectName("LoginButton");
        LoginButton->setGeometry(QRect(350, 310, 250, 60));
        LoginButton->setMaximumSize(QSize(250, 60));
        QFont font2;
        font2.setPointSize(16);
        font2.setBold(true);
        font2.setItalic(true);
        LoginButton->setFont(font2);
        RegisterButton = new QPushButton(centralwidget);
        RegisterButton->setObjectName("RegisterButton");
        RegisterButton->setGeometry(QRect(210, 440, 180, 60));
        RegisterButton->setMaximumSize(QSize(180, 60));
        RegisterButton->setFont(font2);
        ForgetPasswordButton = new QPushButton(centralwidget);
        ForgetPasswordButton->setObjectName("ForgetPasswordButton");
        ForgetPasswordButton->setGeometry(QRect(430, 440, 250, 60));
        ForgetPasswordButton->setMaximumSize(QSize(250, 60));
        ForgetPasswordButton->setFont(font2);
        connectionMessageLabel = new QLabel(centralwidget);
        connectionMessageLabel->setObjectName("connectionMessageLabel");
        connectionMessageLabel->setGeometry(QRect(10, 470, 100, 20));
        connectionMessageLabel->setMaximumSize(QSize(100, 20));
        lineEditUsername = new QLineEdit(centralwidget);
        lineEditUsername->setObjectName("lineEditUsername");
        lineEditUsername->setGeometry(QRect(350, 130, 250, 50));
        lineEditUsername->setMaximumSize(QSize(250, 50));
        QFont font3;
        font3.setPointSize(13);
        font3.setBold(true);
        font3.setItalic(true);
        lineEditUsername->setFont(font3);
        lineEditPassword = new QLineEdit(centralwidget);
        lineEditPassword->setObjectName("lineEditPassword");
        lineEditPassword->setGeometry(QRect(350, 220, 250, 50));
        lineEditPassword->setMaximumSize(QSize(250, 50));
        lineEditPassword->setFont(font3);
        lineEditPassword->setEchoMode(QLineEdit::Password);
        ErrorMessageLabel = new QLabel(centralwidget);
        ErrorMessageLabel->setObjectName("ErrorMessageLabel");
        ErrorMessageLabel->setGeometry(QRect(160, 80, 500, 30));
        ErrorMessageLabel->setMaximumSize(QSize(500, 30));
        ErrorMessageLabel->setFont(font3);
        LoginWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(LoginWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 800, 26));
        LoginWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(LoginWindow);
        statusbar->setObjectName("statusbar");
        LoginWindow->setStatusBar(statusbar);

        retranslateUi(LoginWindow);

        QMetaObject::connectSlotsByName(LoginWindow);
    } // setupUi

    void retranslateUi(QMainWindow *LoginWindow)
    {
        LoginWindow->setWindowTitle(QCoreApplication::translate("LoginWindow", "LoginWindow", nullptr));
        usernameLabel->setText(QCoreApplication::translate("LoginWindow", "UserName", nullptr));
        welcomeMessageLabel->setText(QCoreApplication::translate("LoginWindow", "Welcome to ToDo", nullptr));
        PasswordLabel->setText(QCoreApplication::translate("LoginWindow", "Password", nullptr));
        LoginButton->setText(QCoreApplication::translate("LoginWindow", "Login", nullptr));
        RegisterButton->setText(QCoreApplication::translate("LoginWindow", "Register", nullptr));
        ForgetPasswordButton->setText(QCoreApplication::translate("LoginWindow", "Forget Password ?", nullptr));
        connectionMessageLabel->setText(QCoreApplication::translate("LoginWindow", "[+] connection", nullptr));
        ErrorMessageLabel->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class LoginWindow: public Ui_LoginWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOGINWINDOW_H
