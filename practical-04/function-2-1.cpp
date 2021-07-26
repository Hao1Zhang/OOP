#include<iostream>

void print_sevens(int *nums,int length){
     for (int i=0;i<length;i++){
         std::cout<<*(nums+i)*7<<std::endl;
     }
}