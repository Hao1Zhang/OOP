#include <iostream>
int sum_array( int array[], int n){
    //initialize the sum
    int sum=0;
    for (int i=0;i<n; i++) {
        sum=sum+array[i];
    }
    if (n<1) {
        sum =0;
    }
    return sum;
}