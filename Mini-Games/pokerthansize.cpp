#include "pokerthansize.h"
#include "ui_pokerthansize.h"

#include "poker.h"

pokerThanSize::pokerThanSize(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::pokerThanSize)
{
    ui->setupUi(this);
}

pokerThanSize::~pokerThanSize()
{
    delete ui;
}
