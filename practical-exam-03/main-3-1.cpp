#include "Team.h"


using namespace std;

int main(){
   Team* team1;
   team1=new Team();
   Person **team2;
   team2=new Person*[4];
   team2=team1->get_team();
    string b=team2[0]->get_name();
    string c=team2[0]->get_occupation();
    int d=team2[0]->get_salary();
    cout<<b<<c<<d<<endl;
    
    string b1=team2[1]->get_name();
    string c1=team2[1]->get_occupation();
    int d1=team2[1]->get_salary();
    cout<<b1<<c1<<d1<<endl;
    return 0;
}