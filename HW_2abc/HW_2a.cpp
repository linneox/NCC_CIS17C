// ========================================================================
// Attached: HW_2abc
// ========================================================================
// Project: HW_2a
// ========================================================================
// Programmer: Johnny Valles
// Class: CIS 17C
// ========================================================================
#include <iostream> 
#include <windows.h>
#define WINDOWS_OS 1 // 1 enables System("CLS") if on windows
					 // 0 Disables system("CLS") if not windows

void getScores(double scores[]);
void showMenu(); 
char getChoice();
void displayResult(char choice, double scores[]);

const int ARRAYSIZE = 5;

int main() {
	double testScores[ARRAYSIZE] = { 0.0 };
	getScores(testScores);
	showMenu();
	char choice = getChoice();
	displayResult(choice, testScores);

	return 0; 
}

void getScores(double scores[]) {
	std::cout << "Enter 5 test scores: " << std::endl; 
	for (int i = 0; i < ARRAYSIZE; i++) {
		std::cin >> scores[i];
	}
}

void showMenu() {
#if WINDOWS_OS 
	system("CLS");
#endif
	std::cout << "A.) Calculate the avaerage of the test scores." << std::endl; 
	std::cout << "B.) Display all test scores." << std::endl; 
}

char getChoice() {
	char choice; 
	std::cout << "Enter your choice: ";
	std::cin >> choice; 
	return choice; 
}

void displayResult(char choice, double scores[]) {
#if WINDOWS_OS
	system("CLS");
#endif
	double average = 0.0; 

	if (choice == 'A' || choice == 'a') {
		for (int i = 0; i < ARRAYSIZE; i++) {
			average += scores[i];
		}
		average /= ARRAYSIZE;
		std::cout << "The avarage is " << average << std::endl;
	}
	else if (choice == 'B' || choice == 'b') {
		for (int i = 0; i < ARRAYSIZE; i++) {
			if (i != 4) {
				std::cout << scores[i] << ", ";
			}
			else {
				std::cout << scores[i] << std::endl;
			}
		}
	}
}
// ========================================================================
/*	OUTPUT:
	Enter 5 test scores:
	99
	77
	86
	59
	92

	A.) Calculate the avaerage of the test scores.
	B.) Display all test scores.

	Enter your choice: A

	The avarage is 82.6
	Press any key to continue . . .

*/
// ========================================================================
