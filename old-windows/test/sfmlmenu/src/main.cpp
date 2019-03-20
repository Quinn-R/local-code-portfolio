#include "../inc/mainMenu.h"
#include "../inc/readFile.h"
#include "../inc/common.h"

//using namespace std;

int main()
{
    MainMenu mm;
    ReadFile rf;
    
    mm.menuMethod();
    
    rf.setFileName("resolution.txt");
    rf.fileExists();
    rf.getFileSize();
    
    return 0;
}
