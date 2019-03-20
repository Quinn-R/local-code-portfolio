#ifndef UTIL_H_INCLUDED
#define UTIL_H_INCLUDED

#include "common.h"

void space()
{
  string enters = "\n\n\n\n\n\n\n\n\n\n";
  string rule =
  "--------------------\n----------";

  cout << endl << rule << enters;
}

void enterContinue()
{
  cout << endl << endl << "  Hit [enter] to continue";

  cin.ignore(1024, '\n');
}

#endif // UTIL_H_INCLUDED
