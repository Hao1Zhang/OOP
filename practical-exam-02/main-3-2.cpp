#include <iostream>

extern int *readNumbers(int n);
extern void printNumbers(int *negateNumbers,int length);
int *reverseArray(int *numbers,int length);

int main(){
    int *numbers = readNumbers(5);
    int *reverseNumbers = reverseArray(numbers,5);
    printNumbers(reverseNumbers,5);
    delete [] numbers;
    delete [] reverseNumbers;
}