#include "Team.h"

Team::Team(){
    persons=new Person*[5];
    persons[0]=new Coach("Coach1",10);
    persons[4]=new Coach("Coach2",20);
    char buffer[32];
    for (int i=1;i<4;i++){
        sprintf(buffer,"%s%d","Player",i);
        int* l=new int[2];
        l[0]=1;
        l[1]=2;
        persons[i]=new Player(buffer,10,l,2);
    }
    
    
    
}

Team::~Team(){
        
    }
    
    Person **Team::get_team(){
        return persons;
    }