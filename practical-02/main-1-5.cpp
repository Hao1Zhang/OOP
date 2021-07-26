#include <iostream>
#include <stdlib.h>

extern void print_scaled_matrix(int (*)[3][3], int (*)[3][3]);
int main()
{
    int array1[3][3] = {{0,1,2},{3,4,5},{6,7,8}} ;
    int array2[3][3] = {{0,0,0},{2,2,2},{-5,-4,8}} ;
    int sum_array=0;
    print_scaled_matrix(array1,array2) ;

    for (int i = 0; i < 3; i++) 
    { 
        for (int j = 0; j < 3; j++)
        {  
            std::cout << sum_array << " ";
        }
        std::cout << "\n";
    }
    return 0;void 
}
