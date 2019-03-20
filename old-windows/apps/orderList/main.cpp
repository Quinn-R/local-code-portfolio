#include <iostream>
#include <fstream>
#include <array>
#include <string>

using namespace std;

void space();
void intro();
void again();
void enterContinue();

bool isRunning = true;

class ReadWriteFile
{


    public:
    string input;
    string input2;
    string file;
    string tmp;

    int numberOfWords = 0;
    int counter = 0;

    void fileName()
    {
        cout << "  Enter the file name: ";

        cin >> input;

        file = input + ".txt";

        space();
        fileLength();
    }

    void fileLength()
    {
        ifstream fileStream (file/*.c_str()*/);

        if (fileStream)
        {
            while (fileStream >> tmp)
                numberOfWords++;

            fileInput();
        }
        else
        {
            //space();
            cout << "  Wrong Input" << endl << endl;
            fileName();
        }

        fileStream.close();
    }

    void fileInput()
    {
        string arr1 [numberOfWords];

        ifstream fileStream (file/*.c_str()*/);

        for (int i = 0; i < numberOfWords; i++)
        {
            fileStream >> arr1 [i];
        }

        fileStream.close();
        orderInput(arr1);
    }

    void orderInput(string *arr1)
    {
        string arr2[numberOfWords];
        int a = 0;

        cout << "  Enter a search key phrase: ";

        cin >> input2;

        space();

        for (int i = 0; i < numberOfWords; i++)
        {
            tmp = arr1[i];

            if (tmp.find(input2) != string::npos)
            {
                arr2[a] = tmp;
                cout << "  " << tmp << endl;
                a++;
            }
        }

        space();
        writeFile (arr2);
    }

    void writeFile (string *arr2)
    {
        ofstream fileStream ("output.txt");

        for (int i = 0; i < numberOfWords; i++)
        {
            fileStream << arr2[i] << endl;
        }

        fileStream.close();

        cout <<
        "  The results on the command-line may not be complete" << endl <<
        "  The results are located in the output text file named 'output'" << endl;
    }
};

ReadWriteFile  rwf;

int main ()
{
    intro();

    while (isRunning == true)
    {
        rwf.numberOfWords = 0;
        rwf.counter = 0;

        rwf.fileName();
        again();
    }

    return 0;
}

void space()
{
    string enters = "\n\n\n\n\n\n\n\n\n\n";
    string rule =
    "  --------------------\n       ----------";

    cout << endl << rule  << enters;
}

void enterContinue()
{
    cout << endl << endl << "  Hit [enter] to continue" << flush;

    cin.ignore(1024, '\n');
}

void intro()
{
    cout <<
    " ########## ###### ##    ## ##########"<< endl <<
    "     ##     ##      ##  ##      ##"<< endl <<
    "     ##     ##       ####       ##"<< endl <<
    "     ##     ######   ####       ##"<< endl <<
    "     ##     ##      ##  ##      ##"<< endl <<
    "     ##     ###### ##    ##     ##"<< endl <<
    " "<< endl <<
    "  ##### ######   ####    #####  ##### ##   ##"<< endl <<
    " ##     ##      ##  ##  ##     ##     ##   ##"<< endl <<
    "  ####  ##      ######  ##     ##     ##   ##"<< endl <<
    "     ## ###### ##    ## ##     ##     #######"<< endl <<
    "     ## ##     ##    ## ##     ##     ##   ##"<< endl <<
    " #####  ###### ##    ## ##      ##### ##   ##"<< endl <<
    " "<< endl <<
    " ##########  #####   #####  ##"<< endl <<
    "     ##     ##   ## ##   ## ##"<< endl <<
    "     ##     ##   ## ##   ## ##"<< endl <<
    "     ##     ##   ## ##   ## ##"<< endl <<
    "     ##     ##   ## ##   ## ##"<< endl <<
    "     ##      #####   #####  ######"<< endl << endl;

    cout <<
    "  This is a tool that can extract any word" << endl <<
    "  from a text file containing your desired" << endl <<
    "  phrase or string.";

    enterContinue();
    space();
}

void again()
{
    string input3;

    cout << endl << endl <<
    "  Do you want to run this program again? (y/n): ";

    cin >> input3;

    space();

    if (input3 == "y" || input3 == "Y" || input3 == "yes" || input3 == "Yes" || input3 == "YES")
    {

    }
    else if (input3 == "n" || input3 == "N" || input3 == "no" || input3 == "No" || input3 == "NO")
    {
            isRunning = false;
    }
    else
    {
        cout << "  Wrong input" << endl << endl;
        again();
    }
}
