
#include<iostream>
using namespace std;
int *readNumbers(int n) {
    int *numbers = new int[n];
    for( int i =0;i<n;i++){
 //       cout<<"Please input your number: ";
        cin >> numbers[i];
    }
    return numbers;
}

void printNumbers(int *negateNumbers,int length){
    for( int i =0;i<length;i++){
        cout << i << " " <<  negateNumbers[i] << endl;
    }
}

int *reverseArray(int *numbers,int length){
    int *reverseNumbers = new int[length];
    for (int i=0;i<length;i++){
        reverseNumbers[i]=numbers[length-i-1];
    }
    return reverseNumbers;
}