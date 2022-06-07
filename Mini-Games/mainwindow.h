#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

//--------------------------------------------//
#include <QApplication>

#include "booom.h"
#include "pokerthansize.h"
#include "minesweeper.h"

//--------------------------------------------//

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT


public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();


private slots:
    //--------------------------------------------//

    void on_pokerThanSize_clicked();

    void on_Booom_clicked();

    void on_mineSweeper_clicked();

    //--------------------------------------------//
    void setPage(int);

    void on_stop_clicked();

    void on_DOWN_clicked();

    void on_UP_clicked();

    void on_play_clicked();

    void on_back_clicked();

    void on_pageComboBox_currentIndexChanged(int index);

private:
    Ui::MainWindow *ui;

    static int pageNo;
    static int pageMAX;

    //--------------------------------------------//

    pokerThanSize pokerThanSize;
    Booom Booom;
    Minesweeper Minesweeper;

    //--------------------------------------------//
};
#endif // MAINWINDOW_H


