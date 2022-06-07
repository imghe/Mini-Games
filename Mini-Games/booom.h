#ifndef BOOOM_H
#define BOOOM_H

#include <QWidget>

namespace Ui {
class Booom;
}

class Booom : public QWidget
{
    Q_OBJECT

public:
    explicit Booom(QWidget *parent = nullptr);
    ~Booom();
    void BoomReset();

private slots:


    void on_BoomGOGO_clicked();

    void on_KeySet_clicked();

    void on_BoomKey_returnPressed();

    void on_BoomSizeKey_returnPressed();

    void on_BoomSecKey_returnPressed();

    void on_BoomGOEND_clicked();


    void on_radioButton_1_clicked();

    void on_radioButton_2_clicked();

    void on_radioButton_3_clicked();

    void on_radioButton_4_clicked();

    void on_radioButton_5_clicked();

    void on_radioButton_6_clicked();

    void on_radioButton_7_clicked();

    void on_radioButton_8_clicked();

    void on_radioButton_9_clicked();

    void on_radioButton_10_clicked();

    void on_radioButton_11_clicked();

    void on_radioButton_12_clicked();

    void on_radioButton_13_clicked();

    void on_radioButton_14_clicked();

    void on_radioButton_15_clicked();

    void on_radioButton_16_clicked();

private:
    void setBoomKeySize();

    void Boooom();
    void WIN();
    void nameSet_1(int);
    void nameSet_2(int);
    void nameSet_3(int);
    void nameSet_4(int);

    Ui::Booom *ui;

    static int BoomSize;
    static int BoomMax;
    static int BoomMin;
    static int BoomSec;
    static int BoomEnd;
    static int playerType_1;
    static int playerType_2;
    static int playerType_3;
    static int playerType_4;
    static QString play;
    static QString playName_1;
    static QString playName_2;
    static QString playName_3;
    static QString playName_4;
};

#endif // BOOOM_H
