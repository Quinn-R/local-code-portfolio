#include "../inc/common.hpp"
#include "../inc/Engine.hpp"

void Engine::draw()
{
    window.clear(sf::Color::White);
    
	for(unsigned int i = 0; i < objects.size(); i++)
    {
        window.draw(objects[i].getObjShape());
    }
    
    window.display();
}
