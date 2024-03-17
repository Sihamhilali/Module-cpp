#include"Character.hpp"
#include"AMateria.hpp"
Character::Character(std::string const & name) : name(name){
    for (int i = 0; i < 4; ++i) {
        inventory[i] = NULL;
    }
}

Character::~Character()
{
    for (int i = 0; i < 4; ++i)
    {
        delete inventory[i];
    }
}

Character::Character(const Character& IN)
{
    *this = IN;
}

Character& Character::operator=(const Character& IN)
{
    for (int i = 0; i < 4; ++i)
    {
        if(this->inventory[i])
        {
            delete this->inventory[i];
            this->inventory[i] = IN.inventory[i]; 
        }
    }
    return *this;
}

std::string const & Character::getName() const
{
    return (name);
}

void Character::equip(AMateria* m)
{
    for(int i = 0; i < 4; ++i)
        if(!inventory[i])
        {
            inventory[i] = m;
            return ;
        }
}

void Character::unequip(int idx)
{
    if(idx < 0 || idx >=4 || !inventory[idx])
    {
        return;
    }
    inventory[idx] = NULL;
}

void Character::use(int idx, ICharacter& target)
{
    if(idx < 0 || idx >= 4 || !inventory[idx])
    {
        return;
    }
    inventory[idx]->use(target);
}