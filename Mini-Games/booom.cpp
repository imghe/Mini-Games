#include "booom.h"
#include "ui_booom.h"

#include <QString>
#include <QTime>
#include <QMessageBox>
#include <QSlider>


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
    play=0;
    BoomEnd=-1;
    BoomMax=-1;
    BoomMin=-1;

    ui->mod_1->setRange(0,3);
    ui->mod_2->setRange(0,3);
    ui->mod_3->setRange(0,3);
    ui->mod_4->setRange(0,3);
    ui->mod_s->setRange(0,3);

    ui->BooomPage->setCurrentIndex(0);

    ui->BoomKeySize->setFocusPolicy(Qt::NoFocus);
    ui->playerName_1->setFocusPolicy(Qt::NoFocus);
    ui->playerName_2->setFocusPolicy(Qt::NoFocus);
    ui->playerName_3->setFocusPolicy(Qt::NoFocus);
    ui->playerName_4->setFocusPolicy(Qt::NoFocus);
    ui->play_1->setFocusPolicy(Qt::NoFocus);
    ui->play_2->setFocusPolicy(Qt::NoFocus);
    ui->play_3->setFocusPolicy(Qt::NoFocus);
    ui->play_4->setFocusPolicy(Qt::NoFocus);

    ui->BoomKey->setText("");
    ui->BoomSizeKey->setText("");

    ui->mod_1->setValue(2);
    ui->mod_2->setValue(2);
    ui->mod_3->setValue(2);
    ui->mod_4->setValue(2);
    ui->mod_s->setValue(2);

    nameSet(0,2);
    nameSet(1,2);
    nameSet(2,2);
    nameSet(3,2);

    BoomMin=0;
    setBoomKeySize();
    ui->BoomSizeKey->setFocus();
}

void Booom::Boooom(){
    QString out=playName[play];
    out+=" failed to defuse the bomb";
    QMessageBox:: critical ( this , tr ( "Boooom" ), out);
    BoomReset();
}

void Booom::WIN(){
    QString out=" The bomb was dismantled successfully, all players win";
    QMessageBox:: about ( this , tr ( "Boooom" ), out);
    BoomReset();
}

void Booom::nameSet(int at,int in){

     playerType[at]=in;

     QByteArray  out;
     if(at==0)
     {
         if(in==0)out="玩家_1";
         else if(in==1)out="幸運電腦_1";
         else if(in==2)out="普通電腦_1";
         else if(in==3)out="厄運電腦_1";
         ui->playerName_1->setText( QString::fromLocal8Bit(out));
         ui->Player_1->setText( QString::fromLocal8Bit(out));
     }
     else if(at==1)
     {
         if(in==0)out="玩家_2";
         else if(in==1)out="幸運電腦_2";
         else if(in==2)out="普通電腦_2";
         else if(in==3)out="厄運電腦_2";
         ui->playerName_2->setText( QString::fromLocal8Bit(out));
         ui->Player_2->setText( QString::fromLocal8Bit(out));
     }
     else if(at==2)
     {
         if(in==0)out="玩家_3";
         else if(in==1)out="幸運電腦_3";
         else if(in==2)out="普通電腦_3";
         else if(in==3)out="厄運電腦_3";
         ui->playerName_3->setText( QString::fromLocal8Bit(out));
         ui->Player_3->setText( QString::fromLocal8Bit(out));
     }
     else if(at==3)
     {
         if(in==0)out="玩家_4";
         else if(in==1)out="幸運電腦_4";
         else if(in==2)out="普通電腦_4";
         else if(in==3)out="厄運電腦_4";
         ui->playerName_4->setText( QString::fromLocal8Bit(out));
         ui->Player_4->setText( QString::fromLocal8Bit(out));
     }
}

void Booom::on_BoomGOGO_clicked()
{
   QString
            BoomSizeKey = ui->BoomSizeKey->text();
   int
           SizeKey= BoomSizeKey.toFloat();

   if(SizeKey>2){
       BoomMax = SizeKey;
       BoomSize= SizeKey;
       setBoomKeySize();

       srand(time(NULL));

       BoomEnd=(rand()+BoomMax)%BoomMax;
       if(BoomEnd==0)BoomEnd+=1;

       ui->BooomPage->setCurrentIndex(1);
       ui->BoomKey->setFocus();
   }
   else{
       ui->BoomSizeKey->setText("");
       ui->BoomSizeKey->setFocus();
   }
   play=0;
   ui->mod_s->setValue(3);
}
void Booom::GO(int NewKey){

    if(BoomMax-BoomMin<3)
        WIN();
    else if(BoomMin<NewKey&&NewKey<BoomMax)
    {
        if(BoomEnd==NewKey)
            Boooom();
        else
        {
            if(NewKey>BoomEnd)
                BoomMax=NewKey;
            else
                BoomMin=NewKey;

            setBoomKeySize();

            play=++play%4;
            ui->mod_s->setValue(3-play);

        }
    }
}

void Booom::on_KeySet_clicked()
{
    QString
               Key = ui->BoomKey->text();
    int
            NewKey = Key.toFloat();
    GO(NewKey);
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
    if(NewIn<2)
        ui->BoomSizeKey->setText("");
    on_BoomGOGO_clicked();
}


void Booom::on_BoomGOEND_clicked()
{
    this->close();
}


void Booom::on_mod_1_valueChanged(int value)
{
    nameSet(0,value);
}


void Booom::on_mod_2_valueChanged(int value)
{
    nameSet(1,value);
}


void Booom::on_mod_3_valueChanged(int value)
{
    nameSet(2,value);
}


void Booom::on_mod_4_valueChanged(int value)
{
    nameSet(3,value);
}




void Booom::on_mod_s_valueChanged(int value)
{
    ui->mod_s->setValue(3-play);
    if(playerType[play]!=1)ui->BoomKey->setFocusPolicy(Qt::NoFocus);
    else ui->BoomKey->setFocusPolicy(Qt::StrongFocus);
}


void Booom::on_CPUKey_clicked()
{
    if(playerType[play]==1||playerType[play]==3)
    {
        if(rand()%2==0)
        {
            if(playerType[play]==1)
                for(int i=BoomEnd;i==BoomEnd;)
                {
                    i=(BoomMin+rand()%(BoomMax-BoomMin));
                    if(i!=BoomEnd)GO(i);
                }
            else GO(BoomEnd);
        }
        else GO(BoomMin+rand()%(BoomMax-BoomMin));
    }
    else if((rand()+BoomMax)%50==0)GO(BoomEnd);
    else GO(BoomMin+rand()%(BoomMax-BoomMin));
}

