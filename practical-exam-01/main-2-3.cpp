#include<iostream>

extern int sum_if_a_palindrome(int[],int);

int main(){
    int integers[7]={1,0,1,0,1,0,1};
    std::cout<<"The 1st sum of the palindrome number is: "<<sum_if_a_palindrome(integers,7)<<std::endl;
    
     
     int integers2[7]={1,0,1,0,1,0,1};
    std::cout<<"The 2nd sum of the palindrome number is: "<<sum_if_a_palindrome(integers2,0)<<std::endl;
    
    
     int integers3[7]={1,0,1,0,0,0,1};
    std::cout<<"The 3rd sum of the palindrome number is: "<<sum_if_a_palindrome(integers3,7)<<std::endl;
    
    return 0;
}