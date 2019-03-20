#include "../inc/mainMenu.h"

MainMenu::MainMenu()
{
    currentRect = 1;
    
    convertMouseXF = 0;
    convertMouseYF = 0;
}

void MainMenu::rectMousePos()
{
    rectPos1 = rectangle1.getPosition();
    rectPos2 = rectangle2.getPosition();
    rectPos3 = rectangle3.getPosition();
    rectPos4 = rectangle4.getPosition();
    
    rectSize1 = rectangle1.getSize();
    rectSize2 = rectangle2.getSize();
    rectSize3 = rectangle3.getSize();
    rectSize4 = rectangle4.getSize();
    
    windowSize = mainMenuWindow.getSize();
    
    rectangle1.setPosition((windowSize.x / 2 - (rectSize1.x / 2)), 100);
    rectangle2.setPosition((windowSize.x / 2 - (rectSize2.x / 2)), rectPos1.y + rectSize1.y + 20);
    rectangle3.setPosition((windowSize.x / 2 - (rectSize3.x / 2)), rectPos2.y + rectSize2.y + 20);
    rectangle4.setPosition((windowSize.x / 2 - (rectSize4.x / 2)), rectPos3.y + rectSize3.y + 20);
    
    mousePosition = sf::Mouse::getPosition(mainMenuWindow);
    
    convertMouseXF = mousePosition.x;
    convertMouseYF = mousePosition.y;
    
    newMousePos.x = convertMouseXF;
    newMousePos.y = convertMouseYF;
    
    //std::cout << std::endl << currentRect << std::endl;
}

void MainMenu::changeRectColour()
{
    if(currentRect == 1)
    {
        rectangle1.setFillColor(sf::Color::Red);
        rectangle2.setFillColor(sf::Color::Green);
        rectangle3.setFillColor(sf::Color::Green);
        rectangle4.setFillColor(sf::Color::Green);
    }
    else if(currentRect == 2)
    {
        rectangle1.setFillColor(sf::Color::Green);
        rectangle2.setFillColor(sf::Color::Red);
        rectangle3.setFillColor(sf::Color::Green);
        rectangle4.setFillColor(sf::Color::Green);
    }
    else if(currentRect == 3)
    {
        rectangle1.setFillColor(sf::Color::Green);
        rectangle2.setFillColor(sf::Color::Green);
        rectangle3.setFillColor(sf::Color::Red);
        rectangle4.setFillColor(sf::Color::Green);
    }
    else if(currentRect == 4)
    {
        rectangle1.setFillColor(sf::Color::Green);
        rectangle2.setFillColor(sf::Color::Green);
        rectangle3.setFillColor(sf::Color::Green);
        rectangle4.setFillColor(sf::Color::Red);
    }
}

void MainMenu::draw()
{
    mainMenuWindow.clear();
    mainMenuWindow.draw(rectangle1);
    mainMenuWindow.draw(rectangle2);
    mainMenuWindow.draw(rectangle3);
    mainMenuWindow.draw(rectangle4);
    mainMenuWindow.display();
}

void MainMenu::menuMethod()
{
    mainMenuWindow.create(sf::VideoMode(800, 800), "SFML works!", sf::Style::Titlebar | sf::Style::Close);
    
    rectangle1.setSize(sf::Vector2f(250, 75));
    rectangle2.setSize(sf::Vector2f(250, 75));
    rectangle3.setSize(sf::Vector2f(250, 75));
    rectangle4.setSize(sf::Vector2f(200, 75));
    
    while(mainMenuWindow.isOpen())
    {
        while(mainMenuWindow.pollEvent(event))
        {
            if(event.type == sf::Event::Closed)
                mainMenuWindow.close();
            else if((newMousePos.x > rectPos1.x && newMousePos.x < (rectPos1.x + rectSize1.x)) && (newMousePos.y > rectPos1.y && newMousePos.y < (rectPos1.y + rectSize1.y)))
            {
                currentRect = 1;
            }
            else if((newMousePos.x > rectPos2.x && newMousePos.x < (rectPos2.x + rectSize2.x)) && (newMousePos.y > rectPos2.y && newMousePos.y < (rectPos2.y + rectSize2.y)))
            {
                currentRect = 2;
            }
            else if((newMousePos.x > rectPos3.x && newMousePos.x < (rectPos3.x + rectSize3.x)) && (newMousePos.y > rectPos3.y && newMousePos.y < (rectPos3.y + rectSize3.y)))
            {
                currentRect = 3;
            }
            else if((newMousePos.x > rectPos4.x && newMousePos.x < (rectPos4.x + rectSize4.x)) && (newMousePos.y > rectPos4.y && newMousePos.y < (rectPos4.y + rectSize4.y)))
            {
                currentRect = 4;
            }
            else if(sf::Keyboard::isKeyPressed(sf::Keyboard::Down))
            {
                if(currentRect == 4)
                {
                    currentRect = 1;
                }
                else
                {
                    currentRect ++;
                }
            }
            else if(sf::Keyboard::isKeyPressed(sf::Keyboard::Up))
            {
                if(currentRect == 1)
                {
                    currentRect = 4;
                }
                else
                {
                    currentRect --;
                }
            }
            
            /*
            if((currentRect == 4 && sf::Keyboard::isKeyPressed(sf::Keyboard::Return)) || (currentRect == 4 && sf::Mouse::isButtonPressed(sf::Mouse::Left)))
            {
                if()
                {
                    mainMenuWindow.setSize(sf::Vector2u(500, 500));
                }
            }
            */
            
            /*
            if(event.type == sf::Event::Resized)
            {
                mainMenuWindow.setView(sf::View(sf::FloatRect(0, 0, event.size.width, event.size.height)));
                
                std::cout << std::endl << "sizeChanged" << std::endl;
            }
            */
        }
        
        rectMousePos();
        changeRectColour();
        draw();
        
    }
}
