#include "Vip.h"

using namespace std;

// implementation of the static intint 
int Vip::id=0;
//implemention of vip class default constructor
Vip::Vip(){
    name= "null";
    }

// implementation of a vip constructor taking a name and auto-take an id
Vip::Vip(string pname){
    name = pname;
    id++;
    cout<<name<<" is registered as a vip with id "<<id<<endl;
    }
// implementation of the get_name function
string Vip::get_name(){
    return name;
}

// implementation of the get_jersey_number function
int Vip::get_id(){
    return id;
}

//implemention of vip class default destructor
Vip::~Vip(){
    
}