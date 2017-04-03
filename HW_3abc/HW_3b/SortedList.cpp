#include "SortedList.h"

SortedList::SortedList()
{
    length = 0;
}

SortedList::~SortedList()
{
    /**/
}

void SortedList::insertItem(int item)
{
    int location = 0; 
    location = binarySearch(item);
    
    for (int i = length; i > location; i--)
    {
        numbers[i] = numbers[i-1]; 
    }
    numbers[location] = item;
    length++;
}

int SortedList::binarySearch(int item)
{
    int first = 0; 
    int last = length - 1; 
    int midpoint = 0; 

    while (true)
    {
        if (first > last)
        {
            return first; 
        }

        midpoint = (first + last) / 2; 

        if (item == numbers[midpoint])
        {
            return midpoint;
        }
        else if (item > numbers[midpoint])
        {
            first = midpoint +1;
        }
        else if (item < numbers[midpoint])
        {
            last = midpoint - 1;
        }
    }
}

void SortedList::deleteItem(int item)
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

bool SortedList::isFull() const
{
    return (length == MAX_SIZE);
}

bool SortedList::isEmpty() const
{
    return (length == 0);
}
