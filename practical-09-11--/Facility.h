#ifndef _FACILITY_H_
#define _FACILITY_H_
#include<string>
#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;
// class definition of a facility abstract class
class Facility
{
private://private can only be accessed by friend classes
    int size,price;
    int damage_level;
    string brand,name;
    string behaviour;
    int repair(int damage_level);
    

public:
    //for attributes
    Facility();//to default
    Facility(string pname,string pbrand,string pbehaviour,int pprice);//implement of the Facility class

    //for behaviours
    void train();//default
    int check_repair_fee(); //this is to evaluate the level of damage of facilities in range [0,1]
    // if damage level <=0.7, it can be repaired
    
    
    //default Facility destructor
    ~Facility();
    
    //set Table_tennis and Treadmill as friend classes
    friend class Table_tennis;
    friend class Treadmill;
};

// class definition of a table tennis abstract class
class Table_tennis:public Facility
{
private://private can only be accessed by friend classes
    

public:
    Table_tennis();//default
    Table_tennis(string pname);//implement of the Table_tennis subclass
    ~Table_tennis();
};


// class definition of a treadmill abstract class
class Treadmill:public Facility
{
private://private can only be accessed by friend classes
    float speed;
    int angle;//in degree between 0 and 45 degree
    bool power;//1=on  0=off

public:
    Treadmill();//default
    Treadmill(string pname);//implement of the Treadmill subclass
    void start_button();//to switch the on/off
    void change_speed();
    void change_angle();
    ~Treadmill();
};
#endif
