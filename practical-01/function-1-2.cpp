#include<iostream>

double average(int array[], int n){
    double average =0.0;
    int sum=0;
    for (int i=0;i<n;i++){
        sum = sum+array[i];
    }
    if (n<1) {
        average=0.0;
    } 
    else {
        average=sum/n;
    }
    
    return average;
}
