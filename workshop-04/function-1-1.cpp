#include<iostream>

int size_of_variable_star_t(){
    
    int a, *p;
    p = &a;
    int *t = new int;
    int m= sizeof(*t);
    return m;
}