#include "../SfmlEngine.hpp"

void SfmlEngine::loadTexture() {
    sf::Texture tex1;
    if (!tex1.loadFromFile("../tex/cute-star-1.png")) {
        std::cout << "Error loading texture" << std::endl;
    } else {
        tex.push_back(tex1);
    }
    
}

void SfmlEngine::loadTexture(std::string texName) {
    sf::Texture tex1;
    if (!tex1.loadFromFile(texName)) {
        std::cout << "Error loading texture" << std::endl;
    } else {
        tex.push_back(tex1);
    }
    
}