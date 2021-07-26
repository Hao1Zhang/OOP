#include <iostream>
#include <stdlib.h>
extern int sumtwo(int*, int*, int);

int main(int argc, char **argv)
{
    int array[]={1,2,3,4};
    int secondarray[]={2,3,4,5};
    int n=sizeof(array)/sizeof(array[0]);
    cout << "the sum is" << sumtwo(array, secondarray, n)

    return 0;
}
