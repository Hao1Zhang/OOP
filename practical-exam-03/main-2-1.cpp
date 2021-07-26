#include "Coach.h"


using namespace std;

int main(){
    Coach* a;
    a=new Coach("hao",100);
    string b=a->get_name();
    string c=a->get_occupation();
    int d=a->get_salary();
    cout<<b<<c<<d<<endl;
    return 0;
}