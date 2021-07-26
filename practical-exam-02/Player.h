#ifndef _PLAYER_H_
#define _PLAYER_H_
#include<string>
#include<iostream>

using namespace std;

class Player {
private:
    string Name;
    int Number;
    
public:
    Player();
    Player(int jNumber, string pName);
    string get_name();
    int    get_jersey_number();
    ~Player();
};
#endif
