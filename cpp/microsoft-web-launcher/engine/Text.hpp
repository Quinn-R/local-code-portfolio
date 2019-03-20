#ifndef TEXT_HPP
#define TEXT_HPP

#include "../inc/common.hpp"

class Text {
private:
	
	std::string textType;
	sf::Text textObject;
	
	//sf::Vector2f objectPos;
	
public:
	
	Text();
	Text(std::string txtType, sf::Vector2f txtSize, sf::Vector2f txtPos, sf::Color col);
	
	void setPosition(sf::Vector2f objPos);
	sf::Vector2f getPosition();
	
	void setSize(int objSize);
	int getSize();
	
	sf::Text getObject();
	
	void setText(std::string txt);
	std::string getText();
	
	void setFont(sf::Font fnt);
	sf::Font getFont();
	
	void setColor(sf::Color col);
	sf::Color getColor();
};

#endif
