#include <iostream>
#include <stdio.h>

void print_summed_matrices(int array1[3][3],int array2[3][3])
{
    int i;
    int j;
    int sum_array=0;
    for (i=0; i<3; i++)
    {
        for (j=0; j<3; j++)
        {
            
            sum_array=array1[i][j] + array2[i][j];
        }
    } 
}
