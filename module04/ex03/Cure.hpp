#pragma once
#include "AMateria.hpp"
#include <iostream>

class ICharacter;

class Cure:public AMateria
{
    public :
    Cure();
    ~Cure();
    Cure(const Cure &C);
    AMateria* clone() const;
    void use(ICharacter& target);
};