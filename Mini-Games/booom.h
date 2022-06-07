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
    void GO(int);

private slots:

    void on_BoomGOGO_clicked();

    void on_KeySet_clicked();

    void on_BoomKey_returnPressed();

    void on_BoomSizeKey_returnPressed();

    void on_BoomGOEND_clicked();

    void on_mod_1_valueChanged(int value);

    void on_mod_2_valueChanged(int value);

    void on_mod_3_valueChanged(int value);

    void on_mod_4_valueChanged(int value);

    void on_mod_s_valueChanged(int value);

    void on_CPUKey_clicked();

private:

    void setBoomKeySize();
    void Boooom();
    void WIN();
    void nameSet(int,int);

    Ui::Booom *ui;

    int BoomSize;
    int BoomMax;
    int BoomMin;
    int BoomEnd;
    int play;
    int playerType[4];
    QString playName[4];
};

#endif // BOOOM_H
