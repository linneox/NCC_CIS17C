// ========================================================================
// Attached: HW_3abc
// ========================================================================
// Project: HW_a
// ========================================================================
// Programmer: Johnny Valles
// Class: CIS 17C
// ========================================================================
#include "UnsortedList.h"
#include <iostream>
#include <cctype>


#define EXIT_SUCCESS 0
#define EXIT_FAILURE 1

void showMenu();
char getChoice();

int main(int argc, const char * argv[])
{
    char choice = ' ';
    int num;
    UnsortedList list1;
    
    do 
    {
	    showMenu();
	    choice = getChoice();
	    
	    switch (toupper(choice))
	    {
	        case 'A':
	            std::cout << "Enter a number:  ";
	            std::cin >> num;
	            list1.insertItem(num);
	            break;
	        case 'B':
	            std::cout << "Enter the number to be deleted:  ";
	            std::cin >> num;
	            list1.deleteItem(num);
	            break;
	    }
	    std::cout << std::endl << std::endl;
	} while (choice != '*');
 	   
    return EXIT_SUCCESS;
}

void showMenu()
{
    
    std::cout << "a. Insert a number into the list." << std::endl;
    std::cout << "b. Delete a number from the list." << std::endl;
}

char getChoice()
{
    char choice;
    
    std::cout << "Enter your choice: ";
    std::cin >> choice;
    
    return choice;
}

// ========================================================================
/*	OUTPUT:
	a. Insert a number into the list.
	b. Delete a number from the list.
	Enter your choice: b
	Enter the number to be deleted:  2
	List is empty.


	a. Insert a number into the list.
	b. Delete a number from the list.
	Enter your choice: a
	Enter a number:  1


	a. Insert a number into the list.
	b. Delete a number from the list.
	Enter your choice: a
	Enter a number:  2


	a. Insert a number into the list.
	b. Delete a number from the list.
	Enter your choice: a
	Enter a number:  3


	a. Insert a number into the list.
	b. Delete a number from the list.
	Enter your choice: a
	Enter a number:  4
	The list is full - cannot insert the number.


	a. Insert a number into the list.
	b. Delete a number from the list.
	Enter your choice: b
	Enter the number to be deleted:  4
	Item is not in the list.

 */
// ========================================================================
