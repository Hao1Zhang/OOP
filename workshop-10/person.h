#ifndef _PERSON_H_
#define _PERSON_H_
/*
Your main program should create four person objects and change and display their details. 
Your main program should demonstrate that the name and salary information is changed.
This class will also be used in problem 2-2.
 */
#include<string>

using namespace std;

class person {
private:
    int    m_salary;
    string m_name;
public:
    person(string myName,int Salary);
    person() {
        m_salary = 0;
    }
    string getName();
    void   setName(string name);
    int    getSalary();
    void   setSalary(int salary);
};
#endif