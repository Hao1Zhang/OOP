#include <iostream>
#include <stdio.h>

int identity(int array[10][10])
{
    int i;
    int j;
    for (i=0; i<10; i++)
    {
        for (j=0; j<10; j++)
        {
            if (i == j && array[i][j]!=0)
                return false;
            if (i !=j && array[i][j]!=0)
                return false;
                
        }
    } 
    return true;
}
