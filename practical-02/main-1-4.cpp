#include <iostream>
#include <stdlib.h>

extern void print_scaled_matrix(int (*)[3][3], int scale);
int main()
{
    int scale = 3 ;
    int array[3][3] = {{0,5,2},{3,0,5},{6,7,0}} ;
    print_scaled_matrix(array,scale) ;

    for (int i = 0; i < scale; i++) 
    { 
        for (int j = 0; j < scale; j++)
        {  
            std::cout << array[i][j] << " ";
        }
        std::cout << "\n";
    }
    return 0;
}
