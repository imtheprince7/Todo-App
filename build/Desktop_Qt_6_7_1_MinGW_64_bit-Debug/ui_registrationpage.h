/********************************************************************************
** Form generated from reading UI file 'registrationpage.ui'
**
** Created by: Qt User Interface Compiler version 6.7.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_REGISTRATIONPAGE_H
#define UI_REGISTRATIONPAGE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_RegistrationPage
{
public:
    QLabel *RegistrationDetailLabel;
    QPushButton *BackButton;
    QLabel *NameLabel;
    QLabel *UsernameLabel;
    QLabel *EmailIdLabel;
    QLabel *MobileNumberLabel;
    QLabel *PasswordLabel;
    QLabel *ConfirmPasswordLabel;
    QPushButton *RegisterButton;
    QLineEdit *PasswordLineEdit;
    QLineEdit *ConfirmPasswordLineEdit;
    QLineEdit *NameTextField;
    QLineEdit *UsernameTextField;
    QLineEdit *EmailIdTextField;
    QLineEdit *MobileNumberTextField;

    void setupUi(QDialog *RegistrationPage)
    {
        if (RegistrationPage->objectName().isEmpty())
            RegistrationPage->setObjectName("RegistrationPage");
        RegistrationPage->resize(700, 700);
        RegistrationPage->setMaximumSize(QSize(700, 700));
        RegistrationDetailLabel = new QLabel(RegistrationPage);
        RegistrationDetailLabel->setObjectName("RegistrationDetailLabel");
        RegistrationDetailLabel->setGeometry(QRect(50, 10, 411, 61));
        RegistrationDetailLabel->setMaximumSize(QSize(450, 70));
        QFont font;
        font.setPointSize(22);
        font.setBold(true);
        font.setItalic(true);
        font.setUnderline(true);
        RegistrationDetailLabel->setFont(font);
        BackButton = new QPushButton(RegistrationPage);
        BackButton->setObjectName("BackButton");
        BackButton->setGeometry(QRect(540, 20, 150, 50));
        BackButton->setMaximumSize(QSize(150, 50));
        QFont font1;
        font1.setPointSize(17);
        font1.setBold(true);
        font1.setItalic(true);
        BackButton->setFont(font1);
        NameLabel = new QLabel(RegistrationPage);
        NameLabel->setObjectName("NameLabel");
        NameLabel->setGeometry(QRect(70, 150, 150, 41));
        NameLabel->setMaximumSize(QSize(150, 50));
        QFont font2;
        font2.setPointSize(16);
        font2.setBold(true);
        font2.setItalic(true);
        NameLabel->setFont(font2);
        UsernameLabel = new QLabel(RegistrationPage);
        UsernameLabel->setObjectName("UsernameLabel");
        UsernameLabel->setGeometry(QRect(60, 210, 150, 50));
        UsernameLabel->setMaximumSize(QSize(150, 50));
        UsernameLabel->setFont(font2);
        EmailIdLabel = new QLabel(RegistrationPage);
        EmailIdLabel->setObjectName("EmailIdLabel");
        EmailIdLabel->setGeometry(QRect(60, 290, 141, 41));
        EmailIdLabel->setMaximumSize(QSize(150, 50));
        EmailIdLabel->setFont(font2);
        MobileNumberLabel = new QLabel(RegistrationPage);
        MobileNumberLabel->setObjectName("MobileNumberLabel");
        MobileNumberLabel->setGeometry(QRect(50, 360, 231, 50));
        MobileNumberLabel->setMaximumSize(QSize(250, 50));
        MobileNumberLabel->setFont(font2);
        PasswordLabel = new QLabel(RegistrationPage);
        PasswordLabel->setObjectName("PasswordLabel");
        PasswordLabel->setGeometry(QRect(40, 450, 231, 50));
        PasswordLabel->setMaximumSize(QSize(250, 50));
        PasswordLabel->setFont(font2);
        ConfirmPasswordLabel = new QLabel(RegistrationPage);
        ConfirmPasswordLabel->setObjectName("ConfirmPasswordLabel");
        ConfirmPasswordLabel->setGeometry(QRect(40, 530, 231, 50));
        ConfirmPasswordLabel->setMaximumSize(QSize(250, 50));
        ConfirmPasswordLabel->setFont(font2);
        RegisterButton = new QPushButton(RegistrationPage);
        RegisterButton->setObjectName("RegisterButton");
        RegisterButton->setGeometry(QRect(340, 620, 200, 61));
        RegisterButton->setMaximumSize(QSize(200, 70));
        RegisterButton->setFont(font1);
        PasswordLineEdit = new QLineEdit(RegistrationPage);
        PasswordLineEdit->setObjectName("PasswordLineEdit");
        PasswordLineEdit->setGeometry(QRect(290, 450, 250, 50));
        PasswordLineEdit->setMaximumSize(QSize(250, 50));
        QFont font3;
        font3.setPointSize(13);
        font3.setBold(true);
        font3.setItalic(true);
        PasswordLineEdit->setFont(font3);
        PasswordLineEdit->setEchoMode(QLineEdit::Password);
        ConfirmPasswordLineEdit = new QLineEdit(RegistrationPage);
        ConfirmPasswordLineEdit->setObjectName("ConfirmPasswordLineEdit");
        ConfirmPasswordLineEdit->setGeometry(QRect(290, 530, 250, 50));
        ConfirmPasswordLineEdit->setMaximumSize(QSize(250, 50));
        ConfirmPasswordLineEdit->setFont(font3);
        ConfirmPasswordLineEdit->setEchoMode(QLineEdit::Password);
        NameTextField = new QLineEdit(RegistrationPage);
        NameTextField->setObjectName("NameTextField");
        NameTextField->setGeometry(QRect(290, 160, 250, 50));
        NameTextField->setMaximumSize(QSize(250, 50));
        NameTextField->setFont(font3);
        UsernameTextField = new QLineEdit(RegistrationPage);
        UsernameTextField->setObjectName("UsernameTextField");
        UsernameTextField->setGeometry(QRect(290, 230, 250, 50));
        UsernameTextField->setMaximumSize(QSize(250, 50));
        UsernameTextField->setFont(font3);
        EmailIdTextField = new QLineEdit(RegistrationPage);
        EmailIdTextField->setObjectName("EmailIdTextField");
        EmailIdTextField->setGeometry(QRect(290, 300, 250, 50));
        EmailIdTextField->setMaximumSize(QSize(250, 50));
        EmailIdTextField->setFont(font3);
        MobileNumberTextField = new QLineEdit(RegistrationPage);
        MobileNumberTextField->setObjectName("MobileNumberTextField");
        MobileNumberTextField->setGeometry(QRect(290, 380, 250, 50));
        MobileNumberTextField->setMaximumSize(QSize(250, 50));
        MobileNumberTextField->setFont(font3);

        retranslateUi(RegistrationPage);

        QMetaObject::connectSlotsByName(RegistrationPage);
    } // setupUi

    void retranslateUi(QDialog *RegistrationPage)
    {
        RegistrationPage->setWindowTitle(QCoreApplication::translate("RegistrationPage", "Dialog", nullptr));
        RegistrationDetailLabel->setText(QCoreApplication::translate("RegistrationPage", "Registration  Details", nullptr));
        BackButton->setText(QCoreApplication::translate("RegistrationPage", "Back", nullptr));
        NameLabel->setText(QCoreApplication::translate("RegistrationPage", "Name", nullptr));
        UsernameLabel->setText(QCoreApplication::translate("RegistrationPage", "Username", nullptr));
        EmailIdLabel->setText(QCoreApplication::translate("RegistrationPage", "Email ID", nullptr));
        MobileNumberLabel->setText(QCoreApplication::translate("RegistrationPage", "Mobile Number", nullptr));
        PasswordLabel->setText(QCoreApplication::translate("RegistrationPage", "Password", nullptr));
        ConfirmPasswordLabel->setText(QCoreApplication::translate("RegistrationPage", "ConfirmPassword", nullptr));
        RegisterButton->setText(QCoreApplication::translate("RegistrationPage", "Register", nullptr));
    } // retranslateUi

};

namespace Ui {
    class RegistrationPage: public Ui_RegistrationPage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_REGISTRATIONPAGE_H
