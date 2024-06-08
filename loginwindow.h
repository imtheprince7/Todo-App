#ifndef LOGINWINDOW_H
#define LOGINWINDOW_H

#include <QMainWindow>
#include <QSqlDatabase>

#include"registrationpage.h"
#include"informationretrieve.h"
#include "mainpage.h"

QT_BEGIN_NAMESPACE
namespace Ui {
class LoginWindow;
}
QT_END_NAMESPACE

class LoginWindow : public QMainWindow
{
    Q_OBJECT
public:
    LoginWindow(QWidget *parent = nullptr);
    ~LoginWindow();

    QSqlDatabase mydb ;
    void connClose(){
        mydb.close();
        mydb.removeDatabase(QSqlDatabase::defaultConnection);
    }

    bool connOpen(){
        mydb = QSqlDatabase:: addDatabase("QSQLITE");
        mydb.setDatabaseName("C:/Users/LENOVO/Documents/sqliteDB/tododb.db");
        if (!mydb.open()) {
            qDebug() << "Error: Unable to open database";
            return false;
        }
        return true;
    }
  QString getUserName(const QString &username, const QString &password);

private slots:
    void on_LoginButton_clicked();

    void on_RegisterButton_clicked();

    void on_ForgetPasswordButton_clicked();

private:
    Ui::LoginWindow *ui;
};
#endif // LOGINWINDOW_H
