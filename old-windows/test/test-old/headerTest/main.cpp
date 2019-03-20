#include "isNumber.h"
#include "randomNumber.h"

using namespace std;

int main()
{
    string stuff = "Hello", stuff2 = "1234";
    
    cout << randomNum(10, 5) << endl << isNum(stuff) << endl << isNum(stuff2);
    
    return 0;
}
