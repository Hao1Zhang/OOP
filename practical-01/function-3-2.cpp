#include<iostream>

double Median(int array[], int n)
{
// First we sort the array 
    sort(array, array + n); 
  
    // check for even case 
    if (n % 2 != 0) 
        return (double)array[n / 2]; 
  
    return (double)(array[(n - 1) / 2] + array[n / 2]) / 2.0; 
} 

   
