#include "meerkat.h"
#include "cart.h"
#include <iostream>
/*
Your main program should create a cart object and 5 meerkat objects. 
The cart object is initially empty. Your main program must then add all 5 meerkat objects to the cart object. 
An appropriate error message must be printed by your main program when the cart is full.
*/

using namespace std;

int main() {
    cart aCart;
    meerkat meerkats[5];
    meerkat sixth;
    sixth.setName("Person6");
    string names[5] = {"Person1", "Person2", "Person3", "Person4", "Person5"};
    for (size_t i = 0; i < 4; i++)
    {
        meerkats[i].setName(names[i]);
        aCart.addMeerkat(meerkats[i]);
    }
    aCart.addMeerkat(sixth);
}
