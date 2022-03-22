#ifndef POKER_H
#define POKER_H

#include <string>

class poker
{

public:
    poker();
    static std::string allPoker[52];
    static bool hasPoker[52];
private:
    int givePoker();
};

#endif // POKER_H
