#include<iostream>

extern void print_sevens(int *nums,int length);

int main(){
    int numbers[5]={1,2,3,4,5};
    int *nums;
    nums=numbers;
    print_sevens(nums,5);
    
    return 0;
}