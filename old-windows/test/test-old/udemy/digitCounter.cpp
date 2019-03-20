#include <iostream>
using namespace std;

int main() {
	
	int number = 11223344;
	
	int numCounter = 1;
	int tmp = number;
	
	while (tmp /= 10)
	    numCounter++;
	
	cout << numCounter;
	
	/*int num;
	
	cout << num;*/
	
	return 0;
}
