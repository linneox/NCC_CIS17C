#ifndef SORTEDLIST_H
#define SORTEDLIST_H

#include <iostream> 

const int MAX_SIZE = 10; 

class SortedList
{
private:

	int numbers[MAX_SIZE]; 
	int length;

public: 
	
	SortedList(); 
	~SortedList(); 

	void insertItem(int item);
    void deleteItem(int item);
    int binarySearch(int item);

    
    bool isFull() const;
    bool isEmpty() const;

};

#endif /* SORTEDLIST_H */