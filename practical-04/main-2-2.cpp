#include<iostream>

extern int maximum_sum(int *nums,int length);

int main(){
    int numbers[10]={31,-41,59,26,-53,58,97,-93,-23,84};
    int *nums;
    nums=numbers;
    int max = maximum_sum(nums,10);
    std::cout<<max<<std::endl;
    return 0;
}