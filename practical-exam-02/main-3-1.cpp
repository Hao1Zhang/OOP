#include <iostream>
using namespace std;

extern int *readNumbers(int n) ;
bool palindrome(int *numbers,int length);

int main()
{   
	
	int *numbers = readNumbers(7);
	cout<<"is it palidrome? "<<palindrome(numbers,7)<<endl;
	delete[] numbers;
	return 0;
}
