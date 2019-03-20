#include "../inc/common.hpp"
#include "../inc/Engine.hpp"

void Engine::update() {
    for (unsigned int i = 0; i < objects.size(); i++) {
        objects[i].update(dtAsSeconds);
    }
}
