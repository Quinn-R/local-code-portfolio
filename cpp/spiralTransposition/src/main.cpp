#include "../inc/common.hpp"

void printArray(std::vector<std::vector<int> > &grid);
std::vector<int> spiralTransposition(std::vector<std::vector<int> > &grid);

int main() {
	// init 2d array
	std::vector<std::vector<int> > grid = {
		{1, 2, 3}, 
		{4, 5, 6},
		{7, 8, 9},
	};
	
	// call the spiralTransposition method and print
	std::cout << "The result is: ";
	printArray(factorial(input));
	std::cout << std::endl;
	
	// close the program
	return 0;
}

void printArray(std::vector<std::vector<int> > &grid) {
	// print array
	for(int i = 0; i < array.size(); i++) {
		std::cout << array[i] << std::endl;
	}
}

std::vector<int> spiralTransposition(std::vector<std::vector<int> > &grid) {
	// create a 1d array the size of the 2d array
	int count = 0;
	for(int i = 0; i < grid.size(); i++){count += grid[i].size();}
	std::vector<int> array(count);
	std::vector<int> answer(count);
	
	// assign 2d array to 1d array
	count = 0;
	for(int i = 0; i < grid.size(); i++) {
		for(int j = 0; j < grid[i].size(); j++) {
			array[count] = grid[i][j];
			count++;
		}
	}
	
	// make spiral effect
	count = 0;
	for(int i = 0; i < grid.size(); i++) {
		
	}
	
	// return answer
	return 0;
}