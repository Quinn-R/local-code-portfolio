#include "../inc/common.hpp"
#include "../inc/gameLoop.hpp"

gameLoop::gameLoop()
{
    window.create(sf::VideoMode(512, 512), "action game test");
    window.setFramerateLimit(60);
    
    addObject(sf::Vector2f(32, 32), sf::Vector2f(0, 0), sf::Color::Blue, 1, 0, 1, 0, "player1");
    
    loop();
}

int gameLoop::loop()
{
    while (window.isOpen())
    {
        events();
        draw();
    }

    return 0;
}

void gameLoop::draw()
{
    window.clear(sf::Color::White);
    drawObjects();
    /*window.draw(shape);*/
    window.display();
}

void gameLoop::drawObjects()
{
    for(unsigned int i = 0; i < vecObject.size(); i++)
    {
        if(vecObject[i].objectIsDeleted == 0)
        {
            window.draw(vecObject[i].objectElem);
        }
    }
}

void gameLoop::events()
{
    if(isPaused == 0)
    {
        if(sf::Mouse::isButtonPressed(sf::Mouse::Right))
        {
            if(sf::FloatRect(sf::Vector2f(window.getPosition()), sf::Vector2f(window.getSize())).contains(sf::Vector2f(sf::Mouse::getPosition())))
            {
                //std::cout << std::endl << "2";
                deleteObject(sf::Vector2f(sf::Mouse::getPosition(window)));
            }
        }
        if(sf::Mouse::isButtonPressed(sf::Mouse::Left))
        {
            if(sf::FloatRect(sf::Vector2f(window.getPosition()), sf::Vector2f(window.getSize())).contains(sf::Vector2f(sf::Mouse::getPosition())))
            {
                unsigned int a = 0;
                
                for(unsigned int i = 0; i < vecObject.size(); i++)
                {
                    //std::cout << std::endl << "3";
                    if(! (sf::FloatRect(vecObject[i].objectElem.getPosition(), vecObject[i].objectElem.getSize()).contains(sf::Vector2f(sf::Mouse::getPosition(window)))))
                    {
                        a++;
                    }
                    else if(sf::FloatRect(vecObject[i].objectElem.getPosition(), vecObject[i].objectElem.getSize()).contains(sf::Vector2f(sf::Mouse::getPosition(window))) && vecObject[i].objectIsDeleted == 1)
                    {
                        a++;
                    }
                }
                
                if(a == vecObject.size())
                {
                    std::cout << std::endl << "vecSize: " << vecObject.size();
                    //(sf::Vector2f objSize, sf::Vector2f objPos, sf::Color objColor, int objIsCollide, int objIsCollect, int objIsActive, int objIsDeleted, std::string objType)
                    addObject(sf::Vector2f(64, 64), sf::Vector2f(sf::Mouse::getPosition(window)), sf::Color::Green, 1, 0, 1, 0, "wall");
                }
            }
        }
    }
    
    while (window.pollEvent(event))
    {
        if (event.type == sf::Event::Closed)
        {
            window.close();
        }
        
        if (event.type == sf::Event::LostFocus)
            isPaused = 1;

        if (event.type == sf::Event::GainedFocus)
            isPaused = 0;
        
        /*if (event.type == sf::Event::MouseButtonPressed)
        {
            if (event.mouseButton.button == sf::Mouse::Left)
            {
                std::cout << std::endl << "1";
                addPlayer(sf::Vector2f(32, 32), sf::Vector2f(sf::Mouse::getPosition(window)), sf::Color::Blue, 1, 0, 1);
            }
        }*/
    }
}
