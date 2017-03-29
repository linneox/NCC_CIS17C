// ========================================================================
// Attached: HW_5ab
// ========================================================================
// Project: HW_5ab
// ========================================================================
// Programmer: Johnny Valles
// Class: CIS 17C
// ========================================================================
#include <iostream>
#include <vector> 
#include <string> 

#define EXIT_SUCCESS 0
#define EXIT_FAILURE 1

int main()
{
    std::vector<std::string>cities; 
    
    cities.push_back("Venice"); 
    cities.push_back("Paris"); 
    cities.push_back("Dublin"); 

    
    std::vector<std::string>::iterator it;
    std::vector<std::string>::reverse_iterator rit;
    
    
    
    std::cout << "\nOutput the list using a for loop and the subscript operator:\n";
    for (int i = 0; i < cities.size(); i++)
    {
        std::cout << cities[i] << std::endl;
    }
    
    
    std::cout << "\nOutput the list using a for loop and iterator:\n";
    for (it = cities.begin(); it != cities.end(); it++)
    {
        std::cout << *it << std::endl;
    }

    
    
    std::cout << "\nOutput the list in reverse order using a for loop and reverse_iterator:\n";
    for (rit = cities.rbegin(); rit != cities.rend(); rit++)
    {
        std::cout << *rit << std::endl;
    }
    
    std::cout << std::endl;
    std::cout << "# of cities: " << cities.size() << std::endl; 
    std::cout << "The second city in the list is " << cities[1] << std::endl; 
    std::cout << "Now swapping the first city with the second city." << std::endl;
    std::swap(cities[0],cities[1]);
    std::cout << "Now the second city is " << cities[1] << std::endl;

    return EXIT_SUCCESS;
}
// ========================================================================
/*	OUTPUT:
Output the list using a for loop and the subscript operator:
Venice
Paris
Dublin

Output the list using a for loop and iterator:
Venice
Paris
Dublin

Output the list in reverse order using a for loop and reverse_iterator:
Dublin
Paris
Venice

# of cities: 3
The second city in the list is Paris
Now swapping the first city with the second city.
Now the second city is Venice
*/
// ========================================================================