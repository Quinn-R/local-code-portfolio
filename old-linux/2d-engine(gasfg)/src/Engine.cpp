#include "../inc/common.hpp"
#include "../inc/Engine.hpp"

Engine::Engine() {
    windowRes.x = sf::VideoMode::getDesktopMode().width;
    windowRes.y = sf::VideoMode::getDesktopMode().height;

    objects.push_back(Object());
    // objects.push_back(Object());
    objects[0].setObjPos(sf::Vector2f(500, 32));
    objects[0].setObjColor(sf::Color::Green);
}

void Engine::start() {
    window.create(sf::VideoMode(windowRes.x, windowRes.y), "Test Screen", sf::Style::Fullscreen);

    while (window.isOpen()) {
        dt = clock.restart();

        dtAsSeconds = dt.asSeconds();

        input();
        update();
        draw();
    }
}
