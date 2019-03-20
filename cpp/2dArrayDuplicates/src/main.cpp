#include "../inc/common.hpp"

/*
	Just a quick note about the vectors used.
	I decided to use them because it is easier
	to pass into a method.
	I did not use the special push_back() 
	method, as that would defeat the purpose 
	of using arrays.
*/

bool duplicateSearch(std::vector<std::vector<std::string> > &grid);

int main() {
	// initialise the 2dArray
	std::vector<std::vector<std::string> > grid = {
		{"Jen", "Sam", "Ant"}, 
		{"Con", "Amy", "Zoe"},
		{"Ted", "Eve", "Jen"},
	};
	
	// call the duplicate class
	std::cout << duplicateSearch(grid) << std::endl;
	
	// close the program
	return 0;
}

bool duplicateSearch(std::vector<std::vector<std::string> > &grid) {
	// create a 1d array the size of the 2d array
	int count = 0;
	for(int i = 0; i < grid.size(); i++){count += grid[i].size();}
	std::vector<std::string> array(count);
	std::cout << count << std::endl;
	
	// take the 2d array out of the equation
	// by assigning its contents to a 1d Array
	// of the same number of spaces
	count = 0;
	for(int i = 0; i < grid.size(); i++) {
		for(int j = 0; j < grid[i].size(); j++) {
			array[count] = grid[i][j];
			count++;
		}
	}
	
	// use bubble sort to arrange the elements 
	// in alphabetical order
	for(int i = array.size() - 1; i > 0; i--) {
		for(int j = 0; j < i; j++) {
			if(array[j] > array[j + 1]) {
				std::string tmp = array[j];
				array[j] = array[j + 1];
				array[j + 1] = tmp;
			}
			
		}
	}
	
	// print array in aplabetic order
	for(int i = 0; i < array.size(); i++) {
		std::cout << array[i] << std::endl;
	}
	
	// time for the duplication id part
	for(int i = 0; i < array.size() - 1; i++) {
		if(array[i] == array[i + 1]) {
			return 1;
		}
	}
	
	return 0;
}