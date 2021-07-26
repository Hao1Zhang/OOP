#include "Player.h"
#include <string>

using namespace std;

Player::Player(){
    Name= "null";
    Number= 0;
    }

// implementation of a Player constructor taking a name and number
Player::Player(int jNumber, string pName){
    Name = pName;
    Number=jNumber;
    }
// implementation of the get_name function
string Player::get_name(){
    return Name;
}

// implementation of the get_jersey_number function
int Player::get_jersey_number(){
    return Number;
}

Player::~Player(){
    
}