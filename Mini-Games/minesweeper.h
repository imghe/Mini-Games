#ifndef MINESWEEPER_H
#define MINESWEEPER_H

#include <QWidget>

namespace Ui {
class Minesweeper;
}

class Minesweeper : public QWidget
{
    Q_OBJECT

public:
    explicit Minesweeper(QWidget *parent = nullptr);
    ~Minesweeper();
    bool firstStep;
    int successCounter;
    void resetGame();
    void setMines();
    void firstStepSetMines(int, int);
    void minesReset();
    bool checkMine(int, int);
    int checkSurrounding(int, int);
    void checkWinning();
    void win();
    void gameOver();
    void showMines();

private slots:
    void on_pushButton_clicked();

    void on_p1_1_clicked();

    void on_p1_2_clicked();

    void on_p1_3_clicked();

    void on_p1_4_clicked();

    void on_p1_5_clicked();

    void on_p1_6_clicked();

    void on_p1_7_clicked();

    void on_p1_8_clicked();

    void on_p1_9_clicked();

    void on_p1_10_clicked();

    void on_p2_1_clicked();

    void on_p2_2_clicked();

    void on_p2_3_clicked();

    void on_p2_4_clicked();

    void on_p2_5_clicked();

    void on_p2_6_clicked();

    void on_p2_7_clicked();

    void on_p2_8_clicked();

    void on_p2_9_clicked();

    void on_p2_10_clicked();

    void on_p3_1_clicked();

    void on_p3_2_clicked();

    void on_p3_3_clicked();

    void on_p3_4_clicked();

    void on_p3_5_clicked();

    void on_p3_6_clicked();

    void on_p3_7_clicked();

    void on_p3_8_clicked();

    void on_p3_9_clicked();

    void on_p3_10_clicked();

    void on_p4_1_clicked();

    void on_p4_2_clicked();

    void on_p4_3_clicked();

    void on_p4_4_clicked();

    void on_p4_5_clicked();

    void on_p4_6_clicked();

    void on_p4_7_clicked();

    void on_p4_8_clicked();

    void on_p4_9_clicked();

    void on_p4_10_clicked();

    void on_p5_1_clicked();

    void on_p5_2_clicked();

    void on_p5_3_clicked();

    void on_p5_4_clicked();

    void on_p5_5_clicked();

    void on_p5_6_clicked();

    void on_p5_7_clicked();

    void on_p5_8_clicked();

    void on_p5_9_clicked();

    void on_p5_10_clicked();

    void on_showMinesButton_clicked();

private:
    bool mines[5][10];

    Ui::Minesweeper *ui;
};

#endif // MINESWEEPER_H
