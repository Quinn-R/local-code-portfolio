#include "../inc/common.hpp"
#include "../inc/saveLoadMap.hpp"

saveLoadMap::saveLoadMap()
{
    fileExists = 0;
}

void saveLoadMap::findFile(std::string fileLoc)
{
    std::ofstream myfile(fileLoc);
	if(myfile.is_open())
    {
        fileLocation = fileLoc;
        fileExists = 1;
    }
    else
    {
        fileExists = 0;
    }
}

void saveLoadMap::readFile()
{
	if(fileExists == 1)
    {
        
    }
}

void saveLoadMap::writeFile()
{
	
}
