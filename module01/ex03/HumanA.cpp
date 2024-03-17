#include"Weapon.hpp"
#include"HumanA.hpp"

void HumanA::setName(std::string name)
{
   this->name = name;
}

std::string HumanA::getName()
{
    return(this->name);
}

Weapon &HumanA::getWeapon()
{
    return(this->wea);
}
void HumanA::setWeapon(Weapon &wea)
{
    this->wea = wea;
}

HumanA::HumanA(Weapon &wea) : wea(wea)
{
    
}

HumanA::HumanA(std::string name, Weapon &wea) : name(name), wea(wea)
{
    
}

void HumanA::attack()
{
    std::cout << this->name << " attacks with their " << this->wea.getType() << std::endl;
}
