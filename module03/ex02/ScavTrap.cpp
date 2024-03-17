#include "ScavTrap.hpp"
#include "ClapTrap.hpp"

ScavTrap::ScavTrap()
{
	this->Name = "Default";
	this->Energy= 100;
	this->HitPoint = 100;
	this->Attack = 30;
	std::cout << " ScavTrap default constructor called" << std::endl;
}

ScavTrap :: ScavTrap(const ScavTrap &s)
{
    std::cout<<"  ScavTrap copy constructor" << std::endl;
    *this = s;
}
ScavTrap::ScavTrap(std::string name)
{
	this->Name = name;
	this->HitPoint = 100;
	this->Energy = 50;
	this->Attack = 20;
	std::cout << "constructor ScavTrap parametre called " << name<< std::endl;
}

void ScavTrap::attack(const std::string& target)
{
	if (this->Energy== 0)
	{
		std::cout << "ScavTrap have no energy !" << std::endl;
		return;
	}
	std::cout << "ScavTrap " << this->Name
	     << " attacks "<<target 
		 << " points of damage!" << std::endl;
	this->Energy-= 1;
}

void ScavTrap::guardGate(void)
{
	std::cout << "ScavTrap " << this->Name<< " is now in Gate keeper mode" << std::endl;
}


ScavTrap &ScavTrap :: operator=(const ScavTrap &sc)
{
	std::cout<<"ScavTrap copy assignment operator called" << std::endl;
    this->Name = sc.Name;
    this->HitPoint = sc.HitPoint;
    this->Energy = sc.Energy;
    this->Attack = sc.Attack;
    return(*this);

}
ScavTrap::~ScavTrap(void) {
	std::cout << "Destructor ScavTrap called" << std::endl;
}