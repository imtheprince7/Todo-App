#ifndef EDITTASK_H
#define EDITTASK_H

#include <QDialog>
#include <QSqlDatabase>
#include <QSqlQuery>
#include <QMessageBox>
#include <QVBoxLayout>
#include "loginwindow.h"

namespace Ui {
class EditTask;
}

class EditTask : public QDialog {
    Q_OBJECT

public:
    explicit EditTask(QWidget *parent = nullptr);
    ~EditTask();
    void setUserName(const QString &name, const QString &username);

private slots:
    void on_BackButton_clicked();
    void fetchData();
    void populateTableWidget(QSqlQuery &query);
    void cellChanged(int row, int column);

private:
    Ui::EditTask *ui;
    QString pname;
    QString pusername;
    void clearSelection();
};

#endif // EDITTASK_H
