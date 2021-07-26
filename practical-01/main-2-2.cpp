#include <iostream>
#include <stdlib.h>

extern int maximum(int*, int);

int main(int argc, char **argv)
{
    int array[]={1,2,3,4}
    int n=sizeof(array)/sizeof(array[0]);

    cout << maximum(array,n)<<endl;
    return 0;
}
