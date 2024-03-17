#include"Weapon.hpp"
#include"HumanB.hpp"

HumanB::HumanB()
{
    wea = NULL;
}
HumanB::~HumanB()
{

}

void HumanB::setName(std::string name)
{
   this->name = name;
}

std::string HumanB::getName()
{
    return(this->name);
}

Weapon *HumanB::getWeapon()
{
    return(this->wea);
}

HumanB::HumanB(std::string str) : name(str)
{
    
}

void HumanB::setWeapon(Weapon &wea)
{
    this->wea = &wea;
}

void HumanB::attack()
{
    std::cout << this->name << " attacks with their " << this->wea->getType() << std::endl;
}
