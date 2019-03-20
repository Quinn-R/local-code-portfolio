#include "../inc/common.hpp"
#include "../engine/SfmlEngine.hpp"
#include "../engine/Text.hpp"
#include "../engine/Object.hpp"

//initialise methods
void decisionMaker(sf::Vector2i pos);
void getTextures();
void setIcons();

// initialise sfml class
SfmlEngine eng;

// initialise vectors
std::vector<Object> obj;
std::vector<sf::RectangleShape> shp;
std::vector<std::thread> thr;

// main method
int main() {
	// call init methods
	getTextures();
	setIcons();
	
	
	// app loop
	while(eng.isOpen()) {
		eng.events();
		eng.update();
		
		if(eng.getMouseClick() == 1) {
			//std::system("firefox -new-window www.google.com");
			thr.push_back(std::thread(decisionMaker, eng.getMousePos()));
			eng.setMouseClick(0);
		}

		eng.clear(sf::Color::White);
		eng.drawEntity(shp);
		eng.display();
	}
	
	// close the program
	return 0;
}

// get all required textures
void getTextures() {
	eng.loadTexture("../tex/Microsoft-OneDrive-icon.png");
	eng.loadTexture("../tex/Microsoft-Outlook-icon.png");
	eng.loadTexture("../tex/Microsoft-Word-icon.png");
	eng.loadTexture("../tex/Microsoft-PowerPoint-icon.png");
	eng.loadTexture("../tex/Microsoft-Excel-icon.png");
	eng.loadTexture("../tex/Microsoft-OneNote-icon.png");
}

// add items to obj
void setIcons() {
	// Object(std::string objType, sf::Vector2f objSize, sf::Vector2f objPos, sf::Color col, bool isColl);
	obj.push_back(Object("Microsoft-OneDrive-icon", sf::Vector2f(64, 64), sf::Vector2f(64, 64), sf::Color::White, 0));
	obj[0].setTexture(eng.getTexture(0));
	shp.push_back(obj[0].getShape());
	
	obj.push_back(Object("Microsoft-Outlook-icon", sf::Vector2f(64, 64), sf::Vector2f(192, 64), sf::Color::White, 0));
	obj[1].setTexture(eng.getTexture(1));
	shp.push_back(obj[1].getShape());
	
	obj.push_back(Object("Microsoft-Word-icon", sf::Vector2f(64, 64), sf::Vector2f(320, 64), sf::Color::White, 0));
	obj[2].setTexture(eng.getTexture(2));
	shp.push_back(obj[2].getShape());
	
	obj.push_back(Object("Microsoft-PowerPoint-icon", sf::Vector2f(64, 64), sf::Vector2f(64, 192), sf::Color::White, 0));
	obj[3].setTexture(eng.getTexture(3));
	shp.push_back(obj[3].getShape());
	
	obj.push_back(Object("Microsoft-Excel-icon", sf::Vector2f(64, 64), sf::Vector2f(192, 192), sf::Color::White, 0));
	obj[4].setTexture(eng.getTexture(4));
	shp.push_back(obj[4].getShape());
	
	obj.push_back(Object("Microsoft-OneNote-icon", sf::Vector2f(64, 64), sf::Vector2f(320, 192), sf::Color::White, 0));
	obj[5].setTexture(eng.getTexture(5));
	shp.push_back(obj[5].getShape());
	
	
	/*sf::FloatRect pos = shp[0].getGlobalBounds();
	std::cout << pos.left << std::endl << pos.top << std::endl << pos.width << std::endl << pos.height << std::endl;*/
}

// decides what program to open
void decisionMaker(sf::Vector2i pos) {
	if(sf::FloatRect(obj[0].getShape().getGlobalBounds()).contains(sf::Vector2f(pos))) {
		std::system("firefox -new-window onedrive.live.com");
	}
	
	if(sf::FloatRect(obj[1].getShape().getGlobalBounds()).contains(sf::Vector2f(pos))) {
		std::system("firefox -new-window outlook.live.com");
	}
	
	if(sf::FloatRect(obj[2].getShape().getGlobalBounds()).contains(sf::Vector2f(pos))) {
		std::system("firefox -new-window office.live.com/start/Word.aspx?auth=1&nf=1");
	}
	
	if(sf::FloatRect(obj[3].getShape().getGlobalBounds()).contains(sf::Vector2f(pos))) {
		std::system("firefox -new-window office.live.com/start/PowerPoint.aspx?auth=1&nf=1");
	}
	
	if(sf::FloatRect(obj[4].getShape().getGlobalBounds()).contains(sf::Vector2f(pos))) {
		std::system("firefox -new-window office.live.com/start/Excel.aspx?auth=1&nf=1");
	}
	
	if(sf::FloatRect(obj[5].getShape().getGlobalBounds()).contains(sf::Vector2f(pos))) {
		std::system("firefox -new-window onenote.com");
	}
	//std::cout << pos.x << std::endl << pos.y << std::endl;
}