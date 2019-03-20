#ifndef ENGINE_HPP
#define ENGINE_HPP

#include "common.hpp"
#include "Object.hpp"

class Engine {
private:

    sf::RenderWindow window;
    sf::Event event;

    sf::Vector2f windowRes;

    sf::Clock clock;
    sf::Time dt;

    std::vector<Object> objects;

    float dtAsSeconds;

    void input();
    void update();
    void draw();

public:

    Engine();

    void start();

};

#endif
