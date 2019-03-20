#include "../SfmlEngine.hpp"

void SfmlEngine::draw() {
	clear();
	display();
}

void SfmlEngine::draw(sf::Color col, std::vector<sf::RectangleShape> &rects) {
	clear(col);
	drawEntity(rects);
	display();
}