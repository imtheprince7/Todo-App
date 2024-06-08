#ifndef MARKTASKASCOMPLETE_H
#define MARKTASKASCOMPLETE_H

#include <QDialog>

namespace Ui {
class MarkTaskAsComplete;
}

class MarkTaskAsComplete : public QDialog
{
    Q_OBJECT

public:
    explicit MarkTaskAsComplete(QWidget *parent = nullptr);
    ~MarkTaskAsComplete();

private:
    Ui::MarkTaskAsComplete *ui;
};

#endif // MARKTASKASCOMPLETE_H
