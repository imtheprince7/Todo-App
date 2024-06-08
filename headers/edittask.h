#ifndef EDITTASK_H
#define EDITTASK_H

#include <QDialog>
#include <QtSql/QSqlDatabase>

namespace Ui {
class EditTask;
}

class EditTask : public QDialog {
    Q_OBJECT

public:
    explicit EditTask(QWidget *parent = nullptr);
    ~EditTask();
    void setUserName(const QString &name, const QString &username);
    void fetchData(const QString &username);

private slots:
    void on_BackButton_clicked();
    void cellChanged(int row, int column);
    void clearSelection();

private:
    Ui::EditTask *ui;
    QString pname;
    QString pusername;
    void populateTableWidget(QSqlQuery &query);
};

#endif // EDITTASK_H
