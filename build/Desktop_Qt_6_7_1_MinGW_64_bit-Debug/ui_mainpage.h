/********************************************************************************
** Form generated from reading UI file 'mainpage.ui'
**
** Created by: Qt User Interface Compiler version 6.7.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINPAGE_H
#define UI_MAINPAGE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextEdit>

QT_BEGIN_NAMESPACE

class Ui_MainPage
{
public:
    QTextEdit *UsernameTextField;
    QLabel *HelloMessageLabel;
    QPushButton *logoutButton;
    QLabel *FunctionMessageLabel;
    QPushButton *AddTasksButton;
    QPushButton *ViewTaskButton;
    QPushButton *deleteTasksButton;
    QPushButton *MarkCompleteTaskButton;
    QPushButton *EditTaskButton;

    void setupUi(QDialog *MainPage)
    {
        if (MainPage->objectName().isEmpty())
            MainPage->setObjectName("MainPage");
        MainPage->resize(700, 600);
        MainPage->setMaximumSize(QSize(700, 600));
        UsernameTextField = new QTextEdit(MainPage);
        UsernameTextField->setObjectName("UsernameTextField");
        UsernameTextField->setGeometry(QRect(100, 10, 250, 50));
        UsernameTextField->setMaximumSize(QSize(250, 50));
        QFont font;
        font.setPointSize(12);
        UsernameTextField->setFont(font);
        UsernameTextField->setAutoFillBackground(true);
        HelloMessageLabel = new QLabel(MainPage);
        HelloMessageLabel->setObjectName("HelloMessageLabel");
        HelloMessageLabel->setGeometry(QRect(10, 20, 81, 31));
        HelloMessageLabel->setMaximumSize(QSize(100, 50));
        QFont font1;
        font1.setPointSize(16);
        font1.setBold(true);
        font1.setItalic(true);
        HelloMessageLabel->setFont(font1);
        logoutButton = new QPushButton(MainPage);
        logoutButton->setObjectName("logoutButton");
        logoutButton->setGeometry(QRect(530, 10, 141, 51));
        logoutButton->setMaximumSize(QSize(150, 70));
        QFont font2;
        font2.setPointSize(14);
        font2.setBold(true);
        font2.setItalic(true);
        logoutButton->setFont(font2);
        FunctionMessageLabel = new QLabel(MainPage);
        FunctionMessageLabel->setObjectName("FunctionMessageLabel");
        FunctionMessageLabel->setGeometry(QRect(10, 170, 400, 61));
        FunctionMessageLabel->setMaximumSize(QSize(400, 100));
        QFont font3;
        font3.setPointSize(22);
        font3.setBold(true);
        font3.setItalic(true);
        FunctionMessageLabel->setFont(font3);
        AddTasksButton = new QPushButton(MainPage);
        AddTasksButton->setObjectName("AddTasksButton");
        AddTasksButton->setGeometry(QRect(30, 290, 150, 51));
        AddTasksButton->setMaximumSize(QSize(150, 70));
        AddTasksButton->setFont(font2);
        ViewTaskButton = new QPushButton(MainPage);
        ViewTaskButton->setObjectName("ViewTaskButton");
        ViewTaskButton->setGeometry(QRect(280, 290, 150, 51));
        ViewTaskButton->setMaximumSize(QSize(150, 70));
        ViewTaskButton->setFont(font2);
        deleteTasksButton = new QPushButton(MainPage);
        deleteTasksButton->setObjectName("deleteTasksButton");
        deleteTasksButton->setGeometry(QRect(30, 380, 150, 51));
        deleteTasksButton->setMaximumSize(QSize(150, 70));
        deleteTasksButton->setFont(font2);
        MarkCompleteTaskButton = new QPushButton(MainPage);
        MarkCompleteTaskButton->setObjectName("MarkCompleteTaskButton");
        MarkCompleteTaskButton->setGeometry(QRect(90, 470, 300, 51));
        MarkCompleteTaskButton->setMaximumSize(QSize(300, 70));
        MarkCompleteTaskButton->setFont(font2);
        EditTaskButton = new QPushButton(MainPage);
        EditTaskButton->setObjectName("EditTaskButton");
        EditTaskButton->setGeometry(QRect(280, 380, 150, 51));
        EditTaskButton->setMaximumSize(QSize(150, 70));
        EditTaskButton->setFont(font2);

        retranslateUi(MainPage);

        QMetaObject::connectSlotsByName(MainPage);
    } // setupUi

    void retranslateUi(QDialog *MainPage)
    {
        MainPage->setWindowTitle(QCoreApplication::translate("MainPage", "Dialog", nullptr));
        HelloMessageLabel->setText(QCoreApplication::translate("MainPage", "Hello", nullptr));
        logoutButton->setText(QCoreApplication::translate("MainPage", "Logout", nullptr));
        FunctionMessageLabel->setText(QCoreApplication::translate("MainPage", "Funtions to perform:", nullptr));
        AddTasksButton->setText(QCoreApplication::translate("MainPage", "Add Task", nullptr));
        ViewTaskButton->setText(QCoreApplication::translate("MainPage", "View Tasks", nullptr));
        deleteTasksButton->setText(QCoreApplication::translate("MainPage", "Delete Tasks", nullptr));
        MarkCompleteTaskButton->setText(QCoreApplication::translate("MainPage", "Mark Task as Completed", nullptr));
        EditTaskButton->setText(QCoreApplication::translate("MainPage", "Edit Tasks", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainPage: public Ui_MainPage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINPAGE_H
