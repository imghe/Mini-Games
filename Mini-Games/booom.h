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

private:
    Ui::Booom *ui;
};

#endif // BOOOM_H
