#include "../inc/object.hpp"

object::object()
{
    objectIsCollide = 0;
    objectIsCollect = 0;
    objectIsActive = 1;
    objectIsDeleted = 0;
}

/*void object::setObjectSprite(std::string objSprite)
{
    if(objSprite != "none")
    {
        if(! objectTexture.loadFromFile(objSprite))
        {
            std::cout << std::endl << "Player texture unsuccessful" << std::endl;
        }
        
        objectElem.setTexture(&objectTexture);
    }
}*/
