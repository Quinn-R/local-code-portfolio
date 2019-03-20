#include "../SfmlEngine.hpp"

sf::Vector2i SfmlEngine::getMousePos() {
	return sf::Mouse::getPosition(window);
}