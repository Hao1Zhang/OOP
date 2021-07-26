#include <iostream>
#include <stdlib.h>

extern int binary_to_number(int (*)[6] , int number_of_digits)
int main()
{
    int binary_digits[6] = { 1, 0, 1, 1, 1, 0 }; 
    int number_of_digits=binary_to_number(binary_digits,(sizeof(binary_digits)/sizeof(binary_digits[0])));
    cout << "" << binary_to_number(binary_digits,number_of_digits) << endl;
    
}

