#include "marktaskascomplete.h"
#include "ui_marktaskascomplete.h"

MarkTaskAsComplete::MarkTaskAsComplete(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::MarkTaskAsComplete)
{
    ui->setupUi(this);
}

MarkTaskAsComplete::~MarkTaskAsComplete()
{
    delete ui;
}
