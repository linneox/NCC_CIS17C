// ========================================================================
// Attached: HW_5a
// ========================================================================
// Project: HW_5a
// ========================================================================
// Programmer: Johnny Valles
// Class: CIS 17C
// ========================================================================
#include <iostream> 
#include <list> 
using namespace std; 

void getNumbers(list<int>&);
int addNumbers(list<int>&);
void displaySum(list<int>&,int);

int main()
{
	list<int> aList; 
	getNumbers(aList);
	int sum = addNumbers(aList);
	displaySum(aList, sum);
}

void getNumbers(list<int> & aList)
{
	int entry; 

	cout << "Enter 5 integer values." << endl; 

	for (int i = 0; i < 5; i++)
	{
		cout << "Enter a value: ";
		cin >> entry;
		aList.push_back(entry);
	}
}

int addNumbers(list<int> & aList)
{
	int sum = 0; 

	for (list<int>::iterator it = aList.begin(); it != aList.end(); it++)
	{
		sum += *it;
	}

	return sum; 
}

void displaySum(list<int> & aList, int sum)
{
	cout << "Here is the list: "; 

	for (list<int>::iterator it = aList.begin(); it != aList.end(); it++)
	{
		cout << *it << "\t"; 
	}
	cout << endl; 

	cout << "The sum equals: " << sum << endl;
}
// ========================================================================
/*	OUTPUT:

Enter 5 integer values. 
Enter a value: 5
Enter a value: 7
Enter a value: 3
Enter a value: 4
Enter a value: 2


Here is the list:	5	7	3	4	2
The sum equals: 21

*/
// ========================================================================