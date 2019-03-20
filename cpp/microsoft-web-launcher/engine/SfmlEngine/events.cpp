#include "../SfmlEngine.hpp"

void SfmlEngine::events() {
	sf::Event event;
	while(window.pollEvent(event))
	{
		if (event.type == sf::Event::Closed || sf::Keyboard::isKeyPressed(sf::Keyboard::Escape))
			window.close();
			
		if(sf::Mouse::isButtonPressed(sf::Mouse::Left)) {
			isClicked = 1;
		}
	}
	
	if(sf::Keyboard::isKeyPressed(sf::Keyboard::I)) {
		if(gameType == 0)
			gameType = 1;
		else
			gameType = 0;
	}
	
	if(gameType == 0) {
		if (sf::Keyboard::isKeyPressed(sf::Keyboard::A)) {
	        moves[0] = 1;
	    } else {
	        moves[0] = 0;
	    }

	    if (sf::Keyboard::isKeyPressed(sf::Keyboard::D)) {
	        moves[1] = 1;
	    } else {
	        moves[1] = 0;
	    }
		
		if (sf::Keyboard::isKeyPressed(sf::Keyboard::W)) {
	        moves[2] = 1;
	    } else {
	        moves[2] = 0;
	    }

	    if (sf::Keyboard::isKeyPressed(sf::Keyboard::S)) {
	        moves[3] = 1;
	    } else {
	        moves[3] = 0;
	    }
	}
}