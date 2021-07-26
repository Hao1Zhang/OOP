#include<iostream>

//this function is to check whether the number is a panlindrome
bool is_a_palindrome(int integers[], int length){
    int yes_or_no=1;
    //to check if the length is equal to or less than 0
    if (length<=0){
        yes_or_no=false;
    }
    else {
      // check every number with the the one in the same place backwards 
      for (int i=0;i<length;i++){
          if (integers[i]!=integers[length-1-i]){
              yes_or_no=false;
          }
      }   
    }
    return yes_or_no;
}

int sum_elements(int integers[], int length){
    int sum=0;
    for (int i=0;i<length;i++){
        sum = sum+integers[i];
    }
    return sum;
}


int sum_if_a_palindrome(int integers[], int length){
    
    int sum=0;
    if (length<=0){
        sum=-1;
    }
    else{
    if (is_a_palindrome(integers,length)==false){
        sum= -2;
    }
    
    else {
        sum=sum_elements(integers,length);
        }
    
    }
    return sum;
}