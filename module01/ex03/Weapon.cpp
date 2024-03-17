#include"Weapon.hpp"

Weapon::Weapon()
{
    
}

void Weapon::setType(std::string type)
{
    this->type = type;
}

const std::string Weapon::getType()
{
    return(this->type);
}

Weapon::Weapon(std::string str)
{
    this->type = str;
}

Weapon::~Weapon()
{

}