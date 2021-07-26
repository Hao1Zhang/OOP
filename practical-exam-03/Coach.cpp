#include "Coach.h"

int Coach::nextID=0;

Coach::Coach(string n,int sl):Person(n,"coach",sl){
    personID =nextID;
    nextID++;
    
}

int Coach::get_salary(){
    if (serviceLength<15){
        return salary;
    }
    else {
        return 3*salary;
    }
}