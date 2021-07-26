#ifndef _CART_H_
#define _CART_H_
/*
cart();                         // create an empty cart object
bool addMeerkat(meerkat cat);   // adds a meerkat to the cart, returns false if full
void emptyCart();               // remove all meerkats from the cart
void printMeerkats();           // print the name, a space, the age, then a new line
                                // for each meerkat in the order they were added
Your main program should create a cart object and 5 meerkat objects. 
The cart object is initially empty. 
Your main program must then add all 5 meerkat objects to the cart object. 
An appropriate error message must be printed by your main program when the cart is full.
 */
#include<vector>
#include "meerkat.h"

using namespace std;

class cart {
private:
    vector<meerkat> m_meerkats;
public:
    cart();
    bool addMeerkat(meerkat kat);
    void emptyCart();
    void printMeertkats();
};
#endif