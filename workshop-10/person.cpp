#include "person.h"

person::person(string myName,int Salary) {
    m_name = myName;
    m_salary = Salary;
}

string person::getName() {
    return m_name;
}

void person::setName(string name){
    m_name = name;
}

int person::getSalary() {
    return m_salary;
}

void person::setSalary(int salary){
    m_salary = salary;
}