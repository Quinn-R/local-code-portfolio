#ifndef MAPCREATOR_HPP
#define MAPCREATOR_HPP

#include "common.hpp"
#include "object.hpp"
#include "saveLoadMap.hpp"

class mapCreator : public saveLoadMap
{
public:
    
    std::vector <object> vecObject;
    
    int playerCount;
    int wallCount;
    
    mapCreator();
    
    void addObject(sf::Vector2f objSize, sf::Vector2f objPos, sf::Color objColor, int objIsCollide, int objIsCollect, int objIsActive, int objIsDeleted, std::string objType);
    void deleteObject(sf::Vector2f mousePos);
    void setGridPosition();
	
};

#endif
