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

private:
    void setBoomKeySize();

    void Boooom();
    void KeyIn(int);

    Ui::Booom *ui;

    static int BoomSize;
    static int BoomMax;
    static int BoomMin;
    static int BoomSec;
    static int BoomEnd;
};

#endif // BOOOM_H