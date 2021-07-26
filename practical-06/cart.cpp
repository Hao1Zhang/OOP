#include "cart.h"
#include "meerkat.h"
#include <iostream>
using namespace std;

const size_t limit = 5;
cart::cart() {
}

bool cart::addMeerkat(meerkat kat){
    if( limit > m_meerkats.size()){
        m_meerkats.push_back(kat);
        return true;
    } else {
        cout << "Cart is full";
        return false;
    }

}
void cart::emptyCart(){
    m_meerkats.clear();
}
void cart::printMeertkats(){
    for( size_t i = 0; i < m_meerkats.size(); i++ ) {
        meerkat kat = m_meerkats[i];
        cout << "name: " << kat.getName() << endl;
    }
}