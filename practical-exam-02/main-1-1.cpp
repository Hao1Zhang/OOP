
#include <iostream>


extern int *readNumbers(int n);
extern void printNumbers(int *numbers,int length);
int main(){
    int *numbers = readNumbers(3);
    printNumbers(numbers,3);
    delete[] numbers;
	return 0 ;
}
