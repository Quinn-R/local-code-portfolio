#include "../inc/common.hpp"
#include "../inc/object.hpp"

object::object()
{
    objectName = "";
    objectType = "";
    
    objectShape.setSize(sf::Vector2f(0, 0));
    objectBumperL.setSize(sf::Vector2f(0, 0));
    objectBumperR.setSize(sf::Vector2f(0, 0));
    objectBumperU.setSize(sf::Vector2f(0, 0));
    objectBumperD.setSize(sf::Vector2f(0, 0));
    
    isCollidable = 0;
    hasBumpers = 0;
    hasGravity = 0;
    isActive = 0;
    isDeleted = 0;
    
    objectSpeed = 0;
}

object::object(std::string objName, std::string objType, sf::Vector2f objShape, 
    sf::Vector2f objBumperL, sf::Vector2f objBumperR, sf::Vector2f objBumperU, 
    sf::Vector2f objBumperD, int hasBump, int isColl, int hasGrav, int isAct, 
    int isDel, int objSpeed)
{
    objectName = objName;
    objectType = objType;
    
    objectShape.setSize(objShape);
    objectBumperL.setSize(objBumperL);
    objectBumperR.setSize(objBumperR);
    objectBumperU.setSize(objBumperU);
    objectBumperD.setSize(objBumperD);
    
    objectSpeed = objSpeed;
    isCollidable = isColl;
    hasBumpers = hasBump;
    hasGravity = hasGrav;
    isActive = isAct;
    isDeleted = isDel;
    
    objectSpeed = objSpeed;
    
    setBumperSize();
    setBumperPosition();
}

void object::setBumperSize()
{
    objectBumperL.setSize(sf::Vector2f(1, objectShape.getSize().y));
    objectBumperR.setSize(sf::Vector2f(1, objectShape.getSize().y));
    objectBumperU.setSize(sf::Vector2f(objectShape.getSize().x, 1));
    objectBumperD.setSize(sf::Vector2f(objectShape.getSize().x, 1));
}

void object::setBumperPosition()
{
    objectBumperL.setPosition(sf::Vector2f(objectShape.getPosition().x - 1, objectShape.getPosition().y));
    objectBumperR.setPosition(sf::Vector2f(objectShape.getPosition().x + objectShape.getSize().x, objectShape.getPosition().y));
    objectBumperU.setPosition(sf::Vector2f(objectShape.getPosition().x, objectShape.getPosition().y - 1));
    objectBumperD.setPosition(sf::Vector2f(objectShape.getPosition().x, objectShape.getPosition().y + objectShape.getSize().y));
}

void object::move(std::string direction, std::vector<object> gameObjects)
{
    if(direction == "left")
    {
        for(int i = 0; i < objectSpeed; i++)
        {
            if(isCollidable == 1)
            {
                if(checkCollide("left", gameObjects) != 1)
                {
                    objectShape.move(-1, 0);
                }
            }
            if(hasBumpers == 1){setBumperPosition();}
        }
    }
    else if(direction == "right")
    {
        for(int i = 0; i < objectSpeed; i++)
        {
            if(isCollidable == 1)
            {
                if(checkCollide("right", gameObjects) != 1)
                {
                    objectShape.move(1, 0);
                }
            }
            if(hasBumpers == 1){setBumperPosition();}
        }
    }
    else if(direction == "up")
    {
        for(int i = 0; i < objectSpeed; i++)
        {
            if(isCollidable == 1)
            {
                if(checkCollide("up", gameObjects) != 1)
                {
                    objectShape.move(0, -1);
                }
            }
            if(hasBumpers == 1){setBumperPosition();}
        }
    }
    else if(direction == "down")
    {
        for(int i = 0; i < objectSpeed; i++)
        {
            if(isCollidable == 1)
            {
                if(checkCollide("down", gameObjects) != 1)
                {
                    objectShape.move(0, 1);
                }
            }
            if(hasBumpers == 1){setBumperPosition();}
        }
    }
    //if(hasBumpers == 1){setBumperPosition();}
}

void object::move(std::string direction, int speed, std::vector<object> gameObjects)
{
    if(direction == "left")
    {
        for(int i = 0; i < speed; i++)
        {
            if(isCollidable == 1)
            {
                if(checkCollide("left", gameObjects) != 1)
                {
                    objectShape.move(-1, 0);
                }
            }
            if(hasBumpers == 1){setBumperPosition();}
        }
    }
    else if(direction == "right")
    {
        for(int i = 0; i < speed; i++)
        {
            if(isCollidable == 1)
            {
                if(checkCollide("right", gameObjects) != 1)
                {
                    objectShape.move(1, 0);
                }
            }
            if(hasBumpers == 1){setBumperPosition();}
        }
    }
    else if(direction == "up")
    {
        for(int i = 0; i < speed; i++)
        {
            if(isCollidable == 1)
            {
                if(checkCollide("up", gameObjects) != 1)
                {
                    objectShape.move(0, -1);
                }
            }
            if(hasBumpers == 1){setBumperPosition();}
        }
    }
    else if(direction == "down")
    {
        for(int i = 0; i < speed; i++)
        {
            if(isCollidable == 1)
            {
                if(checkCollide("down", gameObjects) != 1)
                {
                    objectShape.move(0, 1);
                }
            }
            if(hasBumpers == 1){setBumperPosition();}
        }
    }
    //if(hasBumpers == 1){setBumperPosition();}
}

void object::gravity(std::vector<object> gameObjects)
{
    //(std::string direction, int speed, std::vector<object> gameObjects)
    move("down", objectSpeed, gameObjects);
}

void object::gravity(int speed, std::vector<object> gameObjects)
{
    //(std::string direction, int speed, std::vector<object> gameObjects)
    move("down", speed, gameObjects);
}

int object::checkCollide(std::string direction, std::vector<object> gameObjects)
{
    if(direction == "left")
    {
        for(unsigned int i = 0; i < gameObjects.size(); i++)
        {
            if(sf::FloatRect(objectBumperL.getPosition(), objectBumperL.getSize()).intersects(sf::FloatRect(gameObjects[i].objectShape.getPosition(), gameObjects[i].objectShape.getSize())))
            {
                return 1;
            }
        }
    }
    else if(direction == "right")
    {
        for(unsigned int i = 0; i < gameObjects.size(); i++)
        {
            if(sf::FloatRect(objectBumperR.getPosition(), objectBumperR.getSize()).intersects(sf::FloatRect(gameObjects[i].objectShape.getPosition(), gameObjects[i].objectShape.getSize())))
            {
                return 1;
            }
        }
    }
    else if(direction == "up")
    {
        for(unsigned int i = 0; i < gameObjects.size(); i++)
        {
            if(sf::FloatRect(objectBumperU.getPosition(), objectBumperU.getSize()).intersects(sf::FloatRect(gameObjects[i].objectShape.getPosition(), gameObjects[i].objectShape.getSize())))
            {
                return 1;
            }
        }
    }
    else if(direction == "down")
    {
        for(unsigned int i = 0; i < gameObjects.size(); i++)
        {
            if(sf::FloatRect(objectBumperD.getPosition(), objectBumperD.getSize()).intersects(sf::FloatRect(gameObjects[i].objectShape.getPosition(), gameObjects[i].objectShape.getSize())))
            {
                return 1;
            }
        }
    }
    
    return 0;
}
