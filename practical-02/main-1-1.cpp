#include <iostream>
#include <stdlib.h>
extern int diagonal(int (*)[4]);
int main()
{
    int array[4][4]={{1,2,3,4},{2,3,4,5},{3,4,5,6},{4,5,6,7}};
    std::cout << diagonal(array);
    return 0 ;
}
