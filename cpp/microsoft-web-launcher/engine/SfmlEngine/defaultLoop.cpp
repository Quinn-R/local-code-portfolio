#include "../SfmlEngine.hpp"

void SfmlEngine::defaultLoop() {
	events();
	update();
	draw();
}

void SfmlEngine::defaultLoop(sf::Color col, std::vector<sf::RectangleShape> &rects) {
	events();
	update();
	draw(col, rects);
}