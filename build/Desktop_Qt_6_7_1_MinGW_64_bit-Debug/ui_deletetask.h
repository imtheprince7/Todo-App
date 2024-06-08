/********************************************************************************
** Form generated from reading UI file 'deletetask.ui'
**
** Created by: Qt User Interface Compiler version 6.7.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DELETETASK_H
#define UI_DELETETASK_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableWidget>

QT_BEGIN_NAMESPACE

class Ui_DeleteTask
{
public:
    QLabel *DeleteTaskMessageLabel;
    QPushButton *BackButton;
    QTableWidget *ViewTaskTableWidget;

    void setupUi(QDialog *DeleteTask)
    {
        if (DeleteTask->objectName().isEmpty())
            DeleteTask->setObjectName("DeleteTask");
        DeleteTask->resize(1100, 700);
        DeleteTask->setMaximumSize(QSize(1100, 700));
        DeleteTaskMessageLabel = new QLabel(DeleteTask);
        DeleteTaskMessageLabel->setObjectName("DeleteTaskMessageLabel");
        DeleteTaskMessageLabel->setGeometry(QRect(50, 10, 341, 51));
        DeleteTaskMessageLabel->setMaximumSize(QSize(450, 70));
        QFont font;
        font.setPointSize(22);
        font.setBold(true);
        font.setItalic(true);
        font.setUnderline(true);
        DeleteTaskMessageLabel->setFont(font);
        BackButton = new QPushButton(DeleteTask);
        BackButton->setObjectName("BackButton");
        BackButton->setGeometry(QRect(930, 10, 141, 51));
        BackButton->setMaximumSize(QSize(150, 70));
        QFont font1;
        font1.setPointSize(14);
        font1.setBold(true);
        font1.setItalic(true);
        BackButton->setFont(font1);
        ViewTaskTableWidget = new QTableWidget(DeleteTask);
        ViewTaskTableWidget->setObjectName("ViewTaskTableWidget");
        ViewTaskTableWidget->setGeometry(QRect(20, 110, 1050, 560));
        ViewTaskTableWidget->setMaximumSize(QSize(1050, 560));
        QFont font2;
        font2.setPointSize(12);
        ViewTaskTableWidget->setFont(font2);

        retranslateUi(DeleteTask);

        QMetaObject::connectSlotsByName(DeleteTask);
    } // setupUi

    void retranslateUi(QDialog *DeleteTask)
    {
        DeleteTask->setWindowTitle(QCoreApplication::translate("DeleteTask", "Dialog", nullptr));
        DeleteTaskMessageLabel->setText(QCoreApplication::translate("DeleteTask", "Delete your tasks", nullptr));
        BackButton->setText(QCoreApplication::translate("DeleteTask", "Back", nullptr));
    } // retranslateUi

};

namespace Ui {
    class DeleteTask: public Ui_DeleteTask {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DELETETASK_H
