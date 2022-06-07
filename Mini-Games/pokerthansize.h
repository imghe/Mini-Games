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
    void reset();

private slots:

    void on_higer_clicked();

    void on_lower_clicked();

    void on_start_clicked();

    void on_pushButton_clicked();

private:
    Ui::pokerThanSize *ui;
};

#endif // POKERTHANSIZE_H

