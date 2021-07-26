/*
 * @Author       : Hao Zhang
 * @Date         : 2021-03-09 22:29:42
 * @LastEditors  : Hao Zhang
 * @LastEditTime : 2021-03-09 23:05:23
 * @FilePath     : \code\base\10to2.cpp
 */
#include <iostream>
/**
 * @description: 十进制转二进制，输出二进制的array
 * @param {int tens}一个十进制的数字
 * @return {int[] twos}二进制的数字array
 */
int* ten_to_two(int tens) {
    //int[100] two;
    int dev;//商 余数
    int * rem = new int[10];
    int i=0;
    while (dev!=0)
    {
        dev = tens/2;
        std::cout<<tens/2<<std::endl;
        // rem[i]=tens%2;
        // std::cout<<tens%2<<std::endl;
        i++;

    }
    return rem;
}

int main(){
    int n = 10;
    int* a = new int[10];
    ten_to_two(n);
    int length =*(&a + 1) - a;;
    //std::cout<<ten_to_two(n)<<std::endl;
//std::cout<<a[1]<<std::endl;
}