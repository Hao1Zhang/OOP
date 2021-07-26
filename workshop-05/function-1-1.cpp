#include<iostream>
using namespace std;
int *readNumbers(int n){
    int *numbers= new int[n];
    for (int i=0;i<10;i++){
        cout<<"enter your number: ";
        cin>>numbers[i];
        
    }
    return numbers;
}


void printNumbers(int *numbers,int length){
     for (int i=0;i<10;i++){
        cout<<i<<""<<numbers[i]<<endl;
        
     }
}