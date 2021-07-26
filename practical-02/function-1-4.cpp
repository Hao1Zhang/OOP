#include <iostream>
#include <stdio.h>

void print_scaled_matrix(int array[3][3],int scale)
{
    int i;
    int j;
    
    for (i=0; i<3; i++)
    {
        for (j=0; j<3; j++)
        {
            array[i][j]=array[i][j] * scale;
        }
    } 
}
