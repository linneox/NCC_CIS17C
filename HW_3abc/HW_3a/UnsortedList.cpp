#include "UnsortedList.h"

UnsortedList::UnsortedList()
{
    length = 0;
}

UnsortedList::~UnsortedList()
{
    /**/
}

void UnsortedList::insertItem(int item)
{
    if(!isFull())
    {
        numbers[length] = item;
        length++;
    }
    else 
    {
    	std::cout << "The list is full - cannot insert the number."; 
    	std::cout << std::endl;
    }
}

void UnsortedList::deleteItem(int item)
{
    // Linear Search
    int location = 0;

    if(isEmpty())
    {
    	std::cout << "List is empty." << std::endl; 
    }
    else 
    {
	   	while(numbers[location] != item && location < length)
	    {
	        location++;
	    }
	    
	    if (numbers[location] == item)
	    {
	        numbers[location] = numbers[length-1];
	        length--;
	    }
	    else
	    {
	        std::cout << "Item is not in the list." << std::endl;
	    }
    }
}

bool UnsortedList::isFull() const
{
    return (length == MAX_SIZE);
}

bool UnsortedList::isEmpty() const
{
    return (length == 0);
}
