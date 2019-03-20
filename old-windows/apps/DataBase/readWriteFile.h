#ifndef READWRITEFILE_H_INCLUDED
#define READWRITEFILE_H_INCLUDED

#include "common.h"
#include "util.h"

void start();

class ReadWriteFile
{
    public:
    string input;
    string input2;
    string file;
    string tmp;

    int numberOfWords = 0;
    int counter = 0;

    void fileName(string *arr1, string choice)
    {
        cout << "Enter the file name: ";

        cin >> input;

        file = input + ".txt";

        space();

        if (choice == "save")
        {
          fileOutput();
        }
        else
        {
          fileLength();
        }
    }

    void fileLength()
    {
        ifstream fileStream (file/*.c_str()*/);

        if (fileStream)
        {
            while (fileStream >> tmp)
                numberOfWords++;

            /*fileInput();*/
        }
        else
        {
            //space();
            cout << "Wrong Input" << endl << endl;
            fileName();
        }

        fileStream.close();
    }

    void fileInput()
    {
        string *arr1 = new string [numberOfWords];

        ifstream fileStream (file/*.c_str()*/);

        for (int i = 0; i < numberOfWords; i++)
        {
            fileStream >> arr1 [i];
        }

        fileStream.close();
    }

    void fileOutput()
    {

    }
};

ReadWriteFile  rwf;

start(string *arr1, string choice)
{
    rwf.fileName();

    rwf.fileInput();
}

#endif // READWRITEFILE_H_INCLUDED
