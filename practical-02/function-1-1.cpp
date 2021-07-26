#include <iostream>
#include <stdio.h>

int diagonal(int array[4][4])
{
    int diagonal=0;
    int i;
    int j;
    for (i=0; i<4; i++)
    {
        for (j=0; j<4; j++)
        { 
            if (i==j)
            {
                diagonal=diagonal+array[i][j];
            }         
         }
    }
    return diagonal;
}
