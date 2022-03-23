#include "poker.h"

#include <QString>
#include <QTime>

std::string poker::allPoker[52]={};
bool poker::hasPoker[52]={};

poker::poker()
{
    for(int i=0;i<52;i++){
        switch (i% 4){
            case  1: allPoker[i]+="?";break;
            case  2: allPoker[i]+="?";break;
            case  3: allPoker[i]+="?";break;
            case  4: allPoker[i]+="?";break;
        }
        switch (i%13){
            case  0: allPoker[i]+="A";  break;
            case 10: allPoker[i]+="J";  break;
            case 11: allPoker[i]+="Q";  break;
            case 12: allPoker[i]+="K";  break;
            default: allPoker[i]+= i ;  break;
        }
    }
}

int poker::givePoker(){

    srand(time(NULL));
    int t=0;

    while (1) {
        t=rand()%52;
        if(hasPoker[t]==0){
            hasPoker[t]=1;
            return t;
        }
    }
}

void poker::resetPoker(){
    for(int i=0;i<52;i++)
        hasPoker[i]=0;
}
