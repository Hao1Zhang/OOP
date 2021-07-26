#include <iostream>
#include "Player.h"

int main()
{   
    Player *player1, *player2;
    player1=new Player();
    player2=new Player(666,"Hao");
    cout << "player1's name is: " << player1->get_name() <<" and jersey number is: "<<player1->get_jersey_number()<< endl;
    cout << "player2's name is: " << player2->get_name() <<" and jersey number is: "<<player2->get_jersey_number()<< endl;
    
	return 0;
}
