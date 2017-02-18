// ========================================================================
// Attached: HW_2abc
// ========================================================================
// Project: HW_2c
// ========================================================================
// Programmer: Johnny Valles
// Class: CIS 17C
// ========================================================================
#include <iostream> 
#include <cstdlib>
#include <fstream> 
#include <iomanip>
#define DEBUG 0

const int ROWS = 5;
const int COLS = 3;

int main() {
	char studentGrades[ROWS][COLS];
	double studentGpa[ROWS] = { 0.0 };
	double subjectGpa[ROWS] = { 0.0 };

	std::fstream inFile("grades.dat", std::ios::in);

	if (!inFile) {
		std::cerr << "Error opening the file..." << std::endl;
		return EXIT_FAILURE;
	}

	// Read student grades from grades.dat 
	while (!inFile.eof() && inFile.is_open()) {
		for (int i = 0; i < ROWS; i++) {
			for (int j = 0; j < COLS; j++) {
				inFile >> studentGrades[i][j];
			}
		}
	}

	inFile.close(); // File no longer needed

	// Calculate GPA of each student
	for (int i = 0; i < ROWS; i++) {
		for (int j = 0; j < COLS; j++) {
			switch (studentGrades[i][j])
			{
				case 'A':
				case 'a':
					studentGpa[i] += 4.0;
					subjectGpa[j] += 4.0;
					break; 
				case 'B':
				case 'b':
					studentGpa[i] += 3.0;
					subjectGpa[j] += 3.0;
					break;
				case 'C':
				case 'c':
					studentGpa[i] += 2.0; 
					subjectGpa[j] += 2.0;
					break;
				case 'D':
				case 'd':
					studentGpa[i] += 1.0; 
					subjectGpa[j] += 1.0;
					break;
				#if DEBUG
				default:
					std::cerr << "Error calculating GPA." << std::endl;
					break;
				#endif
			}
		}
		studentGpa[i] /= COLS;
	}

	// Display student grades
	std::cout << "All Grades" << std::endl;
	std::cout << "Student\tEnglish\tHistory\tMath\tGPA" << std::endl;
	for (int i = 0; i < ROWS; i++) {
		
		std::cout << "#" << (i + 1) << "\t";
		for (int j = 0; j < COLS; j++) {
			std::cout << std::setprecision(3);
			std::cout << std::showpoint;
			std::cout<< studentGrades[i][j] << "\t";
		}

		std::cout << studentGpa[i];
		std::cout << std::endl;
	}

	// Display subject's average GPA
	std::cout << std::endl;
	std::cout << "Average GPA by Subject" << std::endl;
	std::cout << "English\tHistory\tMath" << std::endl;
	for (int i = 0; i < COLS; i++) {
		std::cout << std::setprecision(3);
		std::cout << std::showpoint;
		std::cout << (subjectGpa[i] / ROWS) << "\t";
	}
	std::cout << std::endl;

	return EXIT_SUCCESS;
}
// ========================================================================
/*	OUTPUT:
	All Grades
	Student English History Math    GPA
	#1      A       A       B       3.67
	#2      C       C       F       1.33
	#3      C       D       B       2.00
	#4      B       A       C       3.00
	#5      B       A       B       3.33

	Average GPA by Subject
	English History Math
	2.80    3.00    2.20
	Press any key to continue . . .
*/
// ========================================================================
