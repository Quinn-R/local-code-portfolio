#ifndef GAMELOOP_HPP
#define GAMELOOP_HPP

#include "common.hpp"
#include "../inc/object.hpp"
#include "../inc/levelEdit.hpp"
#include "../inc/save.hpp"

class gameLoop : public object, public levelEdit, public save
{
private:
    
    sf::RenderWindow window;
    sf::Event event;
    
    std::vector <object> gameObjects;
    
    /*
    std::thread threadDraw;
    std::thread threadCollide;
    */
    
public:
    
    gameLoop();
    
    int loop();
    
    void draw();
    void events();
    void gravityLoop();
    
};

#endif
