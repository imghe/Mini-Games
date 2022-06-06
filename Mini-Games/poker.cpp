
#include "poker.h"

#include <QString>
#include <QTime>

 int poker::myPoker=0;
 int poker::oppoPoker=0;
poker::poker()
{

}

int poker::givePoker(){

    srand(time(0));
    int t=0;


        t=rand()%52;

            return t;


}
int poker::getpoker(){
    return myPoker;
}
void poker::setpoker(int newPoker ){
    myPoker=newPoker;
}
int poker::getOppOpoker(){
    return oppoPoker;
}
void poker::setOppOpoker(int newPoker){
    oppoPoker=newPoker;
}


