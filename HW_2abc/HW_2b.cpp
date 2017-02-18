// ========================================================================
// Attached: HW_2abc
// ========================================================================
// Project: HW_2b
// ========================================================================
// Programmer: Johnny Valles
// Class: CIS 17C
// ========================================================================
#include <iostream> 
#include <cstdlib>

const int ROWS = 3;
const int COLS = 4;

void getData(int numArray[][COLS]);
void displayArray(int numArray[][COLS]);

int main() {
	int numArray[ROWS][COLS];
	getData(numArray);
	displayArray(numArray);

	return EXIT_SUCCESS;
}

void getData(int numArray[][COLS]) {
	std::cout << "Enter integers into the 2-Dimensional array:" << std::endl;

	for (int i = 0; i < ROWS; i++) {
		for (int j = 0; j < COLS; j++) {
			std::cout << "\tRow " << (i + 1) << " Column: " << (j + 1) << ": ";
			std::cin >> numArray[i][j];
		}
	}
}

void displayArray(int numArray[][COLS]) {
	std::cout << "Here is the data in the 2-Dimensional array:" << std::endl;
	for (int i = 0; i < ROWS; i++) {
		std::cout << "\t";
		for (int j = 0; j < COLS; j++) {
			std::cout << numArray[i][j] << "\t";
		}
		std::cout << std::endl;
	}
}
// ========================================================================
/*	OUTPUT:
	Enter integers into the 2-Dimensional array:
		Row 1 Column: 1: 1
		Row 1 Column: 2: 45
		Row 1 Column: 3: 765
		Row 1 Column: 4: 6
		Row 2 Column: 1: 32
		Row 2 Column: 2: 45
		Row 2 Column: 3: 789
		Row 2 Column: 4: 343
		Row 3 Column: 1: 22
		Row 3 Column: 2: 64
		Row 3 Column: 3: 12
		Row 3 Column: 4: 555
	Here is the data in the 2-Dimensional array:
		1       45      765     6
		32      45      789     343
		22      64      12      555
	Press any key to continue . . .
*/
// ========================================================================
