#include <iostream>
using namespace std;

int *readNumbers(int n){
	int *semesters = new int[n];
	for(int i=0; i<n; i++){
		cout<<"Please enter your number: ";
		cin>>semesters[i];
	}
	return semesters;
}


void semesterNames(int* semesters,int length){


	for(int i=0; i<length; i++)
	{
		switch(semesters[i])
		{
			case 10:cout << i <<" 10 Semester 1";
			break;
			case 20:cout << i <<" 20 Semester 2";
			break;
			case 33:cout << i <<" 33 Trimester 1"
			;break;
			case 36:cout << i <<" 16 Trimester 2";
			break;
			case 39:cout << i <<" 39 Trimester 3";
			break;
			default: cout<<i<<" not valid";
			break;
		}
		cout<<endl;
	}
}
