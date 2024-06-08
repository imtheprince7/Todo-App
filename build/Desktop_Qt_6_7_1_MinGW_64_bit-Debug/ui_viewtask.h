
#ifndef UI_VIEWTASK_H
#define UI_VIEWTASK_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableWidget>

QT_BEGIN_NAMESPACE

class Ui_ViewTaskTableWidget
{
public:
    QPushButton *LogoutButton;
    QPushButton *BackButton;
    QLabel *ViewTaskMessageLabel;
    QLabel *connectionMessageLabel;
    QTableWidget *tableWidget;

    void setupUi(QDialog *ViewTaskTableWidget)
    {
        if (ViewTaskTableWidget->objectName().isEmpty())
            ViewTaskTableWidget->setObjectName("ViewTaskTableWidget");
        ViewTaskTableWidget->resize(900, 700);
        ViewTaskTableWidget->setMaximumSize(QSize(900, 700));
        LogoutButton = new QPushButton(ViewTaskTableWidget);
        LogoutButton->setObjectName("LogoutButton");
        LogoutButton->setGeometry(QRect(760, 10, 131, 51));
        LogoutButton->setMaximumSize(QSize(150, 70));
        QFont font;
        font.setPointSize(14);
        font.setBold(true);
        font.setItalic(true);
        LogoutButton->setFont(font);
        BackButton = new QPushButton(ViewTaskTableWidget);
        BackButton->setObjectName("BackButton");
        BackButton->setGeometry(QRect(760, 110, 131, 51));
        BackButton->setMaximumSize(QSize(150, 70));
        BackButton->setFont(font);
        ViewTaskMessageLabel = new QLabel(ViewTaskTableWidget);
        ViewTaskMessageLabel->setObjectName("ViewTaskMessageLabel");
        ViewTaskMessageLabel->setGeometry(QRect(30, 60, 300, 61));
        ViewTaskMessageLabel->setMaximumSize(QSize(300, 100));
        QFont font1;
        font1.setPointSize(18);
        font1.setBold(true);
        font1.setItalic(true);
        ViewTaskMessageLabel->setFont(font1);
        connectionMessageLabel = new QLabel(ViewTaskTableWidget);
        connectionMessageLabel->setObjectName("connectionMessageLabel");
        connectionMessageLabel->setGeometry(QRect(30, 660, 250, 20));
        connectionMessageLabel->setMaximumSize(QSize(250, 20));
        QFont font2;
        font2.setPointSize(11);
        connectionMessageLabel->setFont(font2);
        tableWidget = new QTableWidget(ViewTaskTableWidget);
        tableWidget->setObjectName("tableWidget");
        tableWidget->setGeometry(QRect(20, 120, 730, 520));
        tableWidget->setMaximumSize(QSize(730, 520));
        tableWidget->setFont(font2);

        retranslateUi(ViewTaskTableWidget);

        QMetaObject::connectSlotsByName(ViewTaskTableWidget);
    } // setupUi

    void retranslateUi(QDialog *ViewTaskTableWidget)
    {
        ViewTaskTableWidget->setWindowTitle(QCoreApplication::translate("ViewTaskTableWidget", "Dialog", nullptr));
        LogoutButton->setText(QCoreApplication::translate("ViewTaskTableWidget", "Logout", nullptr));
        BackButton->setText(QCoreApplication::translate("ViewTaskTableWidget", "Back", nullptr));
        ViewTaskMessageLabel->setText(QCoreApplication::translate("ViewTaskTableWidget", "View your tasks:", nullptr));
        connectionMessageLabel->setText(QCoreApplication::translate("ViewTaskTableWidget", "[+]", nullptr));
    } // retranslateUi

};

namespace Ui {
class ViewTaskTableWidget: public Ui_ViewTprivate slots:
                                                           void on_BackButton_clicked();
askTableWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_VIEWTASK_H
private slots:
void on_BackButton_clicked();
