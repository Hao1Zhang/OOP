#ifndef _MEERKAT_H_
#define _MEERKAT_H_
/*
1-1. Define and implement a class named meerkat that has the following constructors and behaviours:

meerkat() ;                      // no name or age is required to create a meerkat
void setName(string meerName);   // change the meerkat's name
string getName();
void setAge(int meerAge);        // change the meerkat's age
int getAge();
Your main program should create four meerkat objects and set and display their details 
(note that this means the main program should use the object behaviours to get and output the object state.
  The object behaviours should return the appropriate values and should NOT use cout. 
  Your main program should demonstrate that the name and age information is changed. 
  This class will also be used in problem 2-1.

 */
#include<string>
#include <ctime>

using namespace std;

class meerkat {
private:
    int    m_age;
    string m_name;
public:
    meerkat();
    string getName();
    void   setName(string name);
    int    getAge();
    void   setAge(int id);
};
#endif