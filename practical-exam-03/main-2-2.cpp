#include "Player.h"


using namespace std;

int main(){
    Player* a;
    a=new Player("hao",3);
    string b=a->get_name();
    string c=a->get_occupation();
    int d=a->get_salary();
    cout<<b<<c<<d<<endl;
    return 0;
}