#include "SortPerson.h"

using namespace std;

void sort(Person **people,int n){
     int i, id, j;  
    for (i = 1; i < n; i++) 
    {  
        id = people[i]->get_personID();  
        j = i - 1;  
  
        while (j >= 0 && people[j]->get_personID() > id) 
        {  
            people[j + 1] = people[j];  
            j = j - 1;  
        }  
        people[j + 1] = people[i];  
    }  
}