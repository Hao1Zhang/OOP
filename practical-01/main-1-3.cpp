/*
 * @Author       : Hao Zhang
 * @Date         : 2020-03-19 02:07:48
 * @LastEditors  : Hao Zhang
 * @LastEditTime : 2021-07-13 15:58:16
 * @FilePath     : \practical-01\main-1-3.cpp
 */
#include<iostream>


int count(int array[], int n, int number){
   int count=0;
    for (int i=0; i<n; i++){
      if (array[i]==number){
          count++;
      }  
    }

    return count;
}

int main(){
   int array[6]={7,7,7,4,5,98};
   int number =7;
    std::cout<<"there are "<<count(array,6,number)<<" favourate number in the array"<<std::endl;
    return 0;
}