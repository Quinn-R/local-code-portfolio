#ifndef REPLACELETTER_H_INCLUDED
#define REPLACELETTER_H_INCLUDED

#include "common.h"

string replaceL (string a, char b, char c)
{
    for (int i = 0; i < a.length(); i++)
    {
        if (a[i] == b)
        {
            a[i] = c;
        }
    }
    return a;
}

string replaceL2 (string a, int b, char c)
{
    a[b] = c;
    return a;
}

#endif // REPLACELETTER_H_INCLUDED
