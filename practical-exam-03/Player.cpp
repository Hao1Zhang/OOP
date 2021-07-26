#include "Player.h"

using namespace std;

int Player::nextID=1000;

Player::Player(string n,int sl, int* l,int mm):Person(n,"player",sl){
    list=l;
    m=mm;
    personID=nextID;
    nextID++;
    
}

int* Player::get_list(){
    return list;
}

int Player::get_m(){
    return m;
}

int Player::get_salary(){
    if (serviceLength<20){
        return salary;
    }
    else {
        return 3*salary;
    }
}

int Player::searchGame(int x){
    for (int i=0;i<m;i++){
        if (list[i]==x){
            return i;
        }
    }
    return -1;
}