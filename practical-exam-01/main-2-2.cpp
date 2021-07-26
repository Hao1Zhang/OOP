#include<iostream>

extern int binary_to_number(int[],int);

int main(){
    int binary_digits[7]={1,0,1,0,1,0,1};
    std::cout<<"The binary number is changed to decimal number as: "<<binary_to_number(binary_digits,7)<<std::endl;
    return 0;
}