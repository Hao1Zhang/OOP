#include <iostream>
using namespace std;

int *readNumbers(int n)
{   

	int *arr = new int[n];
	
	for(int i=0; i<n; i++)
	{   
		cin>>arr[i];
	}
	return arr;
}

bool palindrome(int *numbers,int length){   
	if (length<1){
		return false;
	}
    bool ret = true;
	for(int i=0; i<length;i++)
	{
        if (numbers[i] != numbers[length-i-1] ) {
            ret =false;
            break;
        }
	}
    return ret;
}
