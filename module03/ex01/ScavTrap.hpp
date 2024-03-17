#pragma once
#include "ClapTrap.hpp"
#include <iostream>

class ScavTrap : public ClapTrap
{
    public:
        ScavTrap();
        ScavTrap(std::string name);
        ScavTrap(const ScavTrap &s);
        ScavTrap &operator=(const ScavTrap &sc);
        ~ScavTrap();
        void attack(const std::string& target);
		void guardGate(void);

};
