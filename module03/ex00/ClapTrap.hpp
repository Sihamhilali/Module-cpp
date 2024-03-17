#pragma once
#include <iostream>

class  ClapTrap
{
    private:
    std::string Name;
    unsigned int HitPoint;
    unsigned int Energy;
    unsigned int Attack;

    public:
    ClapTrap();
    ClapTrap(std::string name);
    ClapTrap(const ClapTrap &cpy);
    ClapTrap &operator=(const ClapTrap& cpy);
    ~ClapTrap();

    void attack(const std::string& target);
    void takeDamage(unsigned int amount);
    void beRepaired(unsigned int amount);
};