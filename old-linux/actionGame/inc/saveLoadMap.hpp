#ifndef HEADERFILE_HPP
#define HEADERFILE_HPP

#include "common.hpp"

class saveLoadMap
{
private:
	
	std::string fileLocation;
    
    int fileExists;
	
public:
	
    saveLoadMap();
    
    void findFile(std::string fileLoc);
    void readFile();
    void writeFile();
	
};

#endif
