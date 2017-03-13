//***********************************************
// Unsorted list using an array without classes.
// Only purpose is to demonstrate functionality.
//***********************************************

#include <iostream> 
#include <string> 

using namespace std; 

int MAX_ITEMS = 50; 

void insertItem(string list[], int &lenth);
void deleteItem(string list[], int & length);
void displayList(string list[], int & length);

int main() 
{
    
    string stringList[MAX_ITEMS]; 
    int listLength = 0; 
    
    for (int i = 0; i < 4; i++)
    {
        insertItem(stringList, listLength);    
    }
    
    cout << endl << "Number of items in stringList: " << listLength << endl; 
    deleteItem(stringList, listLength); 
    
    displayList(stringList, listLength);
}

void insertItem(string list[], int & length) 
{
    string item; 
    cout << "Enter an item to be added to the list: "; 
    cin >> item; 
    
    list[length] = item;
    length++; 
}

void deleteItem(string list[], int & length)
{
    string item;
    int location = 0; 
    
    cout << "Enter an item to delete from the list: "; 
    cin >> item; 
        
    // Iterate through the items in the array. 
    while (location < length && list[location] != item)
    {
        location++; 
    }
    
    // Item found
    if (location < length)
    {
        // The last item in list is assigned to names[location]
        list[location] = list[length-1]; 
        list[length-1] = ""; 
        length--;
    }
    
    // Item not in list
    if (location == length)
    {
        cout << "The item is not in the list\n";    
    }
}

void displayList(string list[], int & length)
{
    cout << endl << "Number of items in stringList: " << length << endl; 
    
    for (int i = 0; i < length; i++) 
    {
        cout << "stringList[" << i << "]: " << list[i] << endl;   
    }   
}
