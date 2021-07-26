#include <iostream>
// function to convert decimal to binary 
void arithmetic(int n) 
{ 
    // array to store binary number 
    int arithmetic[32]; 
  
    int i=0;
    // counter for binary array 
    for (; n>0; i++)
    {
  
        // storing remainder in binary array 
        arithmetic[i] = n % 2; 
        n = n / 2; 
        
    } 
  
    // printing binary array in reverse order 
    for (int j = i - 1; j >= 0; j--) 
    {
        std::cout << arithmetic[j]; 
    }
} 
// Driver program to test above function 
int main() 
{ 
    int n = 17; 
    arithmetic(n);
    return 0; 
} 
