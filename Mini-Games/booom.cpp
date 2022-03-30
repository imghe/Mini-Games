#include "booom.h"
#include "ui_booom.h"

#include <QString>
#include <QTime>

int Booom::BoomSize=0;
int Booom::BoomMax=0;
int Booom::BoomMin=0;
int Booom::BoomSec=0;
int Booom::BoomEnd=0;

Booom::Booom(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Booom)
{
    ui->setupUi(this);
    BoomReset();
}

Booom::~Booom()
{
    delete ui;
}

void Booom::setBoomKeySize(){
    ui->BoomKeySize->setText(
                QString::number(BoomMin)+
                tr("~")+
                QString::number(BoomMax));
    int Value=100-((BoomMax-BoomMin)*100+0.1)/BoomSize;
    ui->BoomBar->setValue(Value);
}

void Booom::BoomReset(){
    ui->BooomPage->setCurrentIndex(0);
    ui->BoomKeySize->setFocusPolicy(Qt::NoFocus);
    ui->BoomKey->setText("");
    ui->BoomSizeKey->setText("");
    ui->BoomSecKey->setText("");
    BoomMin=0;
    setBoomKeySize();
}

void Booom::Boooom(){
    BoomReset();
}

void Booom::KeyIn(int NewKey)
{
    if(BoomMin<NewKey&&NewKey<BoomMax){

       if(BoomEnd==NewKey)Boooom();
       else {
           if(NewKey>BoomEnd)BoomMax=NewKey;
           else BoomMin=NewKey;
           setBoomKeySize();
       }
    }
}

void Booom::on_BoomGOGO_clicked()
{
   QString
            BoomSizeKey = ui->BoomSizeKey->text(),
            BoomSecKey  = ui->BoomSecKey ->text();
   int
           SizeKey= BoomSizeKey.toFloat(),
           SecKey = BoomSecKey.toFloat();

   if(SizeKey>0&&SecKey>0){
       BoomMax = SizeKey;
       BoomSize= SizeKey;
       BoomSec = SecKey;
       setBoomKeySize();

       srand(time(NULL));

       BoomEnd=(rand()+BoomMax)%BoomMax;
       if(BoomEnd==0)BoomEnd+=1;

       ui->BooomPage->setCurrentIndex(1);
   }
}


void Booom::on_KeySet_clicked()
{
    QString
               Key = ui->BoomKey->text();
    int
            NewKey = Key.toFloat();

    KeyIn(NewKey);
}


