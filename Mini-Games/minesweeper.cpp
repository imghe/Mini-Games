#include "minesweeper.h"
#include "ui_minesweeper.h"

#include <QWidget>
#include <QString>
#include <QTime>
#include <QMessageBox>

Minesweeper::Minesweeper(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Minesweeper)
{
    ui->setupUi(this);
    resetGame();
}

Minesweeper::~Minesweeper()
{
    delete ui;
}

void Minesweeper::resetGame()
{
    ui->p1_1->setText("=");
    ui->p1_2->setText("=");
    ui->p1_3->setText("=");
    ui->p1_4->setText("=");
    ui->p1_5->setText("=");
    ui->p1_6->setText("=");
    ui->p1_7->setText("=");
    ui->p1_8->setText("=");
    ui->p1_9->setText("=");
    ui->p1_10->setText("=");
    ui->p2_1->setText("=");
    ui->p2_2->setText("=");
    ui->p2_3->setText("=");
    ui->p2_4->setText("=");
    ui->p2_5->setText("=");
    ui->p2_6->setText("=");
    ui->p2_7->setText("=");
    ui->p2_8->setText("=");
    ui->p2_9->setText("=");
    ui->p2_10->setText("=");
    ui->p3_1->setText("=");
    ui->p3_2->setText("=");
    ui->p3_3->setText("=");
    ui->p3_4->setText("=");
    ui->p3_5->setText("=");
    ui->p3_6->setText("=");
    ui->p3_7->setText("=");
    ui->p3_8->setText("=");
    ui->p3_9->setText("=");
    ui->p3_10->setText("=");
    ui->p4_1->setText("=");
    ui->p4_2->setText("=");
    ui->p4_3->setText("=");
    ui->p4_4->setText("=");
    ui->p4_5->setText("=");
    ui->p4_6->setText("=");
    ui->p4_7->setText("=");
    ui->p4_8->setText("=");
    ui->p4_9->setText("=");
    ui->p4_10->setText("=");
    ui->p5_1->setText("=");
    ui->p5_2->setText("=");
    ui->p5_3->setText("=");
    ui->p5_4->setText("=");
    ui->p5_5->setText("=");
    ui->p5_6->setText("=");
    ui->p5_7->setText("=");
    ui->p5_8->setText("=");
    ui->p5_9->setText("=");
    ui->p5_10->setText("=");

    setMines();
    buttons(1);
}

void Minesweeper::buttons(bool at)
{
    ui->p1_1->setEnabled(at);
    ui->p1_2->setEnabled(at);
    ui->p1_3->setEnabled(at);
    ui->p1_4->setEnabled(at);
    ui->p1_5->setEnabled(at);
    ui->p1_6->setEnabled(at);
    ui->p1_7->setEnabled(at);
    ui->p1_8->setEnabled(at);
    ui->p1_9->setEnabled(at);
    ui->p1_10->setEnabled(at);
    ui->p2_1->setEnabled(at);
    ui->p2_2->setEnabled(at);
    ui->p2_3->setEnabled(at);
    ui->p2_4->setEnabled(at);
    ui->p2_5->setEnabled(at);
    ui->p2_6->setEnabled(at);
    ui->p2_7->setEnabled(at);
    ui->p2_8->setEnabled(at);
    ui->p2_9->setEnabled(at);
    ui->p2_10->setEnabled(at);
    ui->p3_1->setEnabled(at);
    ui->p3_2->setEnabled(at);
    ui->p3_3->setEnabled(at);
    ui->p3_4->setEnabled(at);
    ui->p3_5->setEnabled(at);
    ui->p3_6->setEnabled(at);
    ui->p3_7->setEnabled(at);
    ui->p3_8->setEnabled(at);
    ui->p3_9->setEnabled(at);
    ui->p3_10->setEnabled(at);
    ui->p4_1->setEnabled(at);
    ui->p4_2->setEnabled(at);
    ui->p4_3->setEnabled(at);
    ui->p4_4->setEnabled(at);
    ui->p4_5->setEnabled(at);
    ui->p4_6->setEnabled(at);
    ui->p4_7->setEnabled(at);
    ui->p4_8->setEnabled(at);
    ui->p4_9->setEnabled(at);
    ui->p4_10->setEnabled(at);
    ui->p5_1->setEnabled(at);
    ui->p5_2->setEnabled(at);
    ui->p5_3->setEnabled(at);
    ui->p5_4->setEnabled(at);
    ui->p5_5->setEnabled(at);
    ui->p5_6->setEnabled(at);
    ui->p5_7->setEnabled(at);
    ui->p5_8->setEnabled(at);
    ui->p5_9->setEnabled(at);
    ui->p5_10->setEnabled(at);
}

void Minesweeper::setMines()
{
    successCounter = 0;
    for(int i = 0; i < 5; i++)
    {
        for(int j = 0; j < 10; j++)
        {
            mines[i][j] = 0;
        }
    }

    int temp_number, temp_number_y, temp_number_x;

    srand(time(NULL));

    for( int counter=0 ; counter < 10 ;)
    {
        temp_number = rand() % 50;
        temp_number_y = temp_number / 10;
        temp_number_x = temp_number % 10;

        if(mines[temp_number_y][temp_number_x] == 0)
        {
            mines[temp_number_y][temp_number_x] = 1;
            counter++;
        }
    }
}

int Minesweeper::check(int y_spot, int x_spot)
{
    successCounter++;
    int Count=0,i=0,j=0;
    y_spot--;
    x_spot--;

        if(y_spot-1>=0)i=y_spot-1;  else i=y_spot;

    for(; i<5  && i<y_spot+2 ; i++ )
    {
        if(x_spot-1>=0)j=x_spot-1;  else j=x_spot;

        for(; j<10 && j<x_spot+2 ; j++ )
            if(mines[i][j]==1)Count++;
    }
    return Count;
}

void Minesweeper::gameTrue(int y_spot, int x_spot)
{
    y_spot--;
    x_spot--;
    if(successCounter!=1)
    {
             if(mines[y_spot][x_spot]==1)gameOver();
        else if(successCounter==40)win();
    }

    else while(mines[y_spot][x_spot]==1)resetGame();

}

void Minesweeper::win()
{
    buttons(0);
    showMines();
    QString out="You Win";
    QMessageBox:: about ( this , tr ( "Minesweeper" ), out);
}

void Minesweeper::gameOver()
{
    buttons(0);
    showMines();
    QString out="You Lose";
    QMessageBox:: about ( this , tr ( "Minesweeper" ), out);
}

void Minesweeper::showMines()
{
    buttons(0);
    if(mines[0][0])
    {
        ui->p1_1->setText("Bomb");
    }
    if(mines[0][1])
    {
        ui->p1_2->setText("Bomb");
    }
    if(mines[0][2])
    {
        ui->p1_3->setText("Bomb");
    }
    if(mines[0][3])
    {
        ui->p1_4->setText("Bomb");
    }
    if(mines[0][4])
    {
        ui->p1_5->setText("Bomb");
    }
    if(mines[0][5])
    {
        ui->p1_6->setText("Bomb");
    }
    if(mines[0][6])
    {
        ui->p1_7->setText("Bomb");
    }
    if(mines[0][7])
    {
        ui->p1_8->setText("Bomb");
    }
    if(mines[0][8])
    {
        ui->p1_9->setText("Bomb");
    }
    if(mines[0][9])
    {
        ui->p1_10->setText("Bomb");
    }
    if(mines[1][0])
    {
        ui->p2_1->setText("Bomb");
    }
    if(mines[1][1])
    {
        ui->p2_2->setText("Bomb");
    }
    if(mines[1][2])
    {
        ui->p2_3->setText("Bomb");
    }
    if(mines[1][3])
    {
        ui->p2_4->setText("Bomb");
    }
    if(mines[1][4])
    {
        ui->p2_5->setText("Bomb");
    }
    if(mines[1][5])
    {
        ui->p2_6->setText("Bomb");
    }
    if(mines[1][6])
    {
        ui->p2_7->setText("Bomb");
    }
    if(mines[1][7])
    {
        ui->p2_8->setText("Bomb");
    }
    if(mines[1][8])
    {
        ui->p2_9->setText("Bomb");
    }
    if(mines[1][9])
    {
        ui->p2_10->setText("Bomb");
    }
    if(mines[2][0])
    {
        ui->p3_1->setText("Bomb");
    }
    if(mines[2][1])
    {
        ui->p3_2->setText("Bomb");
    }
    if(mines[2][2])
    {
        ui->p3_3->setText("Bomb");
    }
    if(mines[2][3])
    {
        ui->p3_4->setText("Bomb");
    }
    if(mines[2][4])
    {
        ui->p3_5->setText("Bomb");
    }
    if(mines[2][5])
    {
        ui->p3_6->setText("Bomb");
    }
    if(mines[2][6])
    {
        ui->p3_7->setText("Bomb");
    }
    if(mines[2][7])
    {
        ui->p3_8->setText("Bomb");
    }
    if(mines[2][8])
    {
        ui->p3_9->setText("Bomb");
    }
    if(mines[2][9])
    {
        ui->p3_10->setText("Bomb");
    }
    if(mines[3][0])
    {
        ui->p4_1->setText("Bomb");
    }
    if(mines[3][1])
    {
        ui->p4_2->setText("Bomb");
    }
    if(mines[3][2])
    {
        ui->p4_3->setText("Bomb");
    }
    if(mines[3][3])
    {
        ui->p4_4->setText("Bomb");
    }
    if(mines[3][4])
    {
        ui->p4_5->setText("Bomb");
    }
    if(mines[3][5])
    {
        ui->p4_6->setText("Bomb");
    }
    if(mines[3][6])
    {
        ui->p4_7->setText("Bomb");
    }
    if(mines[3][7])
    {
        ui->p4_8->setText("Bomb");
    }
    if(mines[3][8])
    {
        ui->p4_9->setText("Bomb");
    }
    if(mines[3][9])
    {
        ui->p4_10->setText("Bomb");
    }
    if(mines[4][0])
    {
        ui->p5_1->setText("Bomb");
    }
    if(mines[4][1])
    {
        ui->p5_2->setText("Bomb");
    }
    if(mines[4][2])
    {
        ui->p5_3->setText("Bomb");
    }
    if(mines[4][3])
    {
        ui->p5_4->setText("Bomb");
    }
    if(mines[4][4])
    {
        ui->p5_5->setText("Bomb");
    }
    if(mines[4][5])
    {
        ui->p5_6->setText("Bomb");
    }
    if(mines[4][6])
    {
        ui->p5_7->setText("Bomb");
    }
    if(mines[4][7])
    {
        ui->p5_8->setText("Bomb");
    }
    if(mines[4][8])
    {
        ui->p5_9->setText("Bomb");
    }
    if(mines[4][9])
    {
        ui->p5_10->setText("Bomb");
    }
}

void Minesweeper::on_pushButton_clicked()
{
    resetGame();
}

void Minesweeper::on_showMinesButton_clicked()
{
    showMines();
}


void Minesweeper::on_p1_1_clicked()
{
    ui->p1_1->setEnabled(0);
    ui->p1_1-> setText(QString::number(check(1,1)));
    gameTrue(1,1);
}
void Minesweeper::on_p1_2_clicked()
{
    ui->p1_2->setEnabled(0);
    ui->p1_2-> setText(QString::number(check(1,2)));
    gameTrue(1,2);
}
void Minesweeper::on_p1_3_clicked()
{
    ui->p1_3->setEnabled(0);
    ui->p1_3-> setText(QString::number(check(1,3)));
    gameTrue(1,3);
}
void Minesweeper::on_p1_4_clicked()
{
    ui->p1_4->setEnabled(0);
    ui->p1_4-> setText(QString::number(check(1,4)));
    gameTrue(1,4);
}
void Minesweeper::on_p1_5_clicked()
{
    ui->p1_5->setEnabled(0);
    ui->p1_5-> setText(QString::number(check(1,5)));
    gameTrue(1,5);
}
void Minesweeper::on_p1_6_clicked()
{
    ui->p1_6->setEnabled(0);
    ui->p1_6-> setText(QString::number(check(1,6)));
    gameTrue(1,6);
}
void Minesweeper::on_p1_7_clicked()
{
    ui->p1_7->setEnabled(0);
    ui->p1_7-> setText(QString::number(check(1,7)));
    gameTrue(1,7);
}
void Minesweeper::on_p1_8_clicked()
{
    ui->p1_8->setEnabled(0);
    ui->p1_8-> setText(QString::number(check(1,8)));
    gameTrue(1,8);
}
void Minesweeper::on_p1_9_clicked()
{
    ui->p1_9->setEnabled(0);
    ui->p1_9-> setText(QString::number(check(1,9)));
    gameTrue(1,9);
}
void Minesweeper::on_p1_10_clicked()
{
    ui->p1_10->setEnabled(0);
    ui->p1_10-> setText(QString::number(check(1,10)));
    gameTrue(1,10);
}
void Minesweeper::on_p2_1_clicked()
{
    ui->p2_1->setEnabled(0);
    ui->p2_1-> setText(QString::number(check(2,1)));
    gameTrue(2,1);
}
void Minesweeper::on_p2_2_clicked()
{
    ui->p2_2->setEnabled(0);
    ui->p2_2-> setText(QString::number(check(2,2)));
    gameTrue(2,2);
}
void Minesweeper::on_p2_3_clicked()
{
    ui->p2_3->setEnabled(0);
    ui->p2_3-> setText(QString::number(check(2,3)));
    gameTrue(2,3);
}
void Minesweeper::on_p2_4_clicked()
{
    ui->p2_4->setEnabled(0);
    ui->p2_4-> setText(QString::number(check(2,4)));
    gameTrue(2,4);
}
void Minesweeper::on_p2_5_clicked()
{
    ui->p2_5->setEnabled(0);
    ui->p2_5-> setText(QString::number(check(2,5)));
    gameTrue(2,5);
}
void Minesweeper::on_p2_6_clicked()
{
    ui->p2_6->setEnabled(0);
    ui->p2_6-> setText(QString::number(check(2,6)));
    gameTrue(2,6);
}
void Minesweeper::on_p2_7_clicked()
{
    ui->p2_7->setEnabled(0);
    ui->p2_7-> setText(QString::number(check(2,7)));
    gameTrue(2,7);
}
void Minesweeper::on_p2_8_clicked()
{
    ui->p2_8->setEnabled(0);
    ui->p2_8-> setText(QString::number(check(2,8)));
    gameTrue(2,8);
}
void Minesweeper::on_p2_9_clicked()
{
    ui->p2_9->setEnabled(0);
    ui->p2_9-> setText(QString::number(check(2,9)));
    gameTrue(2,9);
}
void Minesweeper::on_p2_10_clicked()
{
    ui->p2_10->setEnabled(0);
    ui->p2_10-> setText(QString::number(check(2,10)));
    gameTrue(2,10);
}
void Minesweeper::on_p3_1_clicked()
{
    ui->p3_1->setEnabled(0);
    ui->p3_1-> setText(QString::number(check(3,1)));
    gameTrue(3,1);
}
void Minesweeper::on_p3_2_clicked()
{
    ui->p3_2->setEnabled(0);
    ui->p3_2-> setText(QString::number(check(3,2)));
    gameTrue(3,2);
}
void Minesweeper::on_p3_3_clicked()
{
    ui->p3_3->setEnabled(0);
    ui->p3_3-> setText(QString::number(check(3,3)));
    gameTrue(3,3);
}
void Minesweeper::on_p3_4_clicked()
{
    ui->p3_4->setEnabled(0);
    ui->p3_4-> setText(QString::number(check(3,4)));
    gameTrue(3,4);
}
void Minesweeper::on_p3_5_clicked()
{
    ui->p3_5->setEnabled(0);
    ui->p3_5-> setText(QString::number(check(3,5)));
    gameTrue(3,5);
}
void Minesweeper::on_p3_6_clicked()
{
    ui->p3_6->setEnabled(0);
    ui->p3_6-> setText(QString::number(check(3,6)));
    gameTrue(3,6);
}
void Minesweeper::on_p3_7_clicked()
{
    ui->p3_7->setEnabled(0);
    ui->p3_7-> setText(QString::number(check(3,7)));
    gameTrue(3,7);
}
void Minesweeper::on_p3_8_clicked()
{
    ui->p3_8->setEnabled(0);
    ui->p3_8-> setText(QString::number(check(3,8)));
    gameTrue(3,8);
}
void Minesweeper::on_p3_9_clicked()
{
    ui->p3_9->setEnabled(0);
    ui->p3_9-> setText(QString::number(check(3,9)));
    gameTrue(3,9);
}
void Minesweeper::on_p3_10_clicked()
{
    ui->p3_10->setEnabled(0);
    ui->p3_10-> setText(QString::number(check(3,10)));
    gameTrue(3,10);
}
void Minesweeper::on_p4_1_clicked()
{
    ui->p4_1->setEnabled(0);
    ui->p4_1-> setText(QString::number(check(4,1)));
    gameTrue(4,1);
}
void Minesweeper::on_p4_2_clicked()
{
    ui->p4_2->setEnabled(0);
    ui->p4_2-> setText(QString::number(check(4,2)));
    gameTrue(4,2);
}
void Minesweeper::on_p4_3_clicked()
{
    ui->p4_3->setEnabled(0);
    ui->p4_3-> setText(QString::number(check(4,3)));
    gameTrue(4,3);
}
void Minesweeper::on_p4_4_clicked()
{
    ui->p4_4->setEnabled(0);
    ui->p4_4-> setText(QString::number(check(4,4)));
    gameTrue(4,4);
}
void Minesweeper::on_p4_5_clicked()
{
    ui->p4_5->setEnabled(0);
    ui->p4_5-> setText(QString::number(check(4,5)));
    gameTrue(4,5);
}
void Minesweeper::on_p4_6_clicked()
{
    ui->p4_6->setEnabled(0);
    ui->p4_6-> setText(QString::number(check(4,6)));
    gameTrue(4,6);
}
void Minesweeper::on_p4_7_clicked()
{
    ui->p4_7->setEnabled(0);
    ui->p4_7-> setText(QString::number(check(4,7)));
    gameTrue(4,7);
}
void Minesweeper::on_p4_8_clicked()
{
    ui->p4_8->setEnabled(0);
    ui->p4_8-> setText(QString::number(check(4,8)));
    gameTrue(4,8);
}
void Minesweeper::on_p4_9_clicked()
{
    ui->p4_9->setEnabled(0);
    ui->p4_9-> setText(QString::number(check(4,9)));
    gameTrue(4,9);
}
void Minesweeper::on_p4_10_clicked()
{
    ui->p4_10->setEnabled(0);
    ui->p4_10-> setText(QString::number(check(4,10)));
    gameTrue(4,10);
}
void Minesweeper::on_p5_1_clicked()
{
    ui->p5_1->setEnabled(0);
    ui->p5_1-> setText(QString::number(check(5,1)));
    gameTrue(5,1);
}
void Minesweeper::on_p5_2_clicked()
{
    ui->p5_2->setEnabled(0);
    ui->p5_2-> setText(QString::number(check(5,2)));
    gameTrue(5,2);
}
void Minesweeper::on_p5_3_clicked()
{
    ui->p5_3->setEnabled(0);
    ui->p5_3-> setText(QString::number(check(5,3)));
    gameTrue(5,3);
}
void Minesweeper::on_p5_4_clicked()
{
    ui->p5_4->setEnabled(0);
    ui->p5_4-> setText(QString::number(check(5,4)));
    gameTrue(5,4);
}
void Minesweeper::on_p5_5_clicked()
{
    ui->p5_5->setEnabled(0);
    ui->p5_5-> setText(QString::number(check(5,5)));
    gameTrue(5,5);
}
void Minesweeper::on_p5_6_clicked()
{
    ui->p5_6->setEnabled(0);
    ui->p5_6-> setText(QString::number(check(5,6)));
    gameTrue(5,6);
}
void Minesweeper::on_p5_7_clicked()
{
    ui->p5_7->setEnabled(0);
    ui->p5_7-> setText(QString::number(check(5,7)));
    gameTrue(5,7);
}
void Minesweeper::on_p5_8_clicked()
{
    ui->p5_8->setEnabled(0);
    ui->p5_8-> setText(QString::number(check(5,8)));
    gameTrue(5,8);
}
void Minesweeper::on_p5_9_clicked()
{
    ui->p5_9->setEnabled(0);
    ui->p5_9-> setText(QString::number(check(5,9)));
    gameTrue(5,9);
}
void Minesweeper::on_p5_10_clicked()
{
    ui->p5_10->setEnabled(0);
    ui->p5_10-> setText(QString::number(check(5,10)));
    gameTrue(5,10);
}
