#include <iostream>
#include <stdlib.h>
extern bool Median(int*, int);
int main(int argc, char **argv)

{
     int array[]={1,2,4,7,3,9,10,11};
     int n = sizeof(array) / sizeof(array[0]);

     cout<<Median(array,n)<<endl;
}
 
