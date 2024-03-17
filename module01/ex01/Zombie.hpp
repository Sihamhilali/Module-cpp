#pragma once
#include <iostream>

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

Zombie* zombieHorde( int N, std::string name );