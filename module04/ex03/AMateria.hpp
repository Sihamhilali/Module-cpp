
#pragma once
#include<iostream>
#include"ICharacter.hpp"
class ICharacter;

class AMateria
{
    protected :
        std::string type;
    public :
        AMateria(std::string const &type);
        AMateria();
        virtual ~AMateria();
        AMateria(const AMateria &Am);
        AMateria &operator=(const AMateria &Am);
        std::string const &getType() const;
        void setType(std::string type);
        virtual AMateria* clone() const = 0;
        virtual void use(ICharacter& target);
};