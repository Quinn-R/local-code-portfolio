#include "../inc/readFile.h"

ReadFile::ReadFile()
{
    iFileExists = 0;
    noOfWords = 0;
    wordNumber = 0;
    fileNameCounter = 0;
}

int ReadFile::setFileName(std::string name)
{
    for(int i = 0; i < name.length(); i++)
    {
        fileNameCounter ++;
    }
    
    if(name[fileNameCounter - 4] == '.' && name[fileNameCounter - 3] == 't' && name[fileNameCounter - 2] == 'x' && name[fileNameCounter - 1] == 't')
    {
        fileName = name;
    }
    else
    {
        std::cout << std::endl << "ERROR: File extention not supported '" << name[fileNameCounter - 4] << name[fileNameCounter - 3] << name[fileNameCounter - 2] << name[fileNameCounter - 1] << "'" << std::endl;
    }
}

int ReadFile::fileExists()
{
    //std::cout << fileName;
    
    inFile.open(fileName);
    
    for(int i = 0; i < 10; i++)
    {
        if(!inFile.is_open())
        {
            createFile();
            inFile.open(fileName);
            
            if(!inFile.is_open())
            {    
                std::cout << std::endl << "ERROR: Cannot read or create file '" << fileName << "'" << std::endl;
                
                iFileExists = 0;
                inFile.close();
                return iFileExists;
            }
        }
        else
        {
            iFileExists = 1;
            inFile.close();
            return iFileExists;
        }
    }
    
    inFile.close();
}

void ReadFile::createFile()
{
    outFile.open(fileName);
    
    outFile << "1280 720" << std::endl;
    outFile << "1920 1080" << std::endl;
    outFile << "2560 1440" << std::endl;
    outFile << std::endl << "This program accepts three resolutions." << std::endl << "You may edit these resolutions. The resolutions must be formatted with a space between the X and Y numbers followed by a space." << std::endl  << "if you mess up, just delete the file and the program will generate a new one." << std::endl;
    
    outFile.close();
}

void ReadFile::getFileSize()
{
    inFile.open(fileName);
    
    while(inFile >> content)
    {
        noOfWords ++;
    }
    
    inFile.close();
    
}

std::string ReadFile::getFileWord(int wantedWord)
{
    inFile.open(fileName);
    if(iFileExists == 1 && wantedWord < noOfWords)
    {
        for(int i = 0; i < wantedWord; i++)
        {
            inFile >> content;
        }
    }
    
    inFile.close();
    return content;
    inFile.close();
}
