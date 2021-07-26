#include <iostream>
#include <stdlib.h>
extern bool ascending(int*, int);
int main(int argc, char **argv)
{
    int array[] = { 20, 23, 23, 45, 78, 88 }; 
    int n = sizeof(array) / sizeof(array[0]); 
    if (ascending(array, n)) 
        cout << "true\n"; 
    else
        cout << "false\n"; 
    return 0 ;
}
