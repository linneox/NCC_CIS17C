// ========================================================================
// Attached: HW_4a
// ========================================================================
// Project: HW_4a
// ========================================================================
// Programmer: Johnny Valles
// Class: CIS 17C
// ========================================================================

#include <iostream> 
#include <Windows.h>
#include "Dog.h"

#define WINDOWS_OS 1

void insertNode(Dog *&head, std::string name); 
void searchList(Dog *&head);
void displayAllNodes(Dog *&head);

int main()
{
	std::string name;
	Dog *head = nullptr; 

	std::cout << "Enter a dog name [* to quit]:\n";
	while (name[0] != '*')
	{
		getline(std::cin, name); 

		if (name == "*")
			break;
		insertNode(head, name);
	}
	


	std::cout << "\nDisplay the list [Y/N]: "; 
	std::cin >> name;

	if (toupper(name[0]) == 'Y')
	{
		#if WINDOWS_OS
		system("cls");
		#endif

		displayAllNodes(head);
		
		#if WINDOWS_OS
		system("pause");
		system("cls");
		#endif

		searchList(head);
	}
}

void insertNode(Dog *& head, std::string name)
{
	Dog *temp = new Dog;
	temp->name = name;
	temp->next = head; 
	head = temp;
}

void searchList(Dog *& head)
{
	std::string name;
	std::cout << "\nEnter a dog name to search: ";
	std::cin.ignore();
	getline(std::cin, name);
	Dog * temp = head; 

	bool found = false; 

	while (temp != nullptr && found == false)
	{
		if (temp->name == name)
			found = true;
		else 
			temp = temp->next;
	}

	if (found)
		std::cout << "The name is in the list." << std::endl;
	else
		std::cout << "The name is not in the list." << std::endl;
}

void displayAllNodes(Dog *& head)
{
	Dog* temp = head;
	int i = 1;

	std::cout << "\n\nLIST OF DOGS\n\n\tNAME"
		<< "\n-----------------------------\n";

	while (temp != nullptr)
	{
		std::cout << (i) << ")\t" << temp->name << std::endl;
		i++; 
		temp = temp->next; 
	}
}

// ========================================================================
/*	OUTPUT:
	Enter a dog name [* to quit]:
	Bud
	Big Boy
	Spot
	White Lightning
	*

	Display the list [Y/N]: Y


	LIST OF DOGS

	NAME
	-----------------------------
	1)      White Lightning
	2)      Spot
	3)      Big Boy
	4)      Bud

	Enter a dog name to search: Doge
	The name is not in the list.
	Press any key to continue . . .
*/
// ========================================================================