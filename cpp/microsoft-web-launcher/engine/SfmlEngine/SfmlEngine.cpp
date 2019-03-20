#include "../SfmlEngine.hpp"

SfmlEngine::SfmlEngine() {
	/*windowRes.x = sf::VideoMode::getDesktopMode().width;
	windowRes.y = sf::VideoMode::getDesktopMode().height;*/
	
	windowRes.x = 64 * 6;
	windowRes.y = 64 * 4;
	
	window.create(sf::VideoMode(windowRes.x, windowRes.y), "");
	window.setPosition(sf::Vector2i((sf::VideoMode::getDesktopMode().width / 2 - window.getSize().x / 2), (sf::VideoMode::getDesktopMode().height / 2 - window.getSize().y / 2)));
	//view.reset(sf::FloatRect(-100, -100, (windowRes.x - 16) /*/ 6*/, (windowRes.y - 16) /*/ 6*/));
	//window.setView(view);
	
	for(int i = 0; i < 4; i++) {
		moves.push_back(0);
	}
	
	gameType = 0;
	isClicked = 0;
}