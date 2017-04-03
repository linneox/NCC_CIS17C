#ifndef UnsortedList_h
#define UnsortedList_h

#include <iostream>

const int MAX_SIZE = 10;

class UnsortedList
{
private:
    
    int numbers[MAX_SIZE];
    int length;
    
public:
    
    UnsortedList();
    ~UnsortedList();
    
    void insertItem(int item);
    void deleteItem(int item);
    
    bool isFull() const;
    bool isEmpty() const;
    
};

#endif /* UnsortedList_h */
