#ifndef VIEWTASKS_H
#define VIEWTASKS_H

#include <QDialog>
#include <QSqlQuery>

namespace Ui {
class ViewTasks;
}

class ViewTasks : public QDialog {
    Q_OBJECT

public:
    explicit ViewTasks(QWidget *parent = nullptr);
    ~ViewTasks();
    void setUserName(const QString &name, const QString &username);

private slots:
    void on_pushButton_clicked();

private:
    Ui::ViewTasks *ui;
    QString pname;
    QString username;

    void fetchData();
    void populateTableWidget(QSqlQuery &query);

};

#endif // VIEWTASKS_H
