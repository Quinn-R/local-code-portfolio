#include "../inc/common.hpp"
#include "../inc/gameLoop.hpp"

gameLoop::gameLoop()
{
    window.create(sf::VideoMode(512, 512), "action game test");
    window.setFramerateLimit(60);
    
    /*
    object::object(std::string objName, std::string objType, sf::Vector2f objShape, 
        sf::Vector2f objBumperL, sf::Vector2f objBumperR, sf::Vector2f objBumperU, 
        sf::Vector2f objBumperD, int hasBump, int isColl, int hasGrav, int isAct, 
        int isDel, int objSpeed, int objMass)
    */
    
    gameObjects.push_back(object("player1", "player", sf::Vector2f(32, 32), sf::Vector2f(32, 32), sf::Vector2f(32, 32), sf::Vector2f(32, 32), sf::Vector2f(32, 32), 1, 1, 1, 1, 0, 4));
    gameObjects[0].objectShape.setFillColor(sf::Color::Black);
    gameObjects[0].objectShape.setPosition(sf::Vector2f(64, 0));
    gameObjects[0].objectBumperL.setFillColor(sf::Color::Green);
    gameObjects[0].objectBumperR.setFillColor(sf::Color::Green);
    gameObjects[0].objectBumperU.setFillColor(sf::Color::Green);
    gameObjects[0].objectBumperD.setFillColor(sf::Color::Green);
    
    gameObjects.push_back(object("wall1", "wall", sf::Vector2f(32, 32), sf::Vector2f(32, 32), sf::Vector2f(32, 32), sf::Vector2f(32, 32), sf::Vector2f(32, 32), 0, 1, 0, 1, 0, 0));
    gameObjects[1].objectShape.setFillColor(sf::Color::Black);
    gameObjects[1].objectShape.setPosition(sf::Vector2f(64, 400));
    gameObjects[1].objectBumperL.setFillColor(sf::Color::Green);
    gameObjects[1].objectBumperR.setFillColor(sf::Color::Green);
    gameObjects[1].objectBumperU.setFillColor(sf::Color::Green);
    gameObjects[1].objectBumperD.setFillColor(sf::Color::Green);
    
    loop();
}

int gameLoop::loop()
{
    while (window.isOpen())
    {
        gravityLoop();
        events();
        draw();
    }

    return 0;
}

void gameLoop::draw()
{
    window.clear(sf::Color::White);
    
    
    for(unsigned int i = 0; i < gameObjects.size(); i++)
    {
        if(gameObjects[i].isDeleted == 0)
        {
            window.draw(gameObjects[i].objectShape);
            
            if(gameObjects[i].hasBumpers == 1)
            {
                window.draw(gameObjects[i].objectBumperL);
                window.draw(gameObjects[i].objectBumperR);
                window.draw(gameObjects[i].objectBumperU);
                window.draw(gameObjects[i].objectBumperD);
            }
        }
    }
    
    
    /*window.draw(shape);*/
    window.display();
}

void gameLoop::events()
{
    /*
    if(sf::Mouse::isButtonPressed(sf::Mouse::Left))
    {
        
    }
    */
    
    if(sf::Keyboard::isKeyPressed(sf::Keyboard::Left))
    {
        gameObjects[0].move("left", gameObjects);
    }
    
    if(sf::Keyboard::isKeyPressed(sf::Keyboard::Right))
    {
        gameObjects[0].move("right", gameObjects);
    }
    
    if(sf::Keyboard::isKeyPressed(sf::Keyboard::Space))
    {
        sf::Vector2f res;
        res.x = sf::VideoMode::getDesktopMode().width;
        res.y = sf::VideoMode::getDesktopMode().height;
        
        window.setSize(sf::Vector2u(res.x, res.y));
    }
    
    /*
    if(sf::Keyboard::isKeyPressed(sf::Keyboard::Up))
    {
        gameObjects[0].move("up", gameObjects);
    }
    
    if(sf::Keyboard::isKeyPressed(sf::Keyboard::Down))
    {
        gameObjects[0].move("down", gameObjects);
    }
    */
    
    while (window.pollEvent(event))
    {
        if (event.type == sf::Event::Closed)
        {
            window.close();
        }
        
        /*
        if (event.type == sf::Event::LostFocus)
            isPaused = 1;

        if (event.type == sf::Event::GainedFocus)
            isPaused = 0;
        */
    }
}

void gameLoop::gravityLoop()
{
    for(unsigned int i = 0; i < gameObjects.size(); i++)
    {
        if(gameObjects[i].hasGravity == 1)
        {
            //(int objectGravity, std::vector<object> gameObjects)
            gameObjects[i].gravity(gameObjects);
        }
    }
}
