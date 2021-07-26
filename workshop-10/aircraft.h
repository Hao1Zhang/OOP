#ifndef AIRCRAFT
#define AIRCRAFT
/*
Your main program should create four aircraft objects and change and display their details.
Your main program should demonstrate that the name and salary information is changed.
This class will also be used in problem 2-2.
 */
#include<string>
#include "person.h"

using namespace std;

class aircraft {
private:
    string m_callsign;
    person m_pilot;
    person m_coPilot;
public:
    aircraft(string callsign,person thePilot,person theCoPilot);
    person getPilot();
    void   setPilot(person pilot);
    person getCoPilot();
    void   setCoPilot(person coPilot);
};
#endif