#pragma once
#include "ClapTrap.hpp"


class FragTrap:public ClapTrap
{
    public :
        FragTrap();
        FragTrap(std::string Name);
        FragTrap(const FragTrap &f);
        FragTrap &operator=(const FragTrap &ft);
        ~FragTrap();

        void highFivesGuys(void);
};