#pragma once
#include "AMateria.hpp"
#include <iostream>

class ICharacter;

class Ice : public AMateria
{
    public :
        Ice();
        ~Ice();
        Ice(const Ice &I);
        AMateria* clone() const;
        void use(ICharacter& target);
};
