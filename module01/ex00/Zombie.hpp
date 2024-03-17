#include <iostream>
#pragma once

class Zombie
{
    private:
    std::string name;
    public:
    Zombie();
    ~Zombie(); 
    std::string getName();
    void setName(std::string name);
    void announce();
};


Zombie* newZombie (std::string name);
void randomChump(std::string name);