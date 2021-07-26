/*
 * @Author       : Hao Zhang
 * @Date         : 2020-03-19 01:49:54
 * @LastEditors  : Hao Zhang
 * @LastEditTime : 2021-07-13 15:57:42
 * @FilePath     : \practical-01\main-1-2.cpp
 */
#include <iostream>
#include <stdlib.h>

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


int main(int argc,char **argv){
    int array[5] = {5,5,6,7,8};
    
	std::cout<<"the number is:"<<average(array,5)<<std::endl;
	return 0 ;
}
