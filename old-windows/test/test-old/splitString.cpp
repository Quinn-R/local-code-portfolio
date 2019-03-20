#include <iostream>
using namespace std;
int main() 
{
    // init ->
    
    string inputString = "helloworl";
    
    int whileCount1 = 0;
    int whileCount2 = 0;
    int stringCount = 0;
    
    // find the size of the string
    for (int i = 0; i < inputString.length(); i++)
        stringCount++;
    
    // assign size of string to array
    string array [stringCount];
    
    // <- init
    
    
    // assigns each element of the string to the array
    for (int i = 0; i < stringCount; i++)
        array[i] = inputString[i];
    
    // loop that happens for length of string
    while (whileCount1 < stringCount) 
    {
        // compares start of string and end of string
        if ((array [whileCount1] ) == (array [stringCount - whileCount1] ))
            whileCount2++;
        
        whileCount1++;
    }
    
    // decides if string is palindrome
    
    bool running = true;
    
    while (running == true)
    {
        if (stringCount == 1)
        {
            cout << "string is single letter...";
            running = false;
            return true;
        }
        else if ((stringCount % 2) == 0)
        {
            cout << "string is even...";
            if (whileCount2 == (stringCount / 2))
            {
                cout << "string is palindrome...";
                running = false;
                return true;
            }
            else 
            {
                running = false;
                return false;
            }
        }
        else if ((stringCount % 2) != 0)
        {
            cout << "string is odd...";
            if (whileCount2 == (stringCount / 2) - 1)
            {
                cout << "string is palindrome...";
                running = false;
                return true;
            }
            else 
            {
                running = false;
                return false;
            }
        }
        else
        {
            cout << "string is not palindrome...";
            running = false;
            return false;
        }
    }
}



















/*
int main() {
    /*
    int sizeMax = 5;
    
	string array [sizeMax];
    string inputString = "Hello";
    string delimiter = "";
    
    for (int count = 0; count < sizeMax; count++)
    {
        array [count] = inputString.substr(0, inputString.find(delimiter));
        cout << array [count] << " ";
    }
	return 0;
	
	
	string inputString = "hello";
	int stringCount = 0;
    
    // find the size of the string
    for (int i = 0; i < inputString.length(); i++)
        stringCount++;
    cout << stringCount << endl;
    
    // assign size of string to array
    string array [stringCount];
    
    int i = 0;
    
    while (i < stringCount)
    {
        array[i] = inputString [i];
        cout << array[i] << endl;
        i++;
    }
    
}



bool checkPalindrome(string inputString) {
    
    // init
    int whileCount1 = 0;
    int whileCount2 = 0;
    int stringCount;
    
    // find the size of the string
    for (int i = 0; i < inputString.length(); i++)
        stringCount++;
    
    // assign size of string to array
    string array [stringCount];
    
    // assigns each element of the string to the array
    for (int i = 0; i < inputString.length(); i++)
        array[i] = inputString[i];
    
    
    // loop that happens for length of string
    while (whileCount1 < stringCount) 
    {
        // compares start of string and end of string
        if ((array [stringCount - whileCount1] ) == (array [stringCount - whileCount1] ))
            whileCount2++;
        
        whileCount1++;
    }
    
    // decides if string is palindrome
    if ((stringCount % 2) == 0)
    {
        if (whileCount2 == (stringCount / 2))
        {
            return true;
        }
    }
    else if (stringCount == 1)
    {
        return true;
    }
    else if ((stringCount % 2) != 0)
    {
        if (whileCount2 == (stringCount / 2) - 1)
        {
            return true;
        }
    }
    else
    {
        if (whileCount2 == (stringCount / 2) - 1)
        {
            return true;
        }
    }
    
    /*
    if ((stringCount % 2) == 0 && whileCount2 == (stringCount / 2)) 
    {
        cout << "entered if scope";
        return true;
    }
    else 
    {
        cout << "did not enter if scope";
    }
    
    if ((stringCount % 2) != 0 && whileCount2 == (stringCount / 2) - 1) 
    {
        cout << "entered if scope";
        return true;
    }
    else 
    {
        cout << "did not enter if scope";
    }
    
    return false;
}
*/
