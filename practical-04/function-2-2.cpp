#include<iostream>

int maximum_sum(int *nums,int length){
    int sum;
    int max=0;
    //how many to choose
    for (int i=1;i<=length;i++){
        //from which one
        for (int j=0;j<=length-i;j++){
            //sum come back to 0 when every loop begins
            sum=0;
            for (int k=0;k<i;k++){
                sum=sum + *(nums+j+k);
                if (max<sum){
                    max=sum;
                }
            }
        }
    }
return max;
    
}