#ifndef OBJECTS_HPP
#define OBJECTS_HPP

#include "common.hpp"

class object
{
    
public:
	
    sf::RectangleShape objectElem;
    
    std::string objectType;
    
    int objectIsCollide;
    int objectIsCollect;
    int objectIsActive;
    int objectIsDeleted;
    
    object();
    
    /*sf::Texture objectTexture;
    
    void setObjectSprite(std::string objSprite);*/
	
};

#endif
