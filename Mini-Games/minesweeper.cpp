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
    clearMines();
}

Minesweeper::~Minesweeper()
{
    delete ui;
}

void Minesweeper::clearMines()
{
    for(int i = 0; i < 5; i++)
    {
        for(int j = 0; j < 10; j++)
        {
            mines[i][j] = 0;
        }
    }
}

void Minesweeper::setMines()
{
    successCounter = 0;
    clearMines();
    ResetText();
    int counter = 0, temp_number, temp_number_x, temp_number_y;
    srand(time(NULL));
    while(counter < 10)
    {
        temp_number = rand() % 50;
        temp_number_x = temp_number % 10;
        temp_number_y = temp_number / 10;
        if(mines[temp_number_x][temp_number_y] == 0)
        {
            mines[temp_number_x][temp_number_y] = 1;
            counter++;
        }
    }
}

void Minesweeper::ResetText()
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
}

bool Minesweeper::checkMine(int y_spot, int x_spot)
{
    if(mines[x_spot][y_spot] == 1)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int Minesweeper::checkSurrounding(int y_spot, int x_spot)
{
    int counter = 0;
    if(x_spot > 0 && x_spot < 9)
    {
        if(y_spot > 0 && y_spot < 4)
        {
            for(int i = y_spot - 1; i <= y_spot + 1; i++)
            {
                for(int j = x_spot - 1; j <= x_spot + 1; j++)
                {
                    if(mines[i][j] == 1)
                    {
                        counter++;
                    }
                }
            }
        }
        else if(y_spot == 0)
        {
            for(int i = y_spot; i <= y_spot + 1; i++)
            {
                for(int j = x_spot - 1; j <= x_spot + 1; j++)
                {
                    if(mines[i][j] == 1)
                    {
                        counter++;
                    }
                }
            }
        }
        else if(y_spot == 4)
        {
            for(int i = y_spot - 1; i <= y_spot; i++)
            {
                for(int j = x_spot - 1; j <= x_spot + 1; j++)
                {
                    if(mines[i][j] == 1)
                    {
                        counter++;
                    }
                }
            }
        }
    }
    else if(x_spot == 0)
    {
        if(y_spot > 0 && y_spot < 4)
        {
            for(int i = y_spot - 1; i <= y_spot + 1; i++)
            {
                for(int j = x_spot; j <= x_spot + 1; j++)
                {
                    if(mines[i][j] == 1)
                    {
                        counter++;
                    }
                }
            }
        }
        else if(y_spot == 0)
        {
            for(int i = y_spot; i <= y_spot + 1; i++)
            {
                for(int j = x_spot; j <= x_spot + 1; j++)
                {
                    if(mines[i][j] == 1)
                    {
                        counter++;
                    }
                }
            }
        }
        else if(y_spot == 4)
        {
            for(int i = y_spot - 1; i <= y_spot; i++)
            {
                for(int j = x_spot; j <= x_spot + 1; j++)
                {
                    if(mines[i][j] == 1)
                    {
                        counter++;
                    }
                }
            }
        }
    }
    else if(x_spot == 9)
    {
        if(y_spot > 0 && y_spot < 4)
        {
            for(int i = y_spot - 1; i <= y_spot + 1; i++)
            {
                for(int j = x_spot - 1; j <= x_spot; j++)
                {
                    if(mines[i][j] == 1)
                    {
                        counter++;
                    }
                }
            }
        }
        else if(y_spot == 0)
        {
            for(int i = y_spot; i <= y_spot + 1; i++)
            {
                for(int j = x_spot - 1; j <= x_spot; j++)
                {
                    if(mines[i][j] == 1)
                    {
                        counter++;
                    }
                }
            }
        }
        else if(y_spot == 4)
        {
            for(int i = y_spot - 1; i <= y_spot; i++)
            {
                for(int j = x_spot - 1; j <= x_spot; j++)
                {
                    if(mines[i][j] == 1)
                    {
                        counter++;
                    }
                }
            }
        }
    }
    return counter;
}

void Minesweeper::checkWinning()
{
    if(successCounter == 40)
    {
        win();
    }
}

void Minesweeper::win()
{
    QString out="You Win";
    QMessageBox:: about ( this , tr ( "Minesweeper" ), out);
    setMines();
}

void Minesweeper::gameOver()
{
    QString out="You Lose";
    QMessageBox:: about ( this , tr ( "Minesweeper" ), out);
    setMines();
}

void Minesweeper::on_pushButton_clicked()
{
    setMines();
}

void Minesweeper::on_p1_1_clicked()
{
    if(checkMine(0, 0))
    {
        gameOver();
    }
    else
    {
        ui->p1_1->setText(QString::number(checkSurrounding(0, 0)));
        successCounter++;
        checkWinning();
    }
}


void Minesweeper::on_p1_2_clicked()
{
    if(checkMine(0, 1))
    {
        gameOver();
    }
    else
    {
        ui->p1_2->setText(QString::number(checkSurrounding(0, 1)));
        successCounter++;
        checkWinning();
    }
}


void Minesweeper::on_p1_3_clicked()
{
    if(checkMine(0, 2))
    {
        gameOver();
    }
    else
    {
        ui->p1_3->setText(QString::number(checkSurrounding(0, 2)));
        successCounter++;
        checkWinning();
    }
}


void Minesweeper::on_p1_4_clicked()
{
    if(checkMine(0, 3))
    {
        gameOver();
    }
    else
    {
        ui->p1_4->setText(QString::number(checkSurrounding(0, 3)));
        successCounter++;
        checkWinning();
    }
}


void Minesweeper::on_p1_5_clicked()
{
    if(checkMine(0, 4))
    {
        gameOver();
    }
    else
    {
        ui->p1_5->setText(QString::number(checkSurrounding(0, 4)));
        successCounter++;
        checkWinning();
    }
}


void Minesweeper::on_p1_6_clicked()
{
    if(checkMine(0, 5))
    {
        gameOver();
    }
    else
    {
        ui->p1_6->setText(QString::number(checkSurrounding(0, 5)));
        successCounter++;
        checkWinning();
    }
}


void Minesweeper::on_p1_7_clicked()
{
    if(checkMine(0, 6))
    {
        gameOver();
    }
    else
    {
        ui->p1_7->setText(QString::number(checkSurrounding(0, 6)));
        successCounter++;
        checkWinning();
    }
}


void Minesweeper::on_p1_8_clicked()
{
    if(checkMine(0, 7))
    {
        gameOver();
    }
    else
    {
        ui->p1_8->setText(QString::number(checkSurrounding(0, 7)));
        successCounter++;
        checkWinning();
    }
}


void Minesweeper::on_p1_9_clicked()
{
    if(checkMine(0, 8))
    {
        gameOver();
    }
    else
    {
        ui->p1_9->setText(QString::number(checkSurrounding(0, 8)));
        successCounter++;
        checkWinning();
    }
}


void Minesweeper::on_p1_10_clicked()
{
    if(checkMine(0, 9))
    {
        gameOver();
    }
    else
    {
        ui->p1_10->setText(QString::number(checkSurrounding(0, 9)));
        successCounter++;
        checkWinning();
    }
}


void Minesweeper::on_p2_1_clicked()
{
    if(checkMine(1, 0))
    {
        gameOver();
    }
    else
    {
        ui->p2_1->setText(QString::number(checkSurrounding(1, 0)));
        successCounter++;
        checkWinning();
    }
}


void Minesweeper::on_p2_2_clicked()
{
    if(checkMine(1, 1))
    {
        gameOver();
    }
    else
    {
        ui->p2_2->setText(QString::number(checkSurrounding(1, 1)));
        successCounter++;
        checkWinning();
    }
}


void Minesweeper::on_p2_3_clicked()
{
    if(checkMine(1, 2))
    {
        gameOver();
    }
    else
    {
        ui->p2_3->setText(QString::number(checkSurrounding(1, 2)));
        successCounter++;
        checkWinning();
    }
}


void Minesweeper::on_p2_4_clicked()
{
    if(checkMine(1, 3))
    {
        gameOver();
    }
    else
    {
        ui->p2_4->setText(QString::number(checkSurrounding(1, 3)));
        successCounter++;
        checkWinning();
    }
}


void Minesweeper::on_p2_5_clicked()
{
    if(checkMine(1, 4))
    {
        gameOver();
    }
    else
    {
        ui->p2_5->setText(QString::number(checkSurrounding(1, 4)));
        successCounter++;
        checkWinning();
    }
}


void Minesweeper::on_p2_6_clicked()
{
    if(checkMine(1, 5))
    {
        gameOver();
    }
    else
    {
        ui->p2_6->setText(QString::number(checkSurrounding(1, 5)));
        successCounter++;
        checkWinning();
    }
}


void Minesweeper::on_p2_7_clicked()
{
    if(checkMine(1, 6))
    {
        gameOver();
    }
    else
    {
        ui->p2_7->setText(QString::number(checkSurrounding(1, 6)));
        successCounter++;
        checkWinning();
    }
}


void Minesweeper::on_p2_8_clicked()
{
    if(checkMine(1, 7))
    {
        gameOver();
    }
    else
    {
        ui->p2_8->setText(QString::number(checkSurrounding(1, 7)));
        successCounter++;
        checkWinning();
    }
}


void Minesweeper::on_p2_9_clicked()
{
    if(checkMine(1, 8))
    {
        gameOver();
    }
    else
    {
        ui->p2_9->setText(QString::number(checkSurrounding(1, 8)));
        successCounter++;
        checkWinning();
    }
}


void Minesweeper::on_p2_10_clicked()
{
    if(checkMine(1, 9))
    {
        gameOver();
    }
    else
    {
        ui->p2_10->setText(QString::number(checkSurrounding(1, 9)));
        successCounter++;
        checkWinning();
    }
}


void Minesweeper::on_p3_1_clicked()
{
    if(checkMine(2, 0))
    {
        gameOver();
    }
    else
    {
        ui->p3_1->setText(QString::number(checkSurrounding(2, 0)));
        successCounter++;
        checkWinning();
    }
}


void Minesweeper::on_p3_2_clicked()
{
    if(checkMine(2, 1))
    {
        gameOver();
    }
    else
    {
        ui->p3_2->setText(QString::number(checkSurrounding(2, 1)));
        successCounter++;
        checkWinning();
    }
}


void Minesweeper::on_p3_3_clicked()
{
    if(checkMine(2, 2))
    {
        gameOver();
    }
    else
    {
        ui->p3_3->setText(QString::number(checkSurrounding(2, 2)));
        successCounter++;
        checkWinning();
    }
}


void Minesweeper::on_p3_4_clicked()
{
    if(checkMine(2, 3))
    {
        gameOver();
    }
    else
    {
        ui->p3_4->setText(QString::number(checkSurrounding(2, 3)));
        successCounter++;
        checkWinning();
    }
}


void Minesweeper::on_p3_5_clicked()
{
    if(checkMine(2, 4))
    {
        gameOver();
    }
    else
    {
        ui->p3_5->setText(QString::number(checkSurrounding(2, 4)));
        successCounter++;
        checkWinning();
    }
}


void Minesweeper::on_p3_6_clicked()
{
    if(checkMine(2, 5))
    {
        gameOver();
    }
    else
    {
        ui->p3_6->setText(QString::number(checkSurrounding(2, 5)));
        successCounter++;
        checkWinning();
    }
}


void Minesweeper::on_p3_7_clicked()
{
    if(checkMine(2, 6))
    {
        gameOver();
    }
    else
    {
        ui->p3_7->setText(QString::number(checkSurrounding(2, 6)));
        successCounter++;
        checkWinning();
    }
}


void Minesweeper::on_p3_8_clicked()
{
    if(checkMine(2, 7))
    {
        gameOver();
    }
    else
    {
        ui->p3_8->setText(QString::number(checkSurrounding(2, 7)));
        successCounter++;
        checkWinning();
    }
}


void Minesweeper::on_p3_9_clicked()
{
    if(checkMine(2, 8))
    {
        gameOver();
    }
    else
    {
        ui->p3_9->setText(QString::number(checkSurrounding(2, 8)));
        successCounter++;
        checkWinning();
    }
}


void Minesweeper::on_p3_10_clicked()
{
    if(checkMine(2, 9))
    {
        gameOver();
    }
    else
    {
        ui->p3_10->setText(QString::number(checkSurrounding(2, 9)));
        successCounter++;
        checkWinning();
    }
}


void Minesweeper::on_p4_1_clicked()
{
    if(checkMine(3, 0))
    {
        gameOver();
    }
    else
    {
        ui->p4_1->setText(QString::number(checkSurrounding(3, 0)));
        successCounter++;
        checkWinning();
    }
}


void Minesweeper::on_p4_2_clicked()
{
    if(checkMine(3, 1))
    {
        gameOver();
    }
    else
    {
        ui->p4_2->setText(QString::number(checkSurrounding(3, 1)));
        successCounter++;
        checkWinning();
    }
}


void Minesweeper::on_p4_3_clicked()
{
    if(checkMine(3, 2))
    {
        gameOver();
    }
    else
    {
        ui->p4_3->setText(QString::number(checkSurrounding(3, 2)));
        successCounter++;
        checkWinning();
    }
}


void Minesweeper::on_p4_4_clicked()
{
    if(checkMine(3, 3))
    {
        gameOver();
    }
    else
    {
        ui->p4_4->setText(QString::number(checkSurrounding(3, 3)));
        successCounter++;
        checkWinning();
    }
}


void Minesweeper::on_p4_5_clicked()
{
    if(checkMine(3, 4))
    {
        gameOver();
    }
    else
    {
        ui->p4_5->setText(QString::number(checkSurrounding(3, 4)));
        successCounter++;
        checkWinning();
    }
}


void Minesweeper::on_p4_6_clicked()
{
    if(checkMine(3, 5))
    {
        gameOver();
    }
    else
    {
        ui->p4_6->setText(QString::number(checkSurrounding(3, 5)));
        successCounter++;
        checkWinning();
    }
}


void Minesweeper::on_p4_7_clicked()
{
    if(checkMine(3, 6))
    {
        gameOver();
    }
    else
    {
        ui->p4_7->setText(QString::number(checkSurrounding(3, 6)));
        successCounter++;
        checkWinning();
    }
}


void Minesweeper::on_p4_8_clicked()
{
    if(checkMine(3, 7))
    {
        gameOver();
    }
    else
    {
        ui->p4_8->setText(QString::number(checkSurrounding(3, 7)));
        successCounter++;
        checkWinning();
    }
}


void Minesweeper::on_p4_9_clicked()
{
    if(checkMine(3, 8))
    {
        gameOver();
    }
    else
    {
        ui->p4_9->setText(QString::number(checkSurrounding(3, 8)));
        successCounter++;
        checkWinning();
    }
}


void Minesweeper::on_p4_10_clicked()
{
    if(checkMine(3, 9))
    {
        gameOver();
    }
    else
    {
        ui->p4_10->setText(QString::number(checkSurrounding(3, 9)));
        successCounter++;
        checkWinning();
    }
}


void Minesweeper::on_p5_1_clicked()
{
    if(checkMine(4, 0))
    {
        gameOver();
    }
    else
    {
        ui->p5_1->setText(QString::number(checkSurrounding(4, 0)));
        successCounter++;
        checkWinning();
    }
}


void Minesweeper::on_p5_2_clicked()
{
    if(checkMine(4, 1))
    {
        gameOver();
    }
    else
    {
        ui->p5_2->setText(QString::number(checkSurrounding(4, 1)));
        successCounter++;
        checkWinning();
    }
}


void Minesweeper::on_p5_3_clicked()
{
    if(checkMine(4, 2))
    {
        gameOver();
    }
    else
    {
        ui->p5_3->setText(QString::number(checkSurrounding(4, 2)));
        successCounter++;
        checkWinning();
    }
}


void Minesweeper::on_p5_4_clicked()
{
    if(checkMine(4, 3))
    {
        gameOver();
    }
    else
    {
        ui->p5_4->setText(QString::number(checkSurrounding(4, 3)));
        successCounter++;
        checkWinning();
    }
}


void Minesweeper::on_p5_5_clicked()
{
    if(checkMine(4, 4))
    {
        gameOver();
    }
    else
    {
        ui->p5_5->setText(QString::number(checkSurrounding(4, 4)));
        successCounter++;
        checkWinning();
    }
}


void Minesweeper::on_p5_6_clicked()
{
    if(checkMine(4, 5))
    {
        gameOver();
    }
    else
    {
        ui->p5_6->setText(QString::number(checkSurrounding(4, 5)));
        successCounter++;
        checkWinning();
    }
}


void Minesweeper::on_p5_7_clicked()
{
    if(checkMine(4, 6))
    {
        gameOver();
    }
    else
    {
        ui->p5_7->setText(QString::number(checkSurrounding(4, 6)));
        successCounter++;
        checkWinning();
    }
}


void Minesweeper::on_p5_8_clicked()
{
    if(checkMine(4, 7))
    {
        gameOver();
    }
    else
    {
        ui->p5_8->setText(QString::number(checkSurrounding(4, 7)));
        successCounter++;
        checkWinning();
    }
}


void Minesweeper::on_p5_9_clicked()
{
    if(checkMine(4, 8))
    {
        gameOver();
    }
    else
    {
        ui->p5_9->setText(QString::number(checkSurrounding(4, 8)));
        successCounter++;
        checkWinning();
    }
}


void Minesweeper::on_p5_10_clicked()
{
    if(checkMine(4, 9))
    {
        gameOver();
    }
    else
    {
        ui->p5_10->setText(QString::number(checkSurrounding(4, 9)));
        successCounter++;
        checkWinning();
    }
}
