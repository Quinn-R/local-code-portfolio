#ifndef MAINMENU_H
#define MAINMENU_H

#include "common.h"

class MainMenu
{
    private:
        
        sf::RenderWindow mainMenuWindow;
        
        sf::Event event;
        
        sf::RectangleShape rectangle1;
        sf::RectangleShape rectangle2;
        sf::RectangleShape rectangle3;
        sf::RectangleShape rectangle4;
        
        sf::View view1;
        sf::View view2;
        sf::View view3;
        
        sf::Vector2f rectPos1;
        sf::Vector2f rectPos2;
        sf::Vector2f rectPos3;
        sf::Vector2f rectPos4;
        sf::Vector2f rectSize1;
        sf::Vector2f rectSize2;
        sf::Vector2f rectSize3;
        sf::Vector2f rectSize4;
        sf::Vector2f newMousePos;
        sf::Vector2f rectSize;
        
        sf::Vector2i mousePosition;
        
        sf::Vector2u windowSize;
        
        int currentRect;
        
        float convertMouseXF;
        float convertMouseYF;
        
    public:
        
        MainMenu();
        
        void rectMousePos();
        void changeRectColour();
        void draw();
        void menuMethod();
        
};

#endif
