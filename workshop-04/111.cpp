#include<iostream>
#include<stdio.h>
int main(){
    int j=0;
    int *i;
    i=&j;
    *i=1;
    std::cout<<j<<std::endl;
    return 0;
}