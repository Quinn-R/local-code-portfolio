#include "../SfmlEngine.hpp"

void SfmlEngine::drawEntity(std::vector<sf::RectangleShape> &rects) {
	for (unsigned int i = 0; i < rects.size(); i++) {
        window.draw(rects[i]);
    }
}