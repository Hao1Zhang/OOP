#include "meerkat.h"

meerkat::meerkat() {
}

string meerkat::getName() {
    return m_name;
}

void meerkat::setName(string name){
    m_name = name;
}

int meerkat::getAge() {
    return m_age;
}

void meerkat::setAge(int age){
    m_age = age;
}