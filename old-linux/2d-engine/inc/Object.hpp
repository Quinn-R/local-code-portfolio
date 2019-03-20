#ifndef OBJECT_HPP
#define OBJECT_HPP

#include "common.hpp"

class Object
{
private:
    
    sf::Vector2f objPos;
    sf::RectangleShape objShape;
	
	int isMovingLeft;
	int isMovingRight;
	//int isFalling;
    
    int speed;
	
public:
	
	Object();
    
    sf::RectangleShape getObjShape();
    
    void setObjPos(sf::Vector2f pos);
    
    void moveLeft();
    void moveRight();
    
    void stopLeft();
    void stopRight();
    
    void collide(std::vector<Object> objects);
    
    void update(float elapsedTime);
};

#endif
