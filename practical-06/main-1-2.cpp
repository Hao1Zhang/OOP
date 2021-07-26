#include "person.h"
#include <iostream>
/*
Your main program should create four person objects and set and display their details 
(note that this means the main program should use the object behaviours to get and output the object state.  
The object behaviours should return the appropriate values and should NOT use cout. 
Your main program should demonstrate that the name and age information is changed. 
This class will also be used in problem 2-1.
*/

using namespace std;

int main() {
    person persons[4];
    string names[4] = {"Person1", "Person2", "Person3", "Person4"};
    int    salaries[4] = {1000,2000,3000,4000};
    for (size_t i = 0; i < 4; i++)
    {
        persons[i].setName(names[i]);
        persons[i].setSalary(salaries[i]);
    }
}
