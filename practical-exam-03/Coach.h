#include "Person.h"

#ifndef _COACH_H_
#define _COACH_H_

using namespace std;

class Coach:public Person{
    public:
    Coach(string n,int sl);
    virtual int get_salary();
    
    private:
    static int nextID;
};

#endif