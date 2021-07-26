#include <iostream>
#include <stdlib.h>

extern int minimum(int*, int);

int main(int argc, char **argv)
{
    int array[]={1,2,3,4}
    int n=sizeof(array)/sizeof(array[0]);

    cout << minimum(array,n)<<endl;
    return 0;
}
