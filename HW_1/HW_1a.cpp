// ========================================================================
// Attached: HW_1a
// ========================================================================
// Project: HW_1a
// ========================================================================
// Programmer: Johnny Valles
// Class: CIS 17C
// ========================================================================
#include <iostream>
#include <fstream>

const int SIZE = 20;

void getNumbers(int[]); 
void showNumbers(int[]);

int main() {
	int numbers[SIZE] = {0};
	
	getNumbers(numbers);
	showNumbers(numbers);

}

// ************************************************************************
// getNumbers(int[])
// ************************************************************************
void getNumbers(int numbers[]) {

	std::ifstream inFile; 
	inFile.open("data.txt");

	if (!inFile) {
		std::cout << "Error opening the file..." << std::endl;
		exit(1); // Program exits if file error. 
	}

	for (int i = 0; i < SIZE && !inFile.eof(); i++) {
		inFile >> numbers[i];
	}

	inFile.close();
}
// ************************************************************************


// ************************************************************************
// showNumbers(int[])
// ************************************************************************
void showNumbers(int numbers[]) {
	std::cout << "Here are the numbers:" << std::endl; 
	
	for (int i = 0; i < 10; i++) {
		std::cout << numbers[i] << std::endl;
	}
}
// ************************************************************************

// ========================================================================
/*	OUTPUT:
	Here are the numbers:
	1
	2
	3
	4
	5
	6
	7
	8
	9
	10
	Press any key to continue . . .
*/
// ========================================================================