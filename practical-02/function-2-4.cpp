#include<iostream>



int max_integer(int integers[], int length){
    int max=integers[0];
    if (length<=0){
        max=-1;
    }
    else {
        for (int i=0; i<length;i++){
            if (max<integers[i]){
                max=integers[i];
            }
        }
    }
    return max;
}

int min_integer(int integers[], int length){
    int min=integers[0];
    if (length<=0){
        min=-1;
    }
    else {
        for (int i=0; i<length;i++){
            if (min>integers[i]){
                min=integers[i];
            }
        }
    }
    return min;
}

int sum_min_and_max(int integers[], int length){
    int sum;
    if (length<=0){
        sum=-1;
    }
    else {
        sum = max_integer(integers,length)+min_integer(integers,length);
    }
    return sum;
}