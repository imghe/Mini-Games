#include "mainwindow.h"
#include "ui_mainwindow.h"

int MainWindow::pageNo = 0 ;
int MainWindow::pageMAX = 1 ;

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    ui->main->setCurrentIndex(0);
    delete ui;
}

void MainWindow::setPage(int PageNo)
{
    if(0<=PageNo&&PageNo<=pageMAX){
        pageNo=PageNo;
        ui->menus->setCurrentIndex(pageNo);
    }
}

void MainWindow::on_stop_clicked()
{
    this->close();
}

void MainWindow::on_DOWN_clicked()
{
        ui->pageComboBox->setCurrentIndex(pageNo>0?pageNo-1:pageNo);
}


void MainWindow::on_UP_clicked()
{
        ui->pageComboBox->setCurrentIndex(pageNo<pageMAX?pageNo+1:pageNo);
}

void MainWindow::on_play_clicked()
{
    ui->main->setCurrentIndex(1);
    ui->menus->setCurrentIndex(0);
    ui->pageComboBox->setEditable(true);
    ui->pageComboBox->setCurrentIndex(0);
    for (int i=1;i<pageMAX+2;i++)
        {
            ui->pageComboBox->addItem(QString::number(i));
        }
}


void MainWindow::on_back_clicked()
{
    ui->main->setCurrentIndex(0);
}


void MainWindow::on_pageComboBox_currentIndexChanged(int index)
{
    setPage(index);
}

void MainWindow::on_pokerThanSize_clicked()
{
    pokerThanSize.show();
}

