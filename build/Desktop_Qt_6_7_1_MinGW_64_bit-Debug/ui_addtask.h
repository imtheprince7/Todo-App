/********************************************************************************
** Form generated from reading UI file 'addtask.ui'
**
** Created by: Qt User Interface Compiler version 6.7.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADDTASK_H
#define UI_ADDTASK_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDateEdit>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_AddTask
{
public:
    QPushButton *BackButton;
    QLabel *addTaskMessageLabel;
    QLabel *DescriptionLabel;
    QLabel *taskNameLabel;
    QLabel *DateLabel;
    QDateEdit *datepicker;
    QPushButton *AddTaskButton;
    QLabel *connectionMessageLabel;
    QLineEdit *TaskNameLineEdit;
    QLineEdit *DescriptionLineEdit;
    QLabel *successfullMessageLabel;

    void setupUi(QDialog *AddTask)
    {
        if (AddTask->objectName().isEmpty())
            AddTask->setObjectName("AddTask");
        AddTask->resize(700, 600);
        AddTask->setMaximumSize(QSize(700, 600));
        BackButton = new QPushButton(AddTask);
        BackButton->setObjectName("BackButton");
        BackButton->setGeometry(QRect(540, 10, 141, 51));
        BackButton->setMaximumSize(QSize(150, 70));
        QFont font;
        font.setPointSize(14);
        font.setBold(true);
        font.setItalic(true);
        BackButton->setFont(font);
        addTaskMessageLabel = new QLabel(AddTask);
        addTaskMessageLabel->setObjectName("addTaskMessageLabel");
        addTaskMessageLabel->setGeometry(QRect(90, 0, 300, 70));
        addTaskMessageLabel->setMaximumSize(QSize(300, 70));
        QFont font1;
        font1.setPointSize(22);
        font1.setBold(true);
        font1.setItalic(true);
        font1.setUnderline(true);
        addTaskMessageLabel->setFont(font1);
        DescriptionLabel = new QLabel(AddTask);
        DescriptionLabel->setObjectName("DescriptionLabel");
        DescriptionLabel->setGeometry(QRect(100, 210, 150, 51));
        DescriptionLabel->setMaximumSize(QSize(150, 70));
        DescriptionLabel->setFont(font);
        taskNameLabel = new QLabel(AddTask);
        taskNameLabel->setObjectName("taskNameLabel");
        taskNameLabel->setGeometry(QRect(100, 90, 150, 70));
        taskNameLabel->setMaximumSize(QSize(150, 70));
        taskNameLabel->setFont(font);
        DateLabel = new QLabel(AddTask);
        DateLabel->setObjectName("DateLabel");
        DateLabel->setGeometry(QRect(100, 420, 91, 51));
        DateLabel->setMaximumSize(QSize(150, 70));
        DateLabel->setFont(font);
        datepicker = new QDateEdit(AddTask);
        datepicker->setObjectName("datepicker");
        datepicker->setGeometry(QRect(219, 425, 241, 51));
        QFont font2;
        font2.setPointSize(12);
        font2.setBold(true);
        font2.setItalic(true);
        datepicker->setFont(font2);
        AddTaskButton = new QPushButton(AddTask);
        AddTaskButton->setObjectName("AddTaskButton");
        AddTaskButton->setGeometry(QRect(250, 490, 150, 70));
        AddTaskButton->setMaximumSize(QSize(150, 70));
        AddTaskButton->setFont(font);
        connectionMessageLabel = new QLabel(AddTask);
        connectionMessageLabel->setObjectName("connectionMessageLabel");
        connectionMessageLabel->setGeometry(QRect(0, 550, 200, 20));
        connectionMessageLabel->setMaximumSize(QSize(200, 20));
        QFont font3;
        font3.setPointSize(11);
        connectionMessageLabel->setFont(font3);
        TaskNameLineEdit = new QLineEdit(AddTask);
        TaskNameLineEdit->setObjectName("TaskNameLineEdit");
        TaskNameLineEdit->setGeometry(QRect(90, 150, 400, 60));
        TaskNameLineEdit->setMaximumSize(QSize(400, 60));
        QFont font4;
        font4.setPointSize(13);
        font4.setBold(true);
        font4.setItalic(true);
        TaskNameLineEdit->setFont(font4);
        DescriptionLineEdit = new QLineEdit(AddTask);
        DescriptionLineEdit->setObjectName("DescriptionLineEdit");
        DescriptionLineEdit->setGeometry(QRect(90, 260, 400, 150));
        DescriptionLineEdit->setMaximumSize(QSize(400, 150));
        DescriptionLineEdit->setFont(font4);
        successfullMessageLabel = new QLabel(AddTask);
        successfullMessageLabel->setObjectName("successfullMessageLabel");
        successfullMessageLabel->setGeometry(QRect(40, 110, 400, 25));
        successfullMessageLabel->setMaximumSize(QSize(400, 25));
        successfullMessageLabel->setFont(font3);

        retranslateUi(AddTask);

        QMetaObject::connectSlotsByName(AddTask);
    } // setupUi

    void retranslateUi(QDialog *AddTask)
    {
        AddTask->setWindowTitle(QCoreApplication::translate("AddTask", "Dialog", nullptr));
        BackButton->setText(QCoreApplication::translate("AddTask", "Back", nullptr));
        addTaskMessageLabel->setText(QCoreApplication::translate("AddTask", "Add Task Details", nullptr));
        DescriptionLabel->setText(QCoreApplication::translate("AddTask", "Description", nullptr));
        taskNameLabel->setText(QCoreApplication::translate("AddTask", "Task Name", nullptr));
        DateLabel->setText(QCoreApplication::translate("AddTask", "Date:", nullptr));
        AddTaskButton->setText(QCoreApplication::translate("AddTask", "Add Task", nullptr));
        connectionMessageLabel->setText(QCoreApplication::translate("AddTask", "[+]", nullptr));
        successfullMessageLabel->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class AddTask: public Ui_AddTask {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADDTASK_H
