#include "meerkat.h"
#include <iostream>
/*
Your main program should create four meerkat objects and set and display their details 
(note that this means the main program should use the object behaviours to get and output the object state.  
The object behaviours should return the appropriate values and should NOT use cout. 
Your main program should demonstrate that the name and age information is changed. 
This class will also be used in problem 2-1.
*/

using namespace std;

int main() {
    meerkat kats[4];
    string names[4] = {"Kat1", "Kat2", "Kat3", "Kat4"};
    for (size_t i = 0; i < 4; i++)
    {
        kats[i].setName(names[i]);
    }
}
