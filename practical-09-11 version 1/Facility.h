#ifndef _FACILITY_H_
#define _FACILITY_H_
#include<string>
#include<iostream>
using namespace std;
// class definition of a facility abstract class
class Facility
{
private://private can only be accessed by friend classes
    int size,price;
    int damage_level;
    string brand,name;
    //int check_income(int membercard_income, int facility_repair,int other_cost);//to check the income of the gym      //*****not finished yet don't test

public:
    //for attributes
    Facility();//to default
    Facility(int psize,int pprice,string pname,string pbrand);//to get the facility's information

    //for behaviours
    void train(string name);//default
    int check_repair_fee(); //this is to evaluate the level of damage of facilities in range [0,1]
    // if damage level <=0.7, it can be repaired
    int repair(int damage_level);

    //implementation of the default Facility destructor
    ~Facility();
};

#endif