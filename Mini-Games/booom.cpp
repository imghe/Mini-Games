#include "booom.h"
#include "ui_booom.h"

#include <QString>
#include <QTime>
#include <QMessageBox>

int Booom::BoomSize=0;
int Booom::BoomMax=0;
int Booom::BoomMin=0;
int Booom::BoomSec=0;
int Booom::BoomEnd=0;

QString Booom::play="";

int Booom::playerType_1=0;
int Booom::playerType_2=0;
int Booom::playerType_3=0;
int Booom::playerType_4=0;

QString Booom::playName_1="";
QString Booom::playName_2="";
QString Booom::playName_3="";
QString Booom::playName_4="";

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
    ui->BoomKeySize->
            setText(
                QString::number(BoomMin)+
                tr("~")+
                QString::number(BoomMax)
                );

    int Value=100-((BoomMax-BoomMin)*100+0.1)/BoomSize;
    ui->BoomBar->setValue(Value);
}

void Booom::BoomReset(){
    ui->BooomPage->setCurrentIndex(0);
    ui->BoomKeySize->setFocusPolicy(Qt::NoFocus);
    ui->playerName_1->setFocusPolicy(Qt::NoFocus);
    ui->playerName_2->setFocusPolicy(Qt::NoFocus);
    ui->playerName_3->setFocusPolicy(Qt::NoFocus);
    ui->playerName_4->setFocusPolicy(Qt::NoFocus);
    ui->BoomKey->setText("");
    ui->BoomSizeKey->setText("");
    ui->BoomSecKey->setText("");

    ui->radioButton_3->setChecked(1);
    ui->radioButton_7->setChecked(1);
    ui->radioButton_11->setChecked(1);
    ui->radioButton_15->setChecked(1);

    nameSet_1(2);
    nameSet_2(2);
    nameSet_3(2);
    nameSet_4(2);

    BoomMin=0;
    setBoomKeySize();
    ui->BoomSizeKey->setFocus();
}

void Booom::Boooom(){
    QString out=play;
    out+=" failed to defuse the bomb";
    QMessageBox:: critical ( this , tr ( "Boooom" ), out);
    BoomReset();
}

void Booom::WIN(){
    QString out="The bomb was dismantled successfully, all players win";
    QMessageBox:: about ( this , tr ( "Boooom" ), out);
    BoomReset();
}

void Booom::nameSet_1(int in){
     QByteArray  out;
             if(in==0)out="玩家_1";
        else if(in==1)out="幸運電腦_1";
        else if(in==2)out="普通電腦_1";
        else if(in==3)out="厄運電腦_1";

    ui->playerName_1->setText( QString::fromLocal8Bit(out));
    playerType_1=in;
}

void Booom::nameSet_2(int in){
     QByteArray  out;
             if(in==0)out="玩家_2";
        else if(in==1)out="幸運電腦_2";
        else if(in==2)out="普通電腦_2";
        else if(in==3)out="厄運電腦_2";

    ui->playerName_2->setText( QString::fromLocal8Bit(out));
    playerType_2=in;
}

void Booom::nameSet_3(int in){
     QByteArray  out;
             if(in==0)out="玩家_3";
        else if(in==1)out="幸運電腦_3";
        else if(in==2)out="普通電腦_3";
        else if(in==3)out="厄運電腦_3";

    ui->playerName_3->setText( QString::fromLocal8Bit(out));
    playerType_3=in;
}

void Booom::nameSet_4(int in){
     QByteArray  out;
             if(in==0)out="玩家_4";
        else if(in==1)out="幸運電腦_4";
        else if(in==2)out="普通電腦_4";
        else if(in==3)out="厄運電腦_4";

    ui->playerName_4->setText( QString::fromLocal8Bit(out));
    playerType_4=in;
}

void Booom::on_BoomGOGO_clicked()
{
   QString
            BoomSizeKey = ui->BoomSizeKey->text(),
            BoomSecKey  = ui->BoomSecKey ->text();
   int
           SizeKey= BoomSizeKey.toFloat(),
           SecKey = BoomSecKey.toFloat();

   if(SizeKey>2&&SecKey>0){
       BoomMax = SizeKey;
       BoomSize= SizeKey;
       BoomSec = SecKey;
       setBoomKeySize();

       srand(time(NULL));

       BoomEnd=(rand()+BoomMax)%BoomMax;
       if(BoomEnd==0)BoomEnd+=1;

       ui->BooomPage->setCurrentIndex(1);
       ui->BoomKey->setFocus();
   }
   else{
       ui->BoomSizeKey->setText("");
       ui->BoomSecKey->setText("");
       ui->BoomSizeKey->setFocus();
   }
}


void Booom::on_KeySet_clicked()
{
    QString
               Key = ui->BoomKey->text();
    int
            NewKey = Key.toFloat();

    if(BoomMin<NewKey&&NewKey<BoomMax){

        if(BoomEnd==NewKey)
            Boooom();
        else {
           if(NewKey>BoomEnd)BoomMax=NewKey;
           else BoomMin=NewKey;
           setBoomKeySize();
       }
    }
    if(BoomMax-BoomMin<3)
        WIN();
    ui->BoomKey->setText("");
}



void Booom::on_BoomKey_returnPressed()
{
    on_KeySet_clicked();
}


void Booom::on_BoomSizeKey_returnPressed()
{
    QString
               In = ui->BoomSizeKey->text();
    int
            NewIn = In.toFloat();
    if(NewIn>2)
        ui->BoomSecKey->setFocus();
    else
        ui->BoomSizeKey->setText("");
}


void Booom::on_BoomSecKey_returnPressed()
{
    QString
               In = ui->BoomSecKey->text();
    int
            NewIn = In.toFloat();
    if(NewIn<=0)
        ui->BoomSecKey->setText("");
}


void Booom::on_BoomGOEND_clicked()
{
    this->close();
}

void Booom::on_radioButton_1_clicked()
{
    nameSet_1(0);
}


void Booom::on_radioButton_2_clicked()
{
    nameSet_1(1);
}


void Booom::on_radioButton_3_clicked()
{
    nameSet_1(2);
}


void Booom::on_radioButton_4_clicked()
{
    nameSet_1(3);
}


void Booom::on_radioButton_5_clicked()
{
    nameSet_2(0);
}


void Booom::on_radioButton_6_clicked()
{
    nameSet_2(1);
}


void Booom::on_radioButton_7_clicked()
{
    nameSet_2(2);
}


void Booom::on_radioButton_8_clicked()
{
    nameSet_2(3);
}


void Booom::on_radioButton_9_clicked()
{
    nameSet_3(0);
}


void Booom::on_radioButton_10_clicked()
{
    nameSet_3(1);
}


void Booom::on_radioButton_11_clicked()
{
    nameSet_3(2);
}


void Booom::on_radioButton_12_clicked()
{
    nameSet_3(3);
}


void Booom::on_radioButton_13_clicked()
{
    nameSet_4(0);
}


void Booom::on_radioButton_14_clicked()
{
    nameSet_4(1);
}


void Booom::on_radioButton_15_clicked()
{
    nameSet_4(2);
}


void Booom::on_radioButton_16_clicked()
{
    nameSet_4(3);
}
