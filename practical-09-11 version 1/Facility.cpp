#include "Facility.h"
#include <string>

using namespace std;


// default facility
Facility::Facility(){
    size= 0;
    price= 0;
    name="unknown";
    brand="unknown";
}

//to get the facility's information
Facility::Facility(string pname,string pbrand, int psize, int pprice)
{
    size=psize;//in square metres
    price=pprice;
    name=pname;
    brand=pbrand;
    cout<<name<<" is created with brand "<<brand<<" and size "<<size<<" m^2 with price "<<price<<endl;
}

int Facility::repair(int damage_level){
    int repair_fee=damage_level*price/10;
    cout<<"needs repair fee: "<<repair_fee<<endl;
    return repair_fee;
}

//this is to check the repair fee by evaluating the level of damage of facilities in range [0,1]
int Facility::check_repair_fee(){
    //get damage level input
    cout<<"Check the "<<name<<" and evaluate the damage level in range [0,10]: ";
    cin>>damage_level;
    //default invalid number
    while (damage_level<0 ||damage_level>10){
        cout<<"invalid,try again: "<<endl;
        cin>>damage_level;
    }
    // if damage level is less than 0.7, it can be repaired or should buy a new one
    if (damage_level<7){
        return repair(damage_level);
    }
    else {
        cout<<"you need to buy a new one with price: "<<price<<endl;
        return price;// it needs full price to buy a new one
    }
}

Facility::~Facility(){
    
}


