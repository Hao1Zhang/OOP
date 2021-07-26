#include<iostream>
extern int sum_min_and_max(int integers[], int length);
int main(){
    int integer1[7]={1,3,5,7,9,11,13};
    
    std::cout<<"the sum of max and min is: "<<sum_min_and_max(integer1, 7)<<std::endl;
    std::cout<<"the sum of max and min is: "<<sum_min_and_max(integer1, 0)<<std::endl;
    
    return 0;
}