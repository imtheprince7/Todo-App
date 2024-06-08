#ifndef INFORMATIONRETRIEVE_H
#define INFORMATIONRETRIEVE_H

#include <QDialog>

namespace Ui {
class InformationRetrieve;
}

class InformationRetrieve : public QDialog {
    Q_OBJECT

public:
    explicit InformationRetrieve(QWidget *parent = nullptr);
    ~InformationRetrieve();

private slots:
    void on_SearchButton_clicked();
    void on_UpdateButton_clicked();
    void on_BackButton_clicked();

private:
    Ui::InformationRetrieve *ui;
};

#endif // INFORMATIONRETRIEVE_H
