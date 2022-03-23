#ifndef POKER_H
#define POKER_H

#include <string>

class poker
{

public:

    static std::string allPoker[52];
    static bool hasPoker[52];
    poker();
private:
    int givePoker();
    void resetPoker();
};

#endif // POKER_H


/*

    UML_Ãþ¹Ï_poker
--------------------------------------------------------------------------------------------------------------------
-    allPoker   : static string[52];
-    hasPoker   : static bool[52];
-    pokerThanSize  : class pokerThanSize;

--------------------------------------------------------------------------------------------------------------------
-    poker();

+    givePoker()    : int;
+    resetPoker()   : void;

*/
