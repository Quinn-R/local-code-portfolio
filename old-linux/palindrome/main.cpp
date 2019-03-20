#include "inc/common.h"

using namespace std;

int main()
{
    int L, m = 0;
    string S;
    char checkL1, checkL2;
    
    cout << "Enter Length: "; cin >> L; cin.ignore();
    cout << "Enter string: "; cin >> S; cin.ignore();

    for(int i = 0; i < L; i++)
    {
        checkL1 = S[i];
        for(int j = 0; j < L; j++)
        {
            
            checkL2 = S[j];
            
            cout << endl << "checkL1: " << checkL1;
            cout << endl << "checkL2: " << checkL2;
         
            if(checkL1 < checkL2)
            {
                m++;
                cout << endl << "true";
            }
        }
        
        if(m == L)
        {
            S[i] = checkL1;
        }
    }

    cout << endl << S << endl;
}
