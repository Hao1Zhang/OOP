
#include "Facility.h"

int main()
{   string Facility_names[3]={"facility 1","facility 2","facility 3"};
    int repair_fee[3];
   // Facility* t;
   // t=new Facility(1,100,"a","apple");
   // t->check_repair_fee();
    Facility *Facilities[3];
    for (int i=0;i<3;i++){
        Facilities[i]=new Facility(1,100,Facility_names[i],"apple");
        repair_fee[i]=Facilities[i]->check_repair_fee();
    }
    for (int i=0;i<3;i++){
    cout<<repair_fee[i]<<""<<endl;
    }
	return 0;
}
