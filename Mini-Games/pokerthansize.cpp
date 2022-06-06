#include "pokerthansize.h"
#include "ui_pokerthansize.h"
#include <QPixmap>

#include "poker.h"

pokerThanSize::pokerThanSize(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::pokerThanSize)
{
    ui->setupUi(this);
    QPixmap pic(":/poker/image/poker image/pok.jpg");
     ui->my->setPixmap(pic);

}
void pokerThanSize::reset(){
    QPixmap myPix(":/poker/image/poker image/pok.jpg");
    ui->opponent->setPixmap(myPix);
    ui->my->setPixmap(myPix);
    ui->win_or_lose->setText(" ");
}

pokerThanSize::~pokerThanSize()
{
    delete ui;
}








void pokerThanSize::on_higer_clicked()

{
        poker poker1;
        poker1.setOppOpoker(poker1.givePoker()+1);

        while(poker1.getOppOpoker()==poker1.getpoker()){
            poker1.setOppOpoker(poker1.givePoker()+1);

        }

        int opponentpoker=poker1.getOppOpoker();
    if(opponentpoker==1){

    QPixmap myPix(":/poker/image/poker image/1.png");
    ui->opponent->setPixmap(myPix);
    }
    if(opponentpoker==2){
    QPixmap myPix(":/poker/image/poker image/2.png");
    ui->opponent->setPixmap(myPix);
    }
    if(opponentpoker==3){
    QPixmap myPix(":/poker/image/poker image/3.png");
    ui->opponent->setPixmap(myPix);
    }
    if(opponentpoker==4){
    QPixmap myPix(":/poker/image/poker image/4.png");
    ui->opponent->setPixmap(myPix);
    }
    if(opponentpoker==5){
    QPixmap myPix(":/poker/image/poker image/5.png");
    ui->opponent->setPixmap(myPix);
    }
    if(opponentpoker==6){
    QPixmap myPix(":/poker/image/poker image/6.png");
    ui->opponent->setPixmap(myPix);
    }
    if(opponentpoker==7){
    QPixmap myPix(":/poker/image/poker image/7.png");
    ui->opponent->setPixmap(myPix);
    }
    if(opponentpoker==8){
    QPixmap myPix(":/poker/image/poker image/8.png");
    ui->opponent->setPixmap(myPix);
    }
    if(opponentpoker==9){
     QPixmap myPix(":/poker/image/poker image/9.png");
     ui->opponent->setPixmap(myPix);
    }
    if(opponentpoker==10){
    QPixmap myPix(":/poker/image/poker image/10.png");
    ui->opponent->setPixmap(myPix);
    }
    if(opponentpoker==11){
    QPixmap myPix(":/poker/image/poker image/11.png");
    ui->opponent->setPixmap(myPix);
    }
    if(opponentpoker==12){
    QPixmap myPix(":/poker/image/poker image/12.png");
    ui->opponent->setPixmap(myPix);
    }
    if(opponentpoker==13){
    QPixmap myPix(":/poker/image/poker image/13.png");
    ui->opponent->setPixmap(myPix);
    }
    if(opponentpoker==14){
    QPixmap myPix(":/poker/image/poker image/14.png");
    ui->opponent->setPixmap(myPix);
    }
    if(opponentpoker==15){
    QPixmap myPix(":/poker/image/poker image/15.png");
    ui->opponent->setPixmap(myPix);
    }
    if(opponentpoker==16){
    QPixmap myPix(":/poker/image/poker image/16.png");
    ui->opponent->setPixmap(myPix);
    }
    if(opponentpoker==17){
    QPixmap myPix(":/poker/image/poker image/17.png");
    ui->opponent->setPixmap(myPix);
    }
    if(opponentpoker==18){
    QPixmap myPix(":/poker/image/poker image/18.png");
    ui->opponent->setPixmap(myPix);
    }
    if(opponentpoker==19){
    QPixmap myPix(":/poker/image/poker image/19.png");
    ui->opponent->setPixmap(myPix);
    }
    if(opponentpoker==20){
    QPixmap myPix(":/poker/image/poker image/20.png");
    ui->opponent->setPixmap(myPix);
    }
    if(opponentpoker==21){
    QPixmap myPix(":/poker/image/poker image/21.png");
    ui->opponent->setPixmap(myPix);
    }
    if(opponentpoker==22){
    QPixmap myPix(":/poker/image/poker image/22.png");
    ui->opponent->setPixmap(myPix);
    }
    if(opponentpoker==23){
    QPixmap myPix(":/poker/image/poker image/23.png");
    ui->opponent->setPixmap(myPix);
    }
    if(opponentpoker==24){
    QPixmap myPix(":/poker/image/poker image/24.png");
    ui->opponent->setPixmap(myPix);
    }
    if(opponentpoker==25){
    QPixmap myPix(":/poker/image/poker image/25.png");
    ui->opponent->setPixmap(myPix);
    }
    if(opponentpoker==26){
    QPixmap myPix(":/poker/image/poker image/26.png");
    ui->opponent->setPixmap(myPix);
    }
    if(opponentpoker==27){
    QPixmap myPix(":/poker/image/poker image/27.png");
    ui->opponent->setPixmap(myPix);
    }
    if(opponentpoker==28){
    QPixmap myPix(":/poker/image/poker image/28.png");
    ui->opponent->setPixmap(myPix);
    }
    if(opponentpoker==29){
    QPixmap myPix(":/poker/image/poker image/29.png");
    ui->opponent->setPixmap(myPix);
    }
    if(opponentpoker==30){
    QPixmap myPix(":/poker/image/poker image/30.png");
    ui->opponent->setPixmap(myPix);
    }
    if(opponentpoker==31){
    QPixmap myPix(":/poker/image/poker image/31.png");
    ui->opponent->setPixmap(myPix);
    }
    if(opponentpoker==32){
    QPixmap myPix(":/poker/image/poker image/32.png");
    ui->opponent->setPixmap(myPix);
    }
    if(opponentpoker==33){
    QPixmap myPix(":/poker/image/poker image/33.png");
    ui->opponent->setPixmap(myPix);
    }
    if(opponentpoker==34){
    QPixmap myPix(":/poker/image/poker image/34.png");
    ui->opponent->setPixmap(myPix);
    }
    if(opponentpoker==35){
    QPixmap myPix(":/poker/image/poker image/35.png");
    ui->opponent->setPixmap(myPix);
    }
    if(opponentpoker==36){
    QPixmap myPix(":/poker/image/poker image/36.png");
    ui->opponent->setPixmap(myPix);
    }
    if(opponentpoker==37){
    QPixmap myPix(":/poker/image/poker image/37.png");
    ui->opponent->setPixmap(myPix);
    }
    if(opponentpoker==38){
    QPixmap myPix(":/poker/image/poker image/38.png");
    ui->opponent->setPixmap(myPix);
    }
    if(opponentpoker==39){
    QPixmap myPix(":/poker/image/poker image/39.png");
    ui->opponent->setPixmap(myPix);
    }
    if(opponentpoker==40){
    QPixmap myPix(":/poker/image/poker image/40.png");
    ui->opponent->setPixmap(myPix);
    }
    if(opponentpoker==41){
    QPixmap myPix(":/poker/image/poker image/41.png");
    ui->opponent->setPixmap(myPix);
    }
    if(opponentpoker==42){
    QPixmap myPix(":/poker/image/poker image/42.png");
    ui->opponent->setPixmap(myPix);
    }
    if(opponentpoker==43){
    QPixmap myPix(":/poker/image/poker image/43.png");
    ui->opponent->setPixmap(myPix);
    }
    if(opponentpoker==44){
    QPixmap myPix(":/poker/image/poker image/44.png");
    ui->opponent->setPixmap(myPix);
    }
    if(opponentpoker==45){
    QPixmap myPix(":/poker/image/poker image/45.png");
    ui->opponent->setPixmap(myPix);
    }
    if(opponentpoker==46){
    QPixmap myPix(":/poker/image/poker image/46.png");
    ui->opponent->setPixmap(myPix);
    }
    if(opponentpoker==47){
    QPixmap myPix(":/poker/image/poker image/47.png");
    ui->opponent->setPixmap(myPix);
    }
    if(opponentpoker==48){
    QPixmap myPix(":/poker/image/poker image/48.png");
    ui->opponent->setPixmap(myPix);
    }
    if(opponentpoker==49){
    QPixmap myPix(":/poker/image/poker image/49.png");
    ui->opponent->setPixmap(myPix);
    }
    if(opponentpoker==50){
    QPixmap myPix(":/poker/image/poker image/50.png");
    ui->opponent->setPixmap(myPix);
    }
    if(opponentpoker==51){
    QPixmap myPix(":/poker/image/poker image/51.png");
    ui->opponent->setPixmap(myPix);
    }
    if(opponentpoker==52){
    QPixmap myPix(":/poker/image/poker image/52.png");
    ui->opponent->setPixmap(myPix);
    }
    if(poker1.getOppOpoker()<poker1.getpoker()){
        ui->win_or_lose->setText("Win");
    }
    else if(poker1.getOppOpoker()>poker1.getpoker()){
        ui->win_or_lose->setText("Lose");
    }

}


void pokerThanSize::on_lower_clicked()
{
    poker poker1;
    poker1.setOppOpoker(poker1.givePoker()+1);

    while(poker1.getOppOpoker()==poker1.getpoker()){
        poker1.setOppOpoker(poker1.givePoker()+1);

    }

    int opponentpoker=poker1.getOppOpoker();
if(opponentpoker==1){
QPixmap myPix(":/poker/image/poker image/1.png");
ui->opponent->setPixmap(myPix);
}
if(opponentpoker==2){
QPixmap myPix(":/poker/image/poker image/2.png");
ui->opponent->setPixmap(myPix);
}
if(opponentpoker==3){
QPixmap myPix(":/poker/image/poker image/3.png");
ui->opponent->setPixmap(myPix);
}
if(opponentpoker==4){
QPixmap myPix(":/poker/image/poker image/4.png");
ui->opponent->setPixmap(myPix);
}
if(opponentpoker==5){
QPixmap myPix(":/poker/image/poker image/5.png");
ui->opponent->setPixmap(myPix);
}
if(opponentpoker==6){
QPixmap myPix(":/poker/image/poker image/6.png");
ui->opponent->setPixmap(myPix);
}
if(opponentpoker==7){
QPixmap myPix(":/poker/image/poker image/7.png");
ui->opponent->setPixmap(myPix);
}
if(opponentpoker==8){
QPixmap myPix(":/poker/image/poker image/8.png");
ui->opponent->setPixmap(myPix);
}
if(opponentpoker==9){
 QPixmap myPix(":/poker/image/poker image/9.png");
 ui->opponent->setPixmap(myPix);
}
if(opponentpoker==10){
QPixmap myPix(":/poker/image/poker image/10.png");
ui->opponent->setPixmap(myPix);
}
if(opponentpoker==11){
QPixmap myPix(":/poker/image/poker image/11.png");
ui->opponent->setPixmap(myPix);
}
if(opponentpoker==12){
QPixmap myPix(":/poker/image/poker image/12.png");
ui->opponent->setPixmap(myPix);
}
if(opponentpoker==13){
QPixmap myPix(":/poker/image/poker image/13.png");
ui->opponent->setPixmap(myPix);
}
if(opponentpoker==14){
QPixmap myPix(":/poker/image/poker image/14.png");
ui->opponent->setPixmap(myPix);
}
if(opponentpoker==15){
QPixmap myPix(":/poker/image/poker image/15.png");
ui->opponent->setPixmap(myPix);
}
if(opponentpoker==16){
QPixmap myPix(":/poker/image/poker image/16.png");
ui->opponent->setPixmap(myPix);
}
if(opponentpoker==17){
QPixmap myPix(":/poker/image/poker image/17.png");
ui->opponent->setPixmap(myPix);
}
if(opponentpoker==18){
QPixmap myPix(":/poker/image/poker image/18.png");
ui->opponent->setPixmap(myPix);
}
if(opponentpoker==19){
QPixmap myPix(":/poker/image/poker image/19.png");
ui->opponent->setPixmap(myPix);
}
if(opponentpoker==20){
QPixmap myPix(":/poker/image/poker image/20.png");
ui->opponent->setPixmap(myPix);
}
if(opponentpoker==21){
QPixmap myPix(":/poker/image/poker image/21.png");
ui->opponent->setPixmap(myPix);
}
if(opponentpoker==22){
QPixmap myPix(":/poker/image/poker image/22.png");
ui->opponent->setPixmap(myPix);
}
if(opponentpoker==23){
QPixmap myPix(":/poker/image/poker image/23.png");
ui->opponent->setPixmap(myPix);
}
if(opponentpoker==24){
QPixmap myPix(":/poker/image/poker image/24.png");
ui->opponent->setPixmap(myPix);
}
if(opponentpoker==25){
QPixmap myPix(":/poker/image/poker image/25.png");
ui->opponent->setPixmap(myPix);
}
if(opponentpoker==26){
QPixmap myPix(":/poker/image/poker image/26.png");
ui->opponent->setPixmap(myPix);
}
if(opponentpoker==27){
QPixmap myPix(":/poker/image/poker image/27.png");
ui->opponent->setPixmap(myPix);
}
if(opponentpoker==28){
QPixmap myPix(":/poker/image/poker image/28.png");
ui->opponent->setPixmap(myPix);
}
if(opponentpoker==29){
QPixmap myPix(":/poker/image/poker image/29.png");
ui->opponent->setPixmap(myPix);
}
if(opponentpoker==30){
QPixmap myPix(":/poker/image/poker image/30.png");
ui->opponent->setPixmap(myPix);
}
if(opponentpoker==31){
QPixmap myPix(":/poker/image/poker image/31.png");
ui->opponent->setPixmap(myPix);
}
if(opponentpoker==32){
QPixmap myPix(":/poker/image/poker image/32.png");
ui->opponent->setPixmap(myPix);
}
if(opponentpoker==33){
QPixmap myPix(":/poker/image/poker image/33.png");
ui->opponent->setPixmap(myPix);
}
if(opponentpoker==34){
QPixmap myPix(":/poker/image/poker image/34.png");
ui->opponent->setPixmap(myPix);
}
if(opponentpoker==35){
QPixmap myPix(":/poker/image/poker image/35.png");
ui->opponent->setPixmap(myPix);
}
if(opponentpoker==36){
QPixmap myPix(":/poker/image/poker image/36.png");
ui->opponent->setPixmap(myPix);
}
if(opponentpoker==37){
QPixmap myPix(":/poker/image/poker image/37.png");
ui->opponent->setPixmap(myPix);
}
if(opponentpoker==38){
QPixmap myPix(":/poker/image/poker image/38.png");
ui->opponent->setPixmap(myPix);
}
if(opponentpoker==39){
QPixmap myPix(":/poker/image/poker image/39.png");
ui->opponent->setPixmap(myPix);
}
if(opponentpoker==40){
QPixmap myPix(":/poker/image/poker image/40.png");
ui->opponent->setPixmap(myPix);
}
if(opponentpoker==41){
QPixmap myPix(":/poker/image/poker image/41.png");
ui->opponent->setPixmap(myPix);
}
if(opponentpoker==42){
QPixmap myPix(":/poker/image/poker image/42.png");
ui->opponent->setPixmap(myPix);
}
if(opponentpoker==43){
QPixmap myPix(":/poker/image/poker image/43.png");
ui->opponent->setPixmap(myPix);
}
if(opponentpoker==44){
QPixmap myPix(":/poker/image/poker image/44.png");
ui->opponent->setPixmap(myPix);
}
if(opponentpoker==45){
QPixmap myPix(":/poker/image/poker image/45.png");
ui->opponent->setPixmap(myPix);
}
if(opponentpoker==46){
QPixmap myPix(":/poker/image/poker image/46.png");
ui->opponent->setPixmap(myPix);
}
if(opponentpoker==47){
QPixmap myPix(":/poker/image/poker image/47.png");
ui->opponent->setPixmap(myPix);
}
if(opponentpoker==48){
QPixmap myPix(":/poker/image/poker image/48.png");
ui->opponent->setPixmap(myPix);
}
if(opponentpoker==49){
QPixmap myPix(":/poker/image/poker image/49.png");
ui->opponent->setPixmap(myPix);
}
if(opponentpoker==50){
QPixmap myPix(":/poker/image/poker image/50.png");
ui->opponent->setPixmap(myPix);
}
if(opponentpoker==51){
QPixmap myPix(":/poker/image/poker image/51.png");
ui->opponent->setPixmap(myPix);
}
if(opponentpoker==52){
QPixmap myPix(":/poker/image/poker image/52.png");
ui->opponent->setPixmap(myPix);

}
    if(poker1.getOppOpoker()>poker1.getpoker()){
        ui->win_or_lose->setText("Win");
    }
    else if(poker1.getOppOpoker()<poker1.getpoker()){
        ui->win_or_lose->setText("Lose");
    }
}






void pokerThanSize::on_start_clicked()
{
    poker poker1;
    poker1.setpoker(poker1.givePoker()+1);
    int mypoker=poker1.getpoker();

    if(mypoker==1){
    QPixmap myPix(":/poker/image/poker image/1.png");
    ui->my->setPixmap(myPix);
    }
    if(mypoker==2){
    QPixmap myPix(":/poker/image/poker image/2.png");
    ui->my->setPixmap(myPix);
    }
    if(mypoker==3){
    QPixmap myPix(":/poker/image/poker image/3.png");
    ui->my->setPixmap(myPix);
    }
    if(mypoker==4){
    QPixmap myPix(":/poker/image/poker image/4.png");
    ui->my->setPixmap(myPix);
    }
    if(mypoker==5){
    QPixmap myPix(":/poker/image/poker image/5.png");
    ui->my->setPixmap(myPix);
    }
    if(mypoker==6){
    QPixmap myPix(":/poker/image/poker image/6.png");
    ui->my->setPixmap(myPix);
    }
    if(mypoker==7){
    QPixmap myPix(":/poker/image/poker image/7.png");
    ui->my->setPixmap(myPix);
    }
    if(mypoker==8){
    QPixmap myPix(":/poker/image/poker image/8.png");
    ui->my->setPixmap(myPix);
    }
    if(mypoker==9){
     QPixmap myPix(":/poker/image/poker image/9.png");
     ui->my->setPixmap(myPix);
    }
    if(mypoker==10){
    QPixmap myPix(":/poker/image/poker image/10.png");
    ui->my->setPixmap(myPix);
    }
    if(mypoker==11){
    QPixmap myPix(":/poker/image/poker image/11.png");
    ui->my->setPixmap(myPix);
    }
    if(mypoker==12){
    QPixmap myPix(":/poker/image/poker image/12.png");
    ui->my->setPixmap(myPix);
    }
    if(mypoker==13){
    QPixmap myPix(":/poker/image/poker image/13.png");
    ui->my->setPixmap(myPix);
    }
    if(mypoker==14){
    QPixmap myPix(":/poker/image/poker image/14.png");
    ui->my->setPixmap(myPix);
    }
    if(mypoker==15){
    QPixmap myPix(":/poker/image/poker image/15.png");
    ui->my->setPixmap(myPix);
    }
    if(mypoker==16){
    QPixmap myPix(":/poker/image/poker image/16.png");
    ui->my->setPixmap(myPix);
    }
    if(mypoker==17){
    QPixmap myPix(":/poker/image/poker image/17.png");
    ui->my->setPixmap(myPix);
    }
    if(mypoker==18){
    QPixmap myPix(":/poker/image/poker image/18.png");
    ui->my->setPixmap(myPix);
    }
    if(mypoker==19){
    QPixmap myPix(":/poker/image/poker image/19.png");
    ui->my->setPixmap(myPix);
    }
    if(mypoker==20){
    QPixmap myPix(":/poker/image/poker image/20.png");
    ui->my->setPixmap(myPix);
    }
    if(mypoker==21){
    QPixmap myPix(":/poker/image/poker image/21.png");
    ui->my->setPixmap(myPix);
    }
    if(mypoker==22){
    QPixmap myPix(":/poker/image/poker image/22.png");
    ui->my->setPixmap(myPix);
    }
    if(mypoker==23){
    QPixmap myPix(":/poker/image/poker image/23.png");
    ui->my->setPixmap(myPix);
    }
    if(mypoker==24){
    QPixmap myPix(":/poker/image/poker image/24.png");
    ui->my->setPixmap(myPix);
    }
    if(mypoker==25){
    QPixmap myPix(":/poker/image/poker image/25.png");
    ui->my->setPixmap(myPix);
    }
    if(mypoker==26){
    QPixmap myPix(":/poker/image/poker image/26.png");
    ui->my->setPixmap(myPix);
    }
    if(mypoker==27){
    QPixmap myPix(":/poker/image/poker image/27.png");
    ui->my->setPixmap(myPix);
    }
    if(mypoker==28){
    QPixmap myPix(":/poker/image/poker image/28.png");
    ui->my->setPixmap(myPix);
    }
    if(mypoker==29){
    QPixmap myPix(":/poker/image/poker image/29.png");
    ui->my->setPixmap(myPix);
    }
    if(mypoker==30){
    QPixmap myPix(":/poker/image/poker image/30.png");
    ui->my->setPixmap(myPix);
    }
    if(mypoker==31){
    QPixmap myPix(":/poker/image/poker image/31.png");
    ui->my->setPixmap(myPix);
    }
    if(mypoker==32){
    QPixmap myPix(":/poker/image/poker image/32.png");
    ui->my->setPixmap(myPix);
    }
    if(mypoker==33){
    QPixmap myPix(":/poker/image/poker image/33.png");
    ui->my->setPixmap(myPix);
    }
    if(mypoker==34){
    QPixmap myPix(":/poker/image/poker image/34.png");
    ui->my->setPixmap(myPix);
    }
    if(mypoker==35){
    QPixmap myPix(":/poker/image/poker image/35.png");
    ui->my->setPixmap(myPix);
    }
    if(mypoker==36){
    QPixmap myPix(":/poker/image/poker image/36.png");
    ui->my->setPixmap(myPix);
    }
    if(mypoker==37){
    QPixmap myPix(":/poker/image/poker image/37.png");
    ui->my->setPixmap(myPix);
    }
    if(mypoker==38){
    QPixmap myPix(":/poker/image/poker image/38.png");
    ui->my->setPixmap(myPix);
    }
    if(mypoker==39){
    QPixmap myPix(":/poker/image/poker image/39.png");
    ui->my->setPixmap(myPix);
    }
    if(mypoker==40){
    QPixmap myPix(":/poker/image/poker image/40.png");
    ui->my->setPixmap(myPix);
    }
    if(mypoker==41){
    QPixmap myPix(":/poker/image/poker image/41.png");
    ui->my->setPixmap(myPix);
    }
    if(mypoker==42){
    QPixmap myPix(":/poker/image/poker image/42.png");
    ui->my->setPixmap(myPix);
    }
    if(mypoker==43){
    QPixmap myPix(":/poker/image/poker image/43.png");
    ui->my->setPixmap(myPix);
    }
    if(mypoker==44){
    QPixmap myPix(":/poker/image/poker image/44.png");
    ui->my->setPixmap(myPix);
    }
    if(mypoker==45){
    QPixmap myPix(":/poker/image/poker image/45.png");
    ui->my->setPixmap(myPix);
    }
    if(mypoker==46){
    QPixmap myPix(":/poker/image/poker image/46.png");
    ui->my->setPixmap(myPix);
    }
    if(mypoker==47){
    QPixmap myPix(":/poker/image/poker image/47.png");
    ui->my->setPixmap(myPix);
    }
    if(mypoker==48){
    QPixmap myPix(":/poker/image/poker image/48.png");
    ui->my->setPixmap(myPix);
    }
    if(mypoker==49){
    QPixmap myPix(":/poker/image/poker image/49.png");
    ui->my->setPixmap(myPix);
    }
    if(mypoker==50){
    QPixmap myPix(":/poker/image/poker image/50.png");
    ui->my->setPixmap(myPix);
    }
    if(mypoker==51){
    QPixmap myPix(":/poker/image/poker image/51.png");
    ui->my->setPixmap(myPix);
    }
    if(mypoker==52){
    QPixmap myPix(":/poker/image/poker image/52.png");
    ui->my->setPixmap(myPix);
    }
}








void pokerThanSize::on_pushButton_clicked()
{
    {
    QPixmap myPix(":/poker/image/poker image/pok.jpg");
    ui->opponent->setPixmap(myPix);
    }
    poker poker1;
    poker1.setpoker(poker1.givePoker()+1);
    int mypoker=poker1.getpoker();

    if(mypoker==1){
    QPixmap myPix(":/poker/image/poker image/1.png");
    ui->my->setPixmap(myPix);
    }
    if(mypoker==2){
    QPixmap myPix(":/poker/image/poker image/2.png");
    ui->my->setPixmap(myPix);
    }
    if(mypoker==3){
    QPixmap myPix(":/poker/image/poker image/3.png");
    ui->my->setPixmap(myPix);
    }
    if(mypoker==4){
    QPixmap myPix(":/poker/image/poker image/4.png");
    ui->my->setPixmap(myPix);
    }
    if(mypoker==5){
    QPixmap myPix(":/poker/image/poker image/5.png");
    ui->my->setPixmap(myPix);
    }
    if(mypoker==6){
    QPixmap myPix(":/poker/image/poker image/6.png");
    ui->my->setPixmap(myPix);
    }
    if(mypoker==7){
    QPixmap myPix(":/poker/image/poker image/7.png");
    ui->my->setPixmap(myPix);
    }
    if(mypoker==8){
    QPixmap myPix(":/poker/image/poker image/8.png");
    ui->my->setPixmap(myPix);
    }
    if(mypoker==9){
     QPixmap myPix(":/poker/image/poker image/9.png");
     ui->my->setPixmap(myPix);
    }
    if(mypoker==10){
    QPixmap myPix(":/poker/image/poker image/10.png");
    ui->my->setPixmap(myPix);
    }
    if(mypoker==11){
    QPixmap myPix(":/poker/image/poker image/11.png");
    ui->my->setPixmap(myPix);
    }
    if(mypoker==12){
    QPixmap myPix(":/poker/image/poker image/12.png");
    ui->my->setPixmap(myPix);
    }
    if(mypoker==13){
    QPixmap myPix(":/poker/image/poker image/13.png");
    ui->my->setPixmap(myPix);
    }
    if(mypoker==14){
    QPixmap myPix(":/poker/image/poker image/14.png");
    ui->my->setPixmap(myPix);
    }
    if(mypoker==15){
    QPixmap myPix(":/poker/image/poker image/15.png");
    ui->my->setPixmap(myPix);
    }
    if(mypoker==16){
    QPixmap myPix(":/poker/image/poker image/16.png");
    ui->my->setPixmap(myPix);
    }
    if(mypoker==17){
    QPixmap myPix(":/poker/image/poker image/17.png");
    ui->my->setPixmap(myPix);
    }
    if(mypoker==18){
    QPixmap myPix(":/poker/image/poker image/18.png");
    ui->my->setPixmap(myPix);
    }
    if(mypoker==19){
    QPixmap myPix(":/poker/image/poker image/19.png");
    ui->my->setPixmap(myPix);
    }
    if(mypoker==20){
    QPixmap myPix(":/poker/image/poker image/20.png");
    ui->my->setPixmap(myPix);
    }
    if(mypoker==21){
    QPixmap myPix(":/poker/image/poker image/21.png");
    ui->my->setPixmap(myPix);
    }
    if(mypoker==22){
    QPixmap myPix(":/poker/image/poker image/22.png");
    ui->my->setPixmap(myPix);
    }
    if(mypoker==23){
    QPixmap myPix(":/poker/image/poker image/23.png");
    ui->my->setPixmap(myPix);
    }
    if(mypoker==24){
    QPixmap myPix(":/poker/image/poker image/24.png");
    ui->my->setPixmap(myPix);
    }
    if(mypoker==25){
    QPixmap myPix(":/poker/image/poker image/25.png");
    ui->my->setPixmap(myPix);
    }
    if(mypoker==26){
    QPixmap myPix(":/poker/image/poker image/26.png");
    ui->my->setPixmap(myPix);
    }
    if(mypoker==27){
    QPixmap myPix(":/poker/image/poker image/27.png");
    ui->my->setPixmap(myPix);
    }
    if(mypoker==28){
    QPixmap myPix(":/poker/image/poker image/28.png");
    ui->my->setPixmap(myPix);
    }
    if(mypoker==29){
    QPixmap myPix(":/poker/image/poker image/29.png");
    ui->my->setPixmap(myPix);
    }
    if(mypoker==30){
    QPixmap myPix(":/poker/image/poker image/30.png");
    ui->my->setPixmap(myPix);
    }
    if(mypoker==31){
    QPixmap myPix(":/poker/image/poker image/31.png");
    ui->my->setPixmap(myPix);
    }
    if(mypoker==32){
    QPixmap myPix(":/poker/image/poker image/32.png");
    ui->my->setPixmap(myPix);
    }
    if(mypoker==33){
    QPixmap myPix(":/poker/image/poker image/33.png");
    ui->my->setPixmap(myPix);
    }
    if(mypoker==34){
    QPixmap myPix(":/poker/image/poker image/34.png");
    ui->my->setPixmap(myPix);
    }
    if(mypoker==35){
    QPixmap myPix(":/poker/image/poker image/35.png");
    ui->my->setPixmap(myPix);
    }
    if(mypoker==36){
    QPixmap myPix(":/poker/image/poker image/36.png");
    ui->my->setPixmap(myPix);
    }
    if(mypoker==37){
    QPixmap myPix(":/poker/image/poker image/37.png");
    ui->my->setPixmap(myPix);
    }
    if(mypoker==38){
    QPixmap myPix(":/poker/image/poker image/38.png");
    ui->my->setPixmap(myPix);
    }
    if(mypoker==39){
    QPixmap myPix(":/poker/image/poker image/39.png");
    ui->my->setPixmap(myPix);
    }
    if(mypoker==40){
    QPixmap myPix(":/poker/image/poker image/40.png");
    ui->my->setPixmap(myPix);
    }
    if(mypoker==41){
    QPixmap myPix(":/poker/image/poker image/41.png");
    ui->my->setPixmap(myPix);
    }
    if(mypoker==42){
    QPixmap myPix(":/poker/image/poker image/42.png");
    ui->my->setPixmap(myPix);
    }
    if(mypoker==43){
    QPixmap myPix(":/poker/image/poker image/43.png");
    ui->my->setPixmap(myPix);
    }
    if(mypoker==44){
    QPixmap myPix(":/poker/image/poker image/44.png");
    ui->my->setPixmap(myPix);
    }
    if(mypoker==45){
    QPixmap myPix(":/poker/image/poker image/45.png");
    ui->my->setPixmap(myPix);
    }
    if(mypoker==46){
    QPixmap myPix(":/poker/image/poker image/46.png");
    ui->my->setPixmap(myPix);
    }
    if(mypoker==47){
    QPixmap myPix(":/poker/image/poker image/47.png");
    ui->my->setPixmap(myPix);
    }
    if(mypoker==48){
    QPixmap myPix(":/poker/image/poker image/48.png");
    ui->my->setPixmap(myPix);
    }
    if(mypoker==49){
    QPixmap myPix(":/poker/image/poker image/49.png");
    ui->my->setPixmap(myPix);
    }
    if(mypoker==50){
    QPixmap myPix(":/poker/image/poker image/50.png");
    ui->my->setPixmap(myPix);
    }
    if(mypoker==51){
    QPixmap myPix(":/poker/image/poker image/51.png");
    ui->my->setPixmap(myPix);
    }
    if(mypoker==52){
    QPixmap myPix(":/poker/image/poker image/52.png");
    ui->my->setPixmap(myPix);
    }
}

