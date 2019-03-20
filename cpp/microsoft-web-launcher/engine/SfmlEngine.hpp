#ifndef SFMLENGINE_HPP
#define SFMLENGINE_HPP

#include "../inc/common.hpp"

class SfmlEngine {
private:
	
	sf::Vector2i windowRes;
	sf::RenderWindow window;
	sf::View view;
	
	std::vector<int> moves; // left, right, up, down
	int isClicked;
	
	sf::Clock clock;
    sf::Time dt;
	float dtAsSeconds;
	
	int gameType;
	
	std::vector<sf::Font> fnt;
	std::vector<sf::Texture> tex;
	
public:
	
	SfmlEngine();
	
	bool isOpen();
	
	void defaultLoop();
	void defaultLoop(sf::Color col, std::vector<sf::RectangleShape> &rects);
	
	void events();
	void update();
	
	void clear();
	void clear(sf::Color col);
	void drawEntity(std::vector<sf::RectangleShape> &rects);
	void display();
	void draw();
	void draw(sf::Color col, std::vector<sf::RectangleShape> &rects);
	
	float getTime();
	
	std::vector<int>& getMoves();
	int getMouseClick();
	sf::Vector2i getMousePos();
	void setMouseClick(int i);
	
	void loadFont();
	void loadFont(std::string fntName);
	sf::Font getFont(int i);
	
	void loadTexture();
	void loadTexture(std::string texName);
	sf::Texture& getTexture(int i);
};

#endif
