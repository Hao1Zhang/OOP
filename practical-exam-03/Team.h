#include "Player.h"
#include "Coach.h"
#ifndef _TEAM_H_
#define _TEAM_H_

class Team{
    public:
    Team();
    ~Team();
    Person** persons;
    
    Person** get_team();
};
#endif
    