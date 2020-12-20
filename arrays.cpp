#include <iostream>
#include <cstdlib>
#include <time.h>
/*
Student name: Christopher Oka
Student number: 20892372

SYDE 121 Test #1: Arrays (Question 2)
Filename: arrays.cpp

 I hereby declare that this code, submitted for credit for the course
 SYDE121, is a product of my own efforts. This coded solution has
 not been plagiarized from other sources and has not been knowingly plagiarized by others.

 Project: 121 Test
 Purpose:
 Due date: Friday, October 23

*/

/*
Program steps:
Create a function that reads the array and 
outputs the array starting from the first index and 
outputs array values until an equal or decreasing value is 
reached

1. Create a loop that increments through the array
until a boolean is false
2. The boolean is true until the array reads a value
that is equal to or decreasing from the previous value
3. The function outputs everything up until that decreasing/
equal value

*/

/*
Tested values:
{1,1,1,1,1,1,1,1} because they're all equal
{0,1,2,3,4,5,6,7} because they're all increasing
{7,6,5,4,3,2,1,0} because they're all decreasing
{0,1,4,2,1,0} because the decreasing value is in the middle of the array
{0,1,2,3,4,5,6,7,8,2} because the decreasing value is at the end of the array
{0,1,2,3,3} because the array ends with equal values

All tested values work!
*/


void processing(int array[], int array_size) { 
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
	
	std::cout << "For {0,1,2,3,4,5,6,7}, expected values are 0 1 2 3 4 5 6 7\n";
	std::cout << "For {7,6,5,4,3,2,1,0}, expected values are 7\n";
	std::cout << "For {0,1,4,2,1,0}, expected values are 0 1 4\n";
	std::cout << "For {0,1,2,3,4,5,6,7,8,2}, expected values are 0 1 2 3 4 5 6 7 8\n";
	std::cout << "For {0,1,2,3,3}, expected values are 0 1 2 3\n";
	int array_size = 0;
	processing(array, array_size);
	output(array, array_size);
}