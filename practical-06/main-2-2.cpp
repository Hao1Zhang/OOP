#include "meerkat.h"
#include "aircraft.h"
#include <iostream>
/*
Your main program should create an aircraft object and three person objects. 
Two of the person objects must be passed to the constructor when the aircraft object is created.
Your main program must then replace the pilot with the third person object, 
then replace the co-pilot with the original pilot.
*/

using namespace std;

int main() {
    person first, second, third;
    aircraft aAirCraft("call sign", first, second);
    aAirCraft.setPilot(third);
    aAirCraft.setCoPilot(first);
}
