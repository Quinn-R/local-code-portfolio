#include "inc/common.h"

int main()
{
    sf::RenderWindow window;
    sf::Event event;
    
    sf::CircleShape circle1;
    sf::CircleShape circle2;
    sf::CircleShape circle3;
    sf::CircleShape circle4;
    
    sf::FloatRect circle4Box;
    
    sf::Vector2i mousePosI;
    sf::Vector2f mousePosF;
    
    window.create(sf::VideoMode(680, 680), "SFML works!"/*, sf::Style::None*/);
    window.setFramerateLimit(60);
    
    circle1.setRadius(300);
    circle1.setPosition(sf::Vector2f(40, 40));
    circle1.setFillColor(sf::Color::Black);
    
    circle2.setRadius(250);
    circle2.setPosition(circle1.getPosition().x + (circle1.getRadius()) - circle2.getRadius(), circle1.getPosition().y + (circle1.getRadius()) - circle2.getRadius());
    circle2.setFillColor(sf::Color::Green);
    
    circle3.setRadius(200);
    circle3.setPosition(circle2.getPosition().x + (circle2.getRadius()) - circle3.getRadius(), circle2.getPosition().y + (circle2.getRadius()) - circle3.getRadius());
    circle3.setFillColor(sf::Color::Yellow);
    
    circle4.setRadius(25);
    circle4.setPosition(circle2.getPosition().x + (circle2.getRadius()) - circle4.getRadius(), circle2.getPosition().y);
    circle4.setFillColor(sf::Color::Blue);
    
    //line1.setSize(sf::Vector2f(5, 300));
    //line1.setPosition(sf::Vector2f(circle1.getPosition().x + circle1.getRadius() - (line1.getSize().x / 2), circle1.getPosition().x + circle1.getRadius()));
    //line1.rotate(180);
    //line1.setFillColor(sf::Color::Green);
    
    //line1Box = line1.getGlobalBounds();
    //line1Box.setPosition(line1.getPosition());
    //line1Box.rotate(180);
    
    while (window.isOpen())
    {
        mousePosI = sf::Mouse::getPosition(window);
        mousePosF = sf::Vector2f(mousePosI);
        circle4Box = circle4.getGlobalBounds();
        
        if (sf::Mouse::isButtonPressed(sf::Mouse::Left))
        {
            if((circle4Box.contains(mousePosF)))
            {
                circle4.setPosition(mousePosF.x - (circle4.getRadius()), mousePosF.y - (circle4.getRadius()));
            }
        }
        
        while (window.pollEvent(event))
        {
            if (event.type == sf::Event::Closed)
                window.close();
        }
        window.clear(sf::Color::White);
        window.draw(circle1);
        window.draw(circle2);
        window.draw(circle3);
        window.draw(circle4);
        window.display();
    }
	
	return 0;
}
