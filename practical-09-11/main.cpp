
#include "Facility.h"
#include "Vip.h"
// this programme is to build a gym system following the process
//    1         set faciliies-------3 table tennis and 3 treadmills
//    2         invite costomers-----Karen Liu Zhang with id 1 2 3 respectively
//    3         some useful functions
//    4         check the damage of facilities
//    5         coculate the income
int main()
{   
    int vip_fee=500;//it cost 500 dollars to but vip
    
    //step 1
    cout<<"Welcome to our gym, now set facilities!!"<<endl; 
    string Table_tennis_names[2]={"Table 1","Table 2"};
    Table_tennis *Tables[3] ;
    string Treadmill_names[2]={"Treadmill 1","Treadmill 2"};
    Treadmill *Treadmills[3] ;
    for ( int i = 0 ; i < 2 ; i++ )//implement of two kinds of facilities
    {
      Tables[i]=new Table_tennis(Table_tennis_names[i]);
    }
    for ( int i = 0 ; i < 2 ; i++ )//implement of two kinds of facilities
    {
      Treadmills[i]=new Treadmill(Treadmill_names[i]);
    }
    
    
    //step 2
    cout<<"Good job!!! now invite vips"<<endl;
    string Vip_names[4]={"Karen","Liu","Hao","Zhang"};
    Vip *Vips[4];
    for ( int i = 0 ; i < 4 ; i++ )//implement of vips
    {
      Vips[i]=new Vip(Vip_names[i]);
    }
    
    
    //step 3
    cout<<endl;
    cout<<"Congratulations, here we can do some exercise"<<endl;
    //three people can choose table tennis or tread mill.
    int Tennis_index=0, Treadmill_index=0;
    for (int i=0;i<4;i++){
        cout<<Vip_names[i]<<", do you want to play table tennis(type 1) or treadmill(type 2): ";
        int choice;
        cin>>choice;
        
        switch (choice){
            case 1:   //choose table tennis
            if (Tennis_index==2){
                cout<<"Sorry, table tennis is full,please wait"<<endl;
                break;
            }
            Tables[Tennis_index]->train();
            Tennis_index++;
            break;
            case 2:   //choose Treadmill
            if (Treadmill_index==2){
                cout<<"Sorry, treadmill is full,please wait"<<endl;
                break;
            }
            Treadmills[Treadmill_index]->start_button();
            Treadmills[Treadmill_index]->change_speed();
            Treadmills[Treadmill_index]->change_angle();
            Treadmills[Treadmill_index]->train();
            Treadmills[Treadmill_index]->start_button();
            break;
            default:
            cout<<"invalid"<<endl;
        }
    }
    
    
    //step 4
    
    int* repair_fee= new int[4]; //implementation of repairfee array
    int j=0;//initialize
    for ( int i = 0 ; i < 2 ; i++ )//check the damage
    {
      repair_fee[j]=Tables[i]->check_repair_fee();
      j++;
    }
    for ( int i = 0 ; i < 2 ; i++ )//check the damage
    {
      repair_fee[j]=Treadmills[i]->check_repair_fee();
      j++;
    }
    
    //step 5
    int vip_count=4;//4 vips
    int total_cost=0;//initialize
    for (int i=0;i<4;i++){
        total_cost=total_cost+repair_fee[i];
    }
    int income =vip_count*vip_fee;
    int total_income=income-total_cost;
    cout<<"you earn "<<total_income<<" dollars"<<endl;
    
    
    //delete arrays
    for ( int i = 0 ; i < 2 ; i++ )//implement of two kinds of facilities
    {
      delete Tables[i];
      delete Treadmills[i];
      }
	return 0;
}
