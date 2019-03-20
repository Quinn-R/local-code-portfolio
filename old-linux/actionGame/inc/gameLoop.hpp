#ifndef GAMELOOP_HPP
#define GAMELOOP_HPP

#include "common.hpp"
#include "object.hpp"
#include "mapCreator.hpp"

class gameLoop : public mapCreator
{
private:
    
    sf::RenderWindow window;
    sf::Event event;
    
    int isPaused = 0;
    
public:
    
    gameLoop();
    
    int loop();
    int move();
    int collision();
    
    void draw();
    void drawObjects();
    void events();
    
};

#endif
