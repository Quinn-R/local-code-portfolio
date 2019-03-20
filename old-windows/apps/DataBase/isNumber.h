#ifndef ISNUMBER_H_INCLUDED
#define ISNUMBER_H_INCLUDED

#include "common.h"

bool isNum(string);

bool isNum(string content)
{
    int counter = 0;
    
    for (int i = 0; i < content.length(); i++)
    {
        if (content[i] >= '0' && content[i] <= '9')
            counter++;
    }
    
    if (counter == content.length())
        return true;
    return false;
}

#endif // ISNUMBER_H_INCLUDED
