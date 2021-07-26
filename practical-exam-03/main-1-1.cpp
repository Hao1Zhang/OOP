#include "Person.h"

using namespace std;

int main(){
    Person* a;
    a=new Person("hao","student",0.5);
    string b=a->get_name();
    cout<<b;
    string c=a->get_occupation();
    int d=a->get_salary();
    cout<<b<<c<<d<<endl;
    return 0;
}