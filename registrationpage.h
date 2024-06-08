#ifndef REGISTRATIONPAGE_H
#define REGISTRATIONPAGE_H

#include <QDialog>
#include <QSqlDatabase>
#include"loginwindow.h"

namespace Ui {
class RegistrationPage;
}

class RegistrationPage : public QDialog
{
    Q_OBJECT

public:
    explicit RegistrationPage(QWidget *parent = nullptr);
    ~RegistrationPage();

private slots:
    void on_RegisterButton_clicked();
     void on_BackButton_clicked();

private:
    Ui::RegistrationPage *ui;
};

#endif // REGISTRATIONPAGE_H
