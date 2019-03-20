#ifndef READFILE_H
#define READFILE_H

#include "common.h"

class ReadFile
{
    private:
        
        std::ifstream inFile;
        std::ofstream outFile;
        
        std::string fileName;
        std::string content;
        
        int iFileExists;
        int noOfWords;
        int wordNumber;
        int fileNameCounter;
        
    public:
        
        ReadFile();
        
        int fileExists();
        int setFileName(std::string name);
        
        void createFile();
        void getFileSize();
        
        std::string getFileWord(int wantedWord);
        
};

#endif
