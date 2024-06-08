/********************************************************************************
** Form generated from reading UI file 'marktaskascomplete.ui'
**
** Created by: Qt User Interface Compiler version 6.7.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MARKTASKASCOMPLETE_H
#define UI_MARKTASKASCOMPLETE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_MarkTaskAsComplete
{
public:
    QPushButton *LogoutButton;
    QPushButton *BackButton;
    QLabel *MarkCompleteMessageLabel;
    QListWidget *MarkCompleteListWidget;

    void setupUi(QDialog *MarkTaskAsComplete)
    {
        if (MarkTaskAsComplete->objectName().isEmpty())
            MarkTaskAsComplete->setObjectName("MarkTaskAsComplete");
        MarkTaskAsComplete->resize(990, 662);
        LogoutButton = new QPushButton(MarkTaskAsComplete);
        LogoutButton->setObjectName("LogoutButton");
        LogoutButton->setGeometry(QRect(840, 10, 141, 51));
        LogoutButton->setMaximumSize(QSize(150, 70));
        QFont font;
        font.setPointSize(14);
        font.setBold(true);
        font.setItalic(true);
        LogoutButton->setFont(font);
        BackButton = new QPushButton(MarkTaskAsComplete);
        BackButton->setObjectName("BackButton");
        BackButton->setGeometry(QRect(840, 110, 141, 51));
        BackButton->setMaximumSize(QSize(150, 70));
        BackButton->setFont(font);
        MarkCompleteMessageLabel = new QLabel(MarkTaskAsComplete);
        MarkCompleteMessageLabel->setObjectName("MarkCompleteMessageLabel");
        MarkCompleteMessageLabel->setGeometry(QRect(30, 110, 400, 61));
        MarkCompleteMessageLabel->setMaximumSize(QSize(400, 100));
        QFont font1;
        font1.setPointSize(18);
        font1.setBold(true);
        font1.setItalic(true);
        MarkCompleteMessageLabel->setFont(font1);
        MarkCompleteListWidget = new QListWidget(MarkTaskAsComplete);
        MarkCompleteListWidget->setObjectName("MarkCompleteListWidget");
        MarkCompleteListWidget->setGeometry(QRect(30, 180, 811, 461));

        retranslateUi(MarkTaskAsComplete);

        QMetaObject::connectSlotsByName(MarkTaskAsComplete);
    } // setupUi

    void retranslateUi(QDialog *MarkTaskAsComplete)
    {
        MarkTaskAsComplete->setWindowTitle(QCoreApplication::translate("MarkTaskAsComplete", "Dialog", nullptr));
        LogoutButton->setText(QCoreApplication::translate("MarkTaskAsComplete", "Logout", nullptr));
        BackButton->setText(QCoreApplication::translate("MarkTaskAsComplete", "Back", nullptr));
        MarkCompleteMessageLabel->setText(QCoreApplication::translate("MarkTaskAsComplete", "Mark as complete section", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MarkTaskAsComplete: public Ui_MarkTaskAsComplete {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MARKTASKASCOMPLETE_H
