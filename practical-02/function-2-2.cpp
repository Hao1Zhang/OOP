#include <iostream>
#include <stdio.h>

int binary_to_number(int binary_digits[], int number_of_digits)
{
    int sum = 0;
    int n = -1;
    int i = 0;

    for ( i = number_of_digits - 1; i >= 0; i--){
            n++;

            if (binary_digits[i] == 1)
                sum = sum + (2^n);
    }
    return sum;
}                                                                              
