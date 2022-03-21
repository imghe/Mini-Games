#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

//--------------------------------------------//
#include <QApplication>
//放置讀取視窗標頭

#include "pokerthansize.h"//撲克牌( 比大小 )



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
    static int pageNo;
    static int pageMAX;

    void setPage(int);
//--------------------------------------------//
//放置初始視窗宣告

    pokerThanSize pokerThanSize;

//--------------------------------------------//
private slots:
    void on_stop_clicked();

    void on_DOWN_clicked();

    void on_UP_clicked();

    void on_play_clicked();

    void on_back_clicked();

    void on_pageComboBox_currentIndexChanged(int index);
//--------------------------------------------//
//放置開啟視窗指令

    void on_pokerThanSize_clicked();

//--------------------------------------------//
private:
    Ui::MainWindow *ui;
};
#endif // MAINWINDOW_H
