#ifndef OBJECT_HPP
#define OBJECT_HPP

#include "common.hpp"

class object
{
private:
	
	
	
public:
    
    std::string objectName;
    std::string objectType;
    
    sf::RectangleShape objectShape;
    sf::RectangleShape objectBumperL;
    sf::RectangleShape objectBumperR;
    sf::RectangleShape objectBumperU;
    sf::RectangleShape objectBumperD;
    
    int isCollidable;
    int hasBumpers;
    int hasGravity;
    int isActive;
    int isDeleted;
    
    int objectSpeed;
	
    object();
	object(std::string objName, std::string objType, sf::Vector2f objShape, 
        sf::Vector2f objBumperL, sf::Vector2f objBumperR, sf::Vector2f objBumperU, 
        sf::Vector2f objBumperD, int hasBump, int isColl, int hasGrav, int isAct, 
        int isDel, int objSpeed);
    
    void setBumperSize();
    void setBumperPosition();
    void move(std::string direction, std::vector<object> gameObjects);
    void move(std::string direction, int speed, std::vector<object> gameObjects);
    void gravity(std::vector<object> gameObjects);
    void gravity(int speed, std::vector<object> gameObjects);
    void jump(std::vector<object> gameObjects);
    
    
    int checkCollide(std::string direction, std::vector<object> gameObjects);
	
};

#endif
