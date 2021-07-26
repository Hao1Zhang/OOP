#include "Person.h"
#ifndef _PLAYER_H_
#define _PLAYER_H_

using namespace std;

class Player:public Person{
 
    public:
    Player(string n,int sl, int* l,int mm);
    
    int* get_list();
    
    int get_m();
    
    int get_salary();
    
    int searchGame(int x);
    
    private:
    static int nextID;
    int* list;
    int m;
};

#endif