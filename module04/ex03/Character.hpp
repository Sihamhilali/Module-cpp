#pragma once
#include<iostream>
# include "ICharacter.hpp"
# include "AMateria.hpp"

class ICharacter;
class Character: public ICharacter
{
    private:
        std::string name;
        AMateria *inventory[4];
    public:
        Character(const std::string& name);
        Character(const Character& obj);
        Character& operator=(const Character& obj);
        ~Character();
        void setName(const std::string& name);
        std::string const & getName() const;
        void equip(AMateria* m);
        void unequip(int idx);
        void use(int idx, ICharacter& target);
};