#ifndef RANDOMNUMBER_H_INCLUDED
#define RANDOMNUMBER_H_INCLUDED

#include "common.h"

int randomNum(int, int);

int randomNum(int startNum, int endNum)
{
    int randNum;
    
    srand (time(NULL));
    
    return randNum = rand() % endNum + startNum;
}

#endif // RANDOMNUMBER_H_INCLUDED
