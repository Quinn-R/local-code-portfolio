#include "../SfmlEngine.hpp"

void SfmlEngine::update() {
	dt = clock.restart();
	dtAsSeconds = dt.asSeconds();
}
