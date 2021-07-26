#ifndef _VIP_H_
#define _VIP_H_
#include<string>
#include<iostream>
using namespace std;

class Vip
{
private://private can only be accessed by friend classes     all the vip information is private because they are important
    string name;//there are at most 10 vips  with a '\0'at the end
    static int id;
    

public:
    //for attributes
    Vip();//to default
    Vip(string pname);//implement of the Facility class
    string get_name();
    int    get_id();
    ~Vip();
};
#endif