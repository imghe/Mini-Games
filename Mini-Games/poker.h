#ifndef POKER_H
#define POKER_H

#include <string>

class poker
{

public:
    int givePoker();
    void resetPoker();
private:
    poker();
    static std::string allPoker[52];
    static bool hasPoker[52];

};

#endif // POKER_H
