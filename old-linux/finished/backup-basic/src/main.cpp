#include "../inc/common.h"

class ManipulateFile
{
private:
    
    std::string fileName, tmp, strCommand;
    std::ifstream fileIn;
    std::ofstream fileOut;
    std::vector<std::string> pathVect;
    std::vector<std::string> commVect;
    int pathCount = 0, intCommand = 0;
    
public:
    
    ManipulateFile();
    int setFileName(std::string fileN);
    void fillCommVect();
    void fillPathVect();
    int getPathVectSize();
    std::string constructCommand(int commLine, int fileLines);
    
};

ManipulateFile::ManipulateFile()
{
    //commVect.reserve(10);
}

int ManipulateFile::setFileName(std::string fileN)
{
    fileIn.open(fileN);
    if(fileIn.is_open())
    {
        fileName = fileN;
        
        fileIn.close();
        return 1;
    }
    
    fileIn.close();
    return 0;
}

void ManipulateFile::fillCommVect()
{
    commVect.push_back("cd /");
    commVect.push_back("cd ");
    commVect.push_back("cp ");
    commVect.push_back("-r ");
    commVect.push_back("rm ");
    commVect.push_back("mkdir ");
    commVect.push_back("sudo ");
    commVect.push_back("/");
}

void ManipulateFile::fillPathVect()
{
    fileIn.open(fileName);
    while(fileIn >> tmp)
    {
        pathVect.push_back(tmp);
        //std::cout << pathVect[pathCount];
        pathCount ++;
    }
    fileIn.close();
}

int ManipulateFile::getPathVectSize()
{
    return pathCount;
}

std::string ManipulateFile::constructCommand(int commLine, int fileLines)
{
    if(commLine == 0)
    {
        strCommand = commVect[0];
    }
    else if(commLine == 2)
    {
        strCommand = commVect[commLine] + pathVect[fileLines] + " " + pathVect[0];
    }
    else if(commLine == 3)
    {
        strCommand = commVect[commLine - 1] + commVect[commLine] + pathVect[fileLines] + " " + pathVect[0];
    }
    return strCommand;
}

ManipulateFile mf;

int main()
{
    std::string fileName, isFolder, tmp;
    int fileExists = 0, fileLines = 1, fileEnd = 0;
    std::vector<std::string> dircVect;
    
    while(fileExists == 0)
    {
        /*std::cout << "Files or Folders? (fi/fo): ";
        std::cin >> isFolder;
        
        for(int i = 0; i < 50; i++)
        {
            std::cout << std::endl
        }*/
        
        std::cout << "Input the name of the text document that holds the directory(s) of the files you want to back up: ";
        std::cin >> fileName;
        
        for(int i = 0; i < 50; i++)
        {
            std::cout << std::endl;
        }
        
        fileExists = mf.setFileName(fileName);
    }
    
    mf.fillCommVect();
    mf.fillPathVect();
    
    while(fileEnd == 0)
    {
        tmp = mf.constructCommand(0, fileLines);
        std::cout << tmp << std::endl;
        std::system(tmp.c_str());
        
        /*if(isFolder == "fi")
        {
            tmp = mf.constructCommand(2, fileLines);
            std::cout << tmp << std::endl;
            std::system(tmp.c_str());
        }
        else if(isFolder == "fo")
        {
            tmp = mf.constructCommand(3, fileLines);
            std::cout << tmp << std::endl;
            std::system(tmp.c_str());
        }
        else
        {
            std::cout << "Incorrect Input (fi/fo)" << std::endl;
        }*/
        
        tmp = mf.constructCommand(3, fileLines);
        std::cout << tmp << std::endl;
        std::system(tmp.c_str());
        
        fileLines ++;
        
        //std::cout << mf.getPathVectSize() << std::endl;
        
        if(mf.getPathVectSize() == fileLines)
        {
            fileEnd = 1;
        }
    }
    return 0;
}
