#include "Facility.h"


using namespace std;


// default facility
Facility::Facility(){
    behaviour="?";
    price= 0;
    name="unknown";
    brand="unknown";
}

//to get the facility's information
Facility::Facility(string pname,string pbrand, string pbehaviour, int pprice)
{
    price=pprice;
    name=pname;
    brand=pbrand;
    behaviour=pbehaviour;
    cout<<name<<" is created with brand "<<brand<<" with price "<<price<<endl;
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

void Facility::train(){
     cout<<name<<" is used with "<<behaviour<<endl;
}

Facility::~Facility(){
    }




// implementaion of default table_tennis constructor
Table_tennis::Table_tennis():Facility("?","buterfly","a sound 'ping ping pong pong.'",550)
{
    
}

//to get the Table_tennis's information
Table_tennis::Table_tennis(string pname):Facility(pname,"Buterfly","a sound 'ping ping pong pong.'",550)
{
    }
Table_tennis::~Table_tennis()
{
    }




//Tread mill default
Treadmill::Treadmill():Facility("?","Everfit","a pretty good looking person running on it.",1000)
{  //set off speed=0 angle=0 at the begining
    power=0;
    speed=1.0;
    angle=0;
}

//implementaion of default table_tennis constructor
Treadmill::Treadmill(string pname):Facility(pname,"Everfit","a pretty good looking person running on it.",1000)
{  //set off speed=0 angle=0 at the begining
    power=0;
    speed=1.0;
    angle=0;
}

void Treadmill::start_button()//to switch the on/off
{
    switch (power){
    case 0:
        power=1;
        cout<<name<<" start with speed "<<speed<<" and angle "<<angle<<endl;
        break;
    
    case 1:
        power=0;
        speed=1.0;
        angle=0;
        cout<<name<<" stops "<<endl;
    }
}

void Treadmill::change_speed() //this is to change the speed from 1.0-10.0 with one decimal space
{
 cout<<"please enter a speed: ";
 cin>>speed;
 while (speed<1.0||speed>10.0){
     cout<<"invalid, try again: ";
     cin>>speed;
 }
 cout<<"the speed changes to "<<speed<<endl;
}

void Treadmill::change_angle() //this is to change the angle from 0-45 degree
{
 cout<<"please enter an angle: ";
 cin>>speed;
 while (angle<0||angle>45){
     cout<<"invalid, try again: ";
     cin>>speed;
 }
 cout<<"the angle changes to "<<angle<<endl;;
}
Treadmill::~Treadmill()
{
    }
