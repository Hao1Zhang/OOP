#include <iostream>
#include <stdlib.h>
extern bool fanarray(int*, int);
int main(int argc, char **argv)
{
    int array[]={1,2,3,2,1};
    int n = sizeof(array) / sizeof(array[0]);

    if (fanarray(array, n)) 
        cout << "true\n"; 
    else
        cout << "false\n"; 
    return 0;
}

