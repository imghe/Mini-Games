#ifndef POKERTHANSIZE_H
#define POKERTHANSIZE_H

#include <QWidget>

namespace Ui {
class pokerThanSize;
}

class pokerThanSize : public QWidget
{
    Q_OBJECT

public:
    explicit pokerThanSize(QWidget *parent = nullptr);
    ~pokerThanSize();

private:
    Ui::pokerThanSize *ui;
};

#endif // POKERTHANSIZE_H

