#include "../inc/common.hpp"

int factorial(int fac);

int main() {
	// get user input
	int input = 0;
	std::cout << "Enter factorial: ";
	std::cin >> input;
	//std::cout << std::endl;
	
	// call the factorial method and print
	std::cout << "The result is: " << factorial(input) << std::endl;
	
	// close the program
	return 0;
}

int factorial(int fac) {
	// initialise answer
	int answer = fac;
	
	// calculate factorial
	for(int i = fac - 1; i > 0; i--) {
		answer *= i;
	}
	
	// return result
	return answer;
}