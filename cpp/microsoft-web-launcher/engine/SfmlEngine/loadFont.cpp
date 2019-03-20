#include "../SfmlEngine.hpp"

void SfmlEngine::loadFont() {
    sf::Font fnt1;
    if (!fnt1.loadFromFile("../fnt/UbuntuMono-B.ttf")) {
        std::cout << "Error loading font" << std::endl;
    } else {
        fnt.push_back(fnt1);
    }
    
}

void SfmlEngine::loadFont(std::string fntName) {
    sf::Font fnt1;
    if (!fnt1.loadFromFile(fntName)) {
        std::cout << "Error loading font" << std::endl;
    } else {
        fnt.push_back(fnt1);
    }
    
}