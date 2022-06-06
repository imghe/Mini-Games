#ifndef POKER_H
#define POKER_H

#include <string>

class poker
{

public:
    int givePoker();
    int getpoker();
    void setpoker(int);
    int getOppOpoker();
    void setOppOpoker(int);
    poker();
private:

    static int myPoker;
    static int oppoPoker;


};

#endif // POKER_H
