#include<iostream>

extern void cpyda(double *old_array,double *new_array,int length);

int main(){
    double old_array[5]={1.1,2.2,3.3,4.4,5.5};
    double new_array[5];
    cpyda(old_array,new_array,5);
    for(int i=0;i<5;i++){
    std::cout<<new_array[i]<<std::endl;
    }
    return 0;
}