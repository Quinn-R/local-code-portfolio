#include "inc/common.h"

class Confetti
{
private:
    
    sf::Vector2f vec2fScreenSize;
    sf::Vector2f vec2fConfettiSize;
    
    std::vector<sf::Vector2f> vecFinalCon;
    int iConfettiCount;
    
public:
    
    Confetti(sf::Vector2f vec2fScreenSz, sf::Vector2f vec2fConfettiSz, int iConfettiCnt)
    {
        vec2fScreenSize = vec2fScreenSz;
        vec2fConfettiSize = vec2fConfettiSz;
        
        iConfettiCount = iConfettiCnt;
    }
    
    void fillConfettiCannon()
    {
        for(int i = 0; i < iConfettiCount; i++)
        {
            vecFinalCon.push_back(randomCoords(0, 0, vec2fScreenSize));
            std::cout << vecFinalCon[i].x << ", " << vecFinalCon[i].y << std::endl;
        }
    }
    
    sf::Vector2f randomCoords(int iMinX, int iMinY, sf::Vector2f vec2fCoords)
    {
        int iX = 0, iY = 0;
        sf::Vector2f vec2frandomCoords;
        
        // initialize = seed the random device
        std::random_device random_device;
        // use Mersenne Twister as random-number generator engine
        std::mt19937 generator(random_device());
        // number distribution, guaranteed unbiased 
        std::uniform_int_distribution<int> distributionX(iMinX, vec2fCoords.x);
        std::uniform_int_distribution<int> distributionY(iMinY, vec2fCoords.y);
        
        iX = distributionX(generator);
        iY = distributionY(generator);
        
        vec2frandomCoords = sf::Vector2f(iX, iY);
        
        return(vec2frandomCoords);
    }
    
};

int main()
{
    // Confetti(sf::Vector2f vec2fScreenSz, sf::Vector2f vec2fConfettiSz, int iConfettiCnt)
	Confetti con(sf::Vector2f(1280, 720), sf::Vector2f(6, 2), 100);
    
    con.fillConfettiCannon();
    
    //std::cout << con.randomCoords().x << ", " << con.randomCoords().y;
	
	return 0;
}
