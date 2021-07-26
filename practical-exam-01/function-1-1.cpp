#include<iostream>
//this function is to show the 10*10 array as a matrix
void printer(int array[10][10]){
    
    for (int i=0;i<10;i++){
        for (int j=0;j<10;j++){
            //loops to add a space in the row 
            std::cout<<array[i][j]<<" ";
        }
        //to start new line between rows
        std::cout<<'\n';
    }
}