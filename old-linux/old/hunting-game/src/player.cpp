#include "../inc/player.h"

player::player(sf::Vector2f charSize, sf::Color charCol, sf::Vector2f charPos, int speed, sf::Color bufCol)
{
	character.setSize(charSize);
	character.setFillColor(charCol);
	character.setPosition(charPos);
	
	topBuf.setSize(sf::Vector2f(charSize.x, 1));
	bottomBuf.setSize(sf::Vector2f(charSize.x, 1));
	leftBuf.setSize(sf::Vector2f(1, charSize.y));
	rightBuf.setSize(sf::Vector2f(1, charSize.y));
	
	topBuf.setPosition(character.getPosition().x, character.getPosition().y - 1);
	bottomBuf.setPosition(character.getPosition().x, character.getPosition().y + character.getSize().y);
	leftBuf.setPosition(character.getPosition().x - 1, character.getPosition().y);
	rightBuf.setPosition(character.getPosition().x + character.getSize().x, character.getPosition().y);
	
	topBuf.setFillColor(bufCol);
	bottomBuf.setFillColor(bufCol);
	leftBuf.setFillColor(bufCol);
	rightBuf.setFillColor(bufCol);
	
	collideTop = 0, collideBottom = 0, collideLeft = 0, collideRight = 0;
	
}

void player::bufUpdate()
{
	topBuf.setPosition(character.getPosition().x, character.getPosition().y - 1);
	bottomBuf.setPosition(character.getPosition().x, character.getPosition().y + character.getSize().y);
	leftBuf.setPosition(character.getPosition().x - 1, character.getPosition().y);
	rightBuf.setPosition(character.getPosition().x + character.getSize().x, character.getPosition().y);
}

void player::move(std::string direction, std::vector<wall> walls)
{
    bufUpdate();
	if(direction == "left")
	{
        //bufUpdate();
		for(int i = 0; i < walls.size(); i++)
		{
            //bufUpdate();
			if(leftBuf.getGlobalBounds().intersects(walls[i].wall1.getGlobalBounds())/* || leftBuf.getGlobalBounds().intersects(walls2[i].wall1.getGlobalBounds())*/)
			{
				//collideTop = 0;
				//collideBottom = 0;
				collideLeft = 1;
				//collideRight = 0;
                //bufUpdate();
			}
		}
        //bufUpdate();
		if(collideLeft != 1)
		{
			character.move(-1, 0);
			collideTop = 0;
			collideBottom = 0;
			collideLeft = 0;
			collideRight = 0;
		}
	}
			
	if(direction == "right")
	{
        //bufUpdate();
		for(int i = 0; i < walls.size(); i++)
		{
            //bufUpdate();
			if(rightBuf.getGlobalBounds().intersects(walls[i].wall1.getGlobalBounds())/* || rightBuf.getGlobalBounds().intersects(walls2[i].wall1.getGlobalBounds())*/)
			{
				//collideTop = 0;
				//collideBottom = 0;
				//collideLeft = 0;
				collideRight = 1;
                //bufUpdate();
			}
		}
        //bufUpdate();
		if(collideRight != 1)
		{
			character.move(1, 0);
			collideTop = 0;
			collideBottom = 0;
			collideLeft = 0;
			collideRight = 0;
		}
	}
			
	if(direction == "up")
	{
        //bufUpdate();
		for(int i = 0; i < walls.size(); i++)
		{
            //bufUpdate();
			if(topBuf.getGlobalBounds().intersects(walls[i].wall1.getGlobalBounds())/* || topBuf.getGlobalBounds().intersects(walls2[i].wall1.getGlobalBounds())*/)
			{
				collideTop = 1;
				//collideBottom = 0;
				//collideLeft = 0;
				//collideRight = 0;
                //bufUpdate();
			}
		}
        //bufUpdate();
		if(collideTop != 1)
		{
			character.move(0, -1);
			collideTop = 0;
			collideBottom = 0;
			collideLeft = 0;
			collideRight = 0;
		}
	}
			
	if(direction == "down")
	{
        //bufUpdate();
		for(int i = 0; i < walls.size(); i++)
		{
            //bufUpdate();
			if(bottomBuf.getGlobalBounds().intersects(walls[i].wall1.getGlobalBounds())/* || bottomBuf.getGlobalBounds().intersects(walls2[i].wall1.getGlobalBounds()*/)
			{
				//collideTop = 0;
				collideBottom = 1;
				//collideLeft = 0;
				//collideRight = 0;
                //bufUpdate();
			}
		}
        //bufUpdate();
		if(collideBottom != 1)
		{
			character.move(0, 1);
			collideTop = 0;
			collideBottom = 0;
			collideLeft = 0;
			collideRight = 0;
		}
	}
}
