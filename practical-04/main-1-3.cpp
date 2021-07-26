#include<iostream>

extern void cpyia(int odd_array[], int new_array[],int length);

int main(){
    int old_array[5]={1,2,3,4,5};
    int new_array[5];
    cpyia(old_array,new_array,5);
    for(int i=0;i<5;i++){
    std::cout<<new_array[i]<<std::endl;
    }
    return 0;
}