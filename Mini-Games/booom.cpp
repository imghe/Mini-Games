#include "booom.h"
#include "ui_booom.h"

Booom::Booom(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Booom)
{
    ui->setupUi(this);
}

Booom::~Booom()
{
    delete ui;
}
