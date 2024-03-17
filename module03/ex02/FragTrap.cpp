#include"FragTrap.hpp"
#include "ClapTrap.hpp"

FragTrap::FragTrap()
{
	this->Name = "Default";
	this->Energy= 100;
	this->HitPoint = 100;
	this->Attack = 30;
	std::cout<<"FragTrap default constructor called "<<std::endl;
}

FragTrap::FragTrap(std::string name)
{
	this->Name = name;
  	this->HitPoint = 100;
	this->Energy = 100;
	this->Attack = 30;
	std::cout<<"FragTrap parametre constructor called "<<name<<std::endl;
}

FragTrap :: FragTrap(const FragTrap &f)
{
     std::cout<<"FragTrap copy constructor" << std::endl;
    *this = f;
}

FragTrap &FragTrap :: operator=(const FragTrap &sc)
{
	std::cout<<"FragTrap copy assignment operator called" << std::endl;
    this->Name = sc.Name;
    this->HitPoint = sc.HitPoint;
    this->Energy = sc.Energy;
    this->Attack = sc.Attack;
    return(*this);

}

FragTrap::~FragTrap(void)
{
	std::cout<<"Destructor FragTrap called"<<std::endl;
}
void FragTrap::highFivesGuys(void) {
		std::cout << "FragTrap " << this->Name<< " requests positive high fives" << std::endl;

}