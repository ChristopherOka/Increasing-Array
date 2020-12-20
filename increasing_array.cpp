#include <iostream>
#include <cstdlib>
#include <time.h>

void value_checker(int array[], int array_size) { 
	//PURPOSE: Take an array and iterate left to right through the array until an integer is equal to or decreasing from the previous one. 
	//Add the number up until the equal or decreasing value into an array
	//INPUTS: The array and the size of the arry
	//OUTPUTS: Does not return anything, but performs a calculation that leaves array_size and the array[] augmented

	bool increasing = true; 
	int count = 0;
	do {	
		if (array[count] <= array[count - 1]) { //checks if the next number in the array is decreasing or equal
			increasing = false;
		}
		if (increasing == true) { //if the number was still increasing, it is added to the array
			std::cout << array[count] << " ";
			array_size++; 
		}
	} while ((count++ < 20) && increasing); //repeats until the array ends, or increasing is set to false
	}

void output(int array[], int array_size) {
	//PURPOSE: Print the array up until the values decrease
	//INPUTS: The array and the array size are entered as parameters
	//OUTPUTS: The array is printed to the console
	for (int i = 0; i < array_size; i++) { //prints the array to console
		std::cout << array[i] << " ";
	}
}

int main() {
	int array[20] = { 0,1,2,3,4,5,6,7,8,2 };
	int array_size = 0;
	processing(array, array_size);
	output(array, array_size);
}
