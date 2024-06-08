/********************************************************************************
** Form generated from reading UI file 'edittask.ui'
**
** Created by: Qt User Interface Compiler version 6.7.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_EDITTASK_H
#define UI_EDITTASK_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableWidget>

QT_BEGIN_NAMESPACE

class Ui_EditTask
{
public:
    QLabel *EditTaskMessageLabel;
    QPushButton *BackButton;
    QLabel *connectionMessageLabel;
    QTableWidget *ViewTaskTableWidget;

    void setupUi(QDialog *EditTask)
    {
        if (EditTask->objectName().isEmpty())
            EditTask->setObjectName("EditTask");
        EditTask->resize(1100, 700);
        EditTask->setMaximumSize(QSize(1100, 700));
        EditTaskMessageLabel = new QLabel(EditTask);
        EditTaskMessageLabel->setObjectName("EditTaskMessageLabel");
        EditTaskMessageLabel->setGeometry(QRect(30, 10, 341, 61));
        EditTaskMessageLabel->setMaximumSize(QSize(400, 70));
        QFont font;
        font.setPointSize(24);
        font.setBold(true);
        font.setItalic(true);
        font.setUnderline(true);
        EditTaskMessageLabel->setFont(font);
        BackButton = new QPushButton(EditTask);
        BackButton->setObjectName("BackButton");
        BackButton->setGeometry(QRect(880, 10, 180, 61));
        BackButton->setMaximumSize(QSize(180, 70));
        QFont font1;
        font1.setPointSize(14);
        font1.setBold(true);
        font1.setItalic(true);
        BackButton->setFont(font1);
        connectionMessageLabel = new QLabel(EditTask);
        connectionMessageLabel->setObjectName("connectionMessageLabel");
        connectionMessageLabel->setGeometry(QRect(20, 670, 200, 21));
        connectionMessageLabel->setMaximumSize(QSize(200, 50));
        QFont font2;
        font2.setPointSize(11);
        connectionMessageLabel->setFont(font2);
        ViewTaskTableWidget = new QTableWidget(EditTask);
        ViewTaskTableWidget->setObjectName("ViewTaskTableWidget");
        ViewTaskTableWidget->setGeometry(QRect(20, 110, 1050, 560));
        ViewTaskTableWidget->setMaximumSize(QSize(1050, 560));
        QFont font3;
        font3.setPointSize(12);
        ViewTaskTableWidget->setFont(font3);

        retranslateUi(EditTask);

        QMetaObject::connectSlotsByName(EditTask);
    } // setupUi

    void retranslateUi(QDialog *EditTask)
    {
        EditTask->setWindowTitle(QCoreApplication::translate("EditTask", "Dialog", nullptr));
        EditTaskMessageLabel->setText(QCoreApplication::translate("EditTask", "Edit your tasks", nullptr));
        BackButton->setText(QCoreApplication::translate("EditTask", "Back", nullptr));
        connectionMessageLabel->setText(QCoreApplication::translate("EditTask", "[+]", nullptr));
    } // retranslateUi

};

namespace Ui {
    class EditTask: public Ui_EditTask {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_EDITTASK_H
