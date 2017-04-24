// ========================================================================
// Attached: HW_6a
// ========================================================================
// Project: HW_6a
// ========================================================================
// Programmer: Johnny Valles
// Class: CIS 17C
// ========================================================================

#include <stack>
#include <iostream>
#include <string>
#include <cstdlib>

int main()
{
	std::stack<char> pal;
	std::string word;
	std::string test; 

	std::cout << "Enter a word: ";
	getline(std::cin, word);

	for (int i = 0; i < word.length(); i++) 
	{
		pal.push(word[i]);
	}

	while (!pal.empty())
	{
		char temp = pal.top();
		test += temp; 
		pal.pop();
	}

	std::cout << "\tORIGINAL: " << word << std::endl; 
	std::cout << "\tREVERSED: " << test << std::endl;


	if (word.compare(test) == 0)
	{
		std::cout << " *** It's a Palindrome ***" << std::endl << std::endl;
	}
	else
	{
		std::cout << " *** It's not a Palindrome ***" << std::endl << std::endl;
	}

	return EXIT_SUCCESS;
}

// ========================================================================
/*	OUTPUT:

	Enter a word: unix
		ORIGINAL: unix
		REVERSED: xinu
	*** It's not a Palindrome ***

	Press any key to continue . . .
--------------------------------------------------------------
	Enter a word: racecar
		ORIGINAL: racecar
		REVERSED: racecar
	*** It's a Palindrome ***

	Press any key to continue . . .

*/
// ========================================================================