#include <iostream>
#include <stdio.h>
void count_numbers(int array[4][4])
{
    int num[10]={0};
    int i;
    int j;
    for (i=0; i<4; i++)
    {
        for (j=0; j<4; j++)
        {
            if (array[i][j]>=0 && array[i][j]<10)
            {
                num[array[i][j]]++;
            }
        }
    }
    for (i=0; i<10; i++)
    {
         std::cout << i << ":" << num[i] << ';';
    }
    std::cout << '\n';
}

