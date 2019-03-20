#include "../inc/common.hpp"
#include "../inc/mapCreator.hpp"

mapCreator::mapCreator()
{
    playerCount = 0;
    wallCount = 0;
}

void mapCreator::addObject(sf::Vector2f objSize, sf::Vector2f objPos, sf::Color objColor, int objIsCollide, int objIsCollect, int objIsActive, int objIsDeleted, std::string objType)
{    
    vecObject.push_back(object());
    
    vecObject[playerCount].objectElem.setSize(objSize);
    vecObject[playerCount].objectElem.setPosition(objPos);
    vecObject[playerCount].objectElem.setFillColor(objColor);
    vecObject[playerCount].objectIsCollide = objIsCollide;
    vecObject[playerCount].objectIsCollect = objIsCollect;
    vecObject[playerCount].objectIsActive = objIsActive;
    vecObject[playerCount].objectIsDeleted = objIsDeleted;
    setGridPosition();
    
    playerCount++;
}

void mapCreator::deleteObject(sf::Vector2f mousePos)
{
    for(unsigned int i = 0; i < vecObject.size(); i++)
    {
        if(sf::FloatRect(vecObject[i].objectElem.getPosition(), vecObject[i].objectElem.getSize()).contains(mousePos))
        {
            vecObject[i].objectIsDeleted = 1;
        }
    }
}

void mapCreator::setGridPosition()
{
    int posX = vecObject[playerCount].objectElem.getPosition().x, sizeX = vecObject[playerCount].objectElem.getSize().x;
    int posY = vecObject[playerCount].objectElem.getPosition().y, sizeY = vecObject[playerCount].objectElem.getSize().y;
    int i = 0;
    
    while(i != 1)
    {
        if((posX % sizeX) != 0)
        {
            posX--;
            //std::cout << std::endl << objPos.x;
        }
        else
        {
            i = 1;
        }
    }
    
    i = 0;
    
    while(i != 1)
    {
        if((posY % sizeY) != 0)
        {
            posY--;
            //std::cout << std::endl << objPos.y;
        }
        else
        {
            i = 1;
        }
    }
    
    vecObject[playerCount].objectElem.setPosition(sf::Vector2f(posX, posY));
}
