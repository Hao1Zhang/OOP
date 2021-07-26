#include<iostream>
#include<string>

#ifndef _PERSON_H_
#define _PERSON_H_

using namespace std;

class Person{
    public:
    
    Person();
    Person(string n,string o,int sl);
    string get_name();
    void set_name(string n);
    
    string get_occupation();
    void set_occupation(string n);
    
    void set_salary(int s);
    virtual int get_salary() =0;
    
    void set_serviceLength(int sl);
    int get_serviceLength();
    
    int get_personID();
    void set_personID(int n);
    
    protected:
    
    int salary;
    int serviceLength;
    int personID;
    
    private:
    
    string name;
    string occupation;
    
};

#endif