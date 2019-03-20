#include <iostream>

using namespace std;

void startView();

int main()
{
    startView();
    
    return 0;
}

void startView()
{
    bool i = 1;
    
    while (i == 1)
    {
        cout << endl << "    " <<
        "New" << endl << "    " <<
        "-> Load" << endl << "    " <<
        "Exit";
    }
    
}
