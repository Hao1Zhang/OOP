#include<iostream>
#include<math.h>
//this programme is to change a binary number to a decimal number
int binary_to_number(int binary_digits[], int number_of_digits){
    int decimal =0;
    //the 1 in the binary number represents 2^n 
    //add every "1"s together

    for (int i=0;i<number_of_digits;i++){
        decimal=decimal+pow(2,number_of_digits-i-1)*binary_digits[i]; 
    }
    return decimal;
}