/********************************************************************************
** Form generated from reading UI file 'viewtasks.ui'
**
** Created by: Qt User Interface Compiler version 6.7.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_VIEWTASKS_H
#define UI_VIEWTASKS_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableWidget>

QT_BEGIN_NAMESPACE

class Ui_ViewTasks
{
public:
    QLabel *ViewTaskMessageLabel;
    QPushButton *pushButton;
    QTableWidget *ViewTaskTableWidget;

    void setupUi(QDialog *ViewTasks)
    {
        if (ViewTasks->objectName().isEmpty())
            ViewTasks->setObjectName("ViewTasks");
        ViewTasks->resize(1100, 700);
        ViewTasks->setMaximumSize(QSize(1100, 700));
        ViewTaskMessageLabel = new QLabel(ViewTasks);
        ViewTaskMessageLabel->setObjectName("ViewTaskMessageLabel");
        ViewTaskMessageLabel->setGeometry(QRect(20, 10, 201, 51));
        ViewTaskMessageLabel->setMaximumSize(QSize(300, 70));
        QFont font;
        font.setPointSize(22);
        font.setBold(true);
        font.setItalic(true);
        font.setUnderline(true);
        ViewTaskMessageLabel->setFont(font);
        pushButton = new QPushButton(ViewTasks);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(930, 10, 150, 61));
        pushButton->setMaximumSize(QSize(150, 70));
        QFont font1;
        font1.setPointSize(18);
        font1.setBold(true);
        font1.setItalic(true);
        pushButton->setFont(font1);
        ViewTaskTableWidget = new QTableWidget(ViewTasks);
        ViewTaskTableWidget->setObjectName("ViewTaskTableWidget");
        ViewTaskTableWidget->setGeometry(QRect(30, 150, 1050, 520));
        ViewTaskTableWidget->setMaximumSize(QSize(1050, 520));
        QFont font2;
        font2.setPointSize(12);
        font2.setBold(true);
        font2.setItalic(true);
        ViewTaskTableWidget->setFont(font2);

        retranslateUi(ViewTasks);

        QMetaObject::connectSlotsByName(ViewTasks);
    } // setupUi

    void retranslateUi(QDialog *ViewTasks)
    {
        ViewTasks->setWindowTitle(QCoreApplication::translate("ViewTasks", "Dialog", nullptr));
        ViewTaskMessageLabel->setText(QCoreApplication::translate("ViewTasks", "View Tasks", nullptr));
        pushButton->setText(QCoreApplication::translate("ViewTasks", "BACK", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ViewTasks: public Ui_ViewTasks {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_VIEWTASKS_H
