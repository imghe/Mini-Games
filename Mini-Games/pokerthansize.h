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

/*

    UML_Ãþ¹Ï_poker
--------------------------------------------------------------------------------------------------------------------
-    allPoker   : static string[52];
-    hasPoker   : static bool[52];
-    pokerThanSize  : class pokerThanSize;

+    *ui    : class pokerThanSize
--------------------------------------------------------------------------------------------------------------------
-    pokerThanSize(QWidget *parent = nullptr)   : explicit;
-    ~pokerThanSize();

+

*/
