#include "inc/common.h"

int isPrime(int n);
int randNumber(int min, int max);

int main()
{
	int number = 0, result = 0, counter = 0;
	
	while(counter != 50)
	{
		number = 0; result = 0;
		
		//std::cout << "Hello! Please enter a number: "; std::cin >> number;
		
		number = randNumber(0, 11);
		
		std::cout << "Random number is: ";
		
		/*if(number != -1)
		{*/
			result = isPrime(number);
			
			std::cout << number << " = result = " << result << std::endl << std::endl;
		//}
		
		counter++;
	}
	
	return 0;
}

int isPrime(int n)
{
	int result = -1, pN = n;
	
	if(pN == 2 || pN == 3 || pN == 5 || pN == 7)
	{
		result = 1;
	}
	else if(pN % 2 == 0 || pN % 3 == 0 || pN % 5 == 0 || pN <= 1)
	{
		result = 0;
	}
	else
	{
		for(int i = 3; i < 10; i++)
		{
			if(pN % i == 0)
			{
				result = 0;
				break;
			}
			else
			{
				result = 1;
			}
		}
	}
	
	return result;
}

int randNumber(int min, int max)
{
	int result = 0;
	
	std::random_device rd;   // non-deterministic generator  
    std::mt19937 gen(rd());  // to seed mersenne twister.  
    std::uniform_int_distribution<> dist(min, max); // distribute results between 1 and 6 inclusive.
	
	result = dist(gen);
	
    return result;
}
