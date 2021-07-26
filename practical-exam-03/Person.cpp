#include "Person.h"

using namespace std;

Person::Person(){
    
}

Person::Person(string n, string o, int sl){
    name=n;
    occupation=o;
    serviceLength=sl;
}

void Person::set_name(string n){
    name=n;
}

string Person::get_name(){
    return name;
}

void Person::set_occupation(string o){
    occupation=o;
}
string Person::get_occupation(){
    return occupation;
}

void Person::set_salary(int v){
    if (v>0){
        salary=v;
    }
}
int Person::get_salary(){
    return salary;
}

void Person::set_serviceLength(int v){
    serviceLength=v;
}

int Person::get_serviceLength(){
    return serviceLength;
}

int Person::get_personID(){
    return personID;
}

void Person::set_personID(int n){
    personID=n;
}