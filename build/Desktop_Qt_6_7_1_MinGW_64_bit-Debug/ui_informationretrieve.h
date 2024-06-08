/********************************************************************************
** Form generated from reading UI file 'informationretrieve.ui'
**
** Created by: Qt User Interface Compiler version 6.7.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_INFORMATIONRETRIEVE_H
#define UI_INFORMATIONRETRIEVE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_InformationRetrieve
{
public:
    QLabel *ForgetDetailsMessageLabel;
    QPushButton *BackButton;
    QLabel *UpdateDetailsMessageLabel;
    QLabel *label;
    QLabel *label_2;
    QPushButton *SearchButton;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_5;
    QPushButton *UpdateButton;
    QLineEdit *PasswordLineEdit;
    QLineEdit *ConfirmPasswordLineEdit;
    QLineEdit *UsernameLineEdit;
    QLineEdit *UsernameFirstLineEdit;
    QLineEdit *EmailIdLineEdit;

    void setupUi(QDialog *InformationRetrieve)
    {
        if (InformationRetrieve->objectName().isEmpty())
            InformationRetrieve->setObjectName("InformationRetrieve");
        InformationRetrieve->resize(1000, 700);
        InformationRetrieve->setMaximumSize(QSize(1000, 700));
        ForgetDetailsMessageLabel = new QLabel(InformationRetrieve);
        ForgetDetailsMessageLabel->setObjectName("ForgetDetailsMessageLabel");
        ForgetDetailsMessageLabel->setGeometry(QRect(30, 20, 351, 51));
        ForgetDetailsMessageLabel->setMaximumSize(QSize(500, 100));
        QFont font;
        font.setPointSize(20);
        font.setBold(true);
        font.setItalic(true);
        font.setUnderline(true);
        ForgetDetailsMessageLabel->setFont(font);
        BackButton = new QPushButton(InformationRetrieve);
        BackButton->setObjectName("BackButton");
        BackButton->setGeometry(QRect(820, 10, 171, 61));
        BackButton->setMaximumSize(QSize(180, 70));
        QFont font1;
        font1.setPointSize(18);
        font1.setBold(true);
        font1.setItalic(true);
        BackButton->setFont(font1);
        UpdateDetailsMessageLabel = new QLabel(InformationRetrieve);
        UpdateDetailsMessageLabel->setObjectName("UpdateDetailsMessageLabel");
        UpdateDetailsMessageLabel->setGeometry(QRect(40, 350, 381, 51));
        UpdateDetailsMessageLabel->setMaximumSize(QSize(500, 100));
        UpdateDetailsMessageLabel->setFont(font);
        label = new QLabel(InformationRetrieve);
        label->setObjectName("label");
        label->setGeometry(QRect(160, 120, 171, 41));
        label->setMaximumSize(QSize(200, 70));
        QFont font2;
        font2.setPointSize(16);
        font2.setBold(true);
        font2.setItalic(true);
        label->setFont(font2);
        label_2 = new QLabel(InformationRetrieve);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(170, 210, 131, 51));
        label_2->setMaximumSize(QSize(200, 70));
        label_2->setFont(font2);
        SearchButton = new QPushButton(InformationRetrieve);
        SearchButton->setObjectName("SearchButton");
        SearchButton->setGeometry(QRect(820, 180, 171, 61));
        SearchButton->setMaximumSize(QSize(180, 70));
        SearchButton->setFont(font1);
        label_3 = new QLabel(InformationRetrieve);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(140, 530, 131, 51));
        label_3->setMaximumSize(QSize(200, 70));
        label_3->setFont(font2);
        label_4 = new QLabel(InformationRetrieve);
        label_4->setObjectName("label_4");
        label_4->setGeometry(QRect(140, 450, 171, 41));
        label_4->setMaximumSize(QSize(200, 70));
        label_4->setFont(font2);
        label_5 = new QLabel(InformationRetrieve);
        label_5->setObjectName("label_5");
        label_5->setGeometry(QRect(110, 620, 251, 51));
        label_5->setMaximumSize(QSize(400, 70));
        label_5->setFont(font2);
        UpdateButton = new QPushButton(InformationRetrieve);
        UpdateButton->setObjectName("UpdateButton");
        UpdateButton->setGeometry(QRect(810, 550, 180, 61));
        UpdateButton->setMaximumSize(QSize(180, 70));
        UpdateButton->setFont(font1);
        PasswordLineEdit = new QLineEdit(InformationRetrieve);
        PasswordLineEdit->setObjectName("PasswordLineEdit");
        PasswordLineEdit->setGeometry(QRect(380, 540, 300, 50));
        PasswordLineEdit->setMaximumSize(QSize(300, 50));
        QFont font3;
        font3.setPointSize(13);
        font3.setBold(true);
        font3.setItalic(true);
        PasswordLineEdit->setFont(font3);
        PasswordLineEdit->setEchoMode(QLineEdit::Password);
        ConfirmPasswordLineEdit = new QLineEdit(InformationRetrieve);
        ConfirmPasswordLineEdit->setObjectName("ConfirmPasswordLineEdit");
        ConfirmPasswordLineEdit->setGeometry(QRect(380, 620, 300, 50));
        ConfirmPasswordLineEdit->setMaximumSize(QSize(300, 50));
        ConfirmPasswordLineEdit->setFont(font3);
        ConfirmPasswordLineEdit->setEchoMode(QLineEdit::Password);
        UsernameLineEdit = new QLineEdit(InformationRetrieve);
        UsernameLineEdit->setObjectName("UsernameLineEdit");
        UsernameLineEdit->setGeometry(QRect(380, 450, 300, 50));
        UsernameLineEdit->setMaximumSize(QSize(300, 50));
        UsernameLineEdit->setFont(font3);
        UsernameLineEdit->setEchoMode(QLineEdit::Normal);
        UsernameFirstLineEdit = new QLineEdit(InformationRetrieve);
        UsernameFirstLineEdit->setObjectName("UsernameFirstLineEdit");
        UsernameFirstLineEdit->setGeometry(QRect(370, 130, 300, 50));
        UsernameFirstLineEdit->setMaximumSize(QSize(300, 50));
        UsernameFirstLineEdit->setFont(font3);
        UsernameFirstLineEdit->setEchoMode(QLineEdit::Normal);
        EmailIdLineEdit = new QLineEdit(InformationRetrieve);
        EmailIdLineEdit->setObjectName("EmailIdLineEdit");
        EmailIdLineEdit->setGeometry(QRect(370, 220, 300, 50));
        EmailIdLineEdit->setMaximumSize(QSize(300, 50));
        EmailIdLineEdit->setFont(font3);
        EmailIdLineEdit->setEchoMode(QLineEdit::Normal);

        retranslateUi(InformationRetrieve);

        QMetaObject::connectSlotsByName(InformationRetrieve);
    } // setupUi

    void retranslateUi(QDialog *InformationRetrieve)
    {
        InformationRetrieve->setWindowTitle(QCoreApplication::translate("InformationRetrieve", "Dialog", nullptr));
        ForgetDetailsMessageLabel->setText(QCoreApplication::translate("InformationRetrieve", "Know Your Credentials", nullptr));
        BackButton->setText(QCoreApplication::translate("InformationRetrieve", "Back", nullptr));
        UpdateDetailsMessageLabel->setText(QCoreApplication::translate("InformationRetrieve", "Update Your Credentials", nullptr));
        label->setText(QCoreApplication::translate("InformationRetrieve", "Username", nullptr));
        label_2->setText(QCoreApplication::translate("InformationRetrieve", "EmailID", nullptr));
        SearchButton->setText(QCoreApplication::translate("InformationRetrieve", "Search", nullptr));
        label_3->setText(QCoreApplication::translate("InformationRetrieve", "Password", nullptr));
        label_4->setText(QCoreApplication::translate("InformationRetrieve", "Username", nullptr));
        label_5->setText(QCoreApplication::translate("InformationRetrieve", "Confirm Password", nullptr));
        UpdateButton->setText(QCoreApplication::translate("InformationRetrieve", "Update", nullptr));
    } // retranslateUi

};

namespace Ui {
    class InformationRetrieve: public Ui_InformationRetrieve {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_INFORMATIONRETRIEVE_H
