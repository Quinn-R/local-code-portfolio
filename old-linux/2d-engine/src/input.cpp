#include "../inc/common.hpp"
#include "../inc/Engine.hpp"

void Engine::input()
{
	if(sf::Keyboard::isKeyPressed(sf::Keyboard::Escape))
    {
        window.close();
    }
    
    if(sf::Keyboard::isKeyPressed(sf::Keyboard::A))
    {
        objects[0].moveLeft();
    }
    else
    {
        objects[0].stopLeft();
    }
    
    if(sf::Keyboard::isKeyPressed(sf::Keyboard::D))
    {
        objects[0].moveRight();
    }
    else
    {
        objects[0].stopRight();
    }
}
