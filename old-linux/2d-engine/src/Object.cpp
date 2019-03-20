#include "../inc/common.hpp"
#include "../inc/Object.hpp"

Object::Object()
{
    objPos = (sf::Vector2f(32, 32));
    
    objShape.setSize(sf::Vector2f(32, 32));
    objShape.setPosition(objPos);
    objShape.setFillColor(sf::Color::Black);
	
	isMovingLeft = 0;
	isMovingRight = 0;
	//isFalling;
    
    speed = 400;
}

sf::RectangleShape Object::getObjShape()
{
	return objShape;
}

void Object::setObjPos(sf::Vector2f pos)
{
    objPos = pos;
}

void Object::moveLeft()
{
	isMovingLeft = 1;
}

void Object::moveRight()
{
	isMovingRight = 1;
}

void Object::stopLeft()
{
	isMovingLeft = 0;
}

void Object::stopRight()
{
	isMovingRight = 0;
}

/*
void Object::collide(std::vector<Object> objects)
{
    if(isMovingLeft)
    {
        for(unsigned int i = 0; i < objects.size(); i++)
        {
            if(sf::FloatRect(
                objects[0].objShape.getPosition().x - 1, objects[0].objShape.getPosition().y,
                objects[0].objShape.getSize().x, objects[0].objShape.getSize().y
            ).intersects(sf::FloatRect(
                objects[i].objShape.getPosition().x - 1, objects[i].objShape.getPosition().y,
                objects[i].objShape.getSize().x, objects[i].objShape.getSize().y
            )))
            {
                isMovingLeft = 0;
            }
        }
    }
    if(isMovingRight)
    {
        for(unsigned int i = 0; i < objects.size(); i++)
        {
            if(sf::FloatRect(
                objects[0].objShape.getPosition().x + 1, objects[0].objShape.getPosition().y,
                objects[0].objShape.getSize().x, objects[0].objShape.getSize().y
            ).intersects(sf::FloatRect(
                objects[i].objShape.getPosition().x - 1, objects[i].objShape.getPosition().y,
                objects[i].objShape.getSize().x, objects[i].objShape.getSize().y
            )))
            {
                isMovingRight = 0;
            }
        }
    }
}
*/

void Object::update(float elapsedTime)
{
	if(isMovingLeft)
    {
        objPos.x -= speed * elapsedTime;
    }
    if(isMovingRight)
    {
        objPos.x += speed * elapsedTime;
    }
    
    objShape.setPosition(objPos);
}
