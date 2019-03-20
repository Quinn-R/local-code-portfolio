#include "../SfmlEngine.hpp"

void SfmlEngine::clear() {
	window.clear(sf::Color::White);
}

void SfmlEngine::clear(sf::Color col) {
	window.clear(col);
}