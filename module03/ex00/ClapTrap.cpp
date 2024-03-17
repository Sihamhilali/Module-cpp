#include"ClapTrap.hpp"

ClapTrap::ClapTrap():Name("default"), HitPoint(10), Energy(10), Attack(0)
{
    std::cout<<" ClapTrap Default constructor called "<< Name<<std::endl;
}

ClapTrap::ClapTrap(std::string name) : Name(name), HitPoint(10), Energy(10), Attack(0)
{
    std::cout<<" ClapTrap constructor  parametre "<<name<<std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &cpy)
{
    std::cout<<"ClapTrap  copy constructor" << std::endl;
    *this = cpy;
}

ClapTrap &ClapTrap::operator=(const ClapTrap &cpy)
{
     std::cout<<" ClapTrap copy assignment operator called" << std::endl;
    this->Name = cpy.Name;
    this->HitPoint = cpy.HitPoint;
    this->Energy = cpy.Energy;
    this->Attack = cpy.Attack;
    return(*this);
}

void ClapTrap:: attack(const std::string& target)
{
    if(this->Energy == 0)
    {
        std::cout <<" ClapTrap has no energy  "<<std::endl;
        return;
    }
    std::cout<<"ClapTrap "<<this->Name<<" attacks "<<target<<" , causing points of damage"<<std::endl;
    this->Energy -= 1;
    std::cout <<Energy << std::endl;
}

void ClapTrap:: takeDamage(unsigned int amount)
{
    if(amount >= this->HitPoint || this->HitPoint == 0)
    {
        return;
    }
    this->HitPoint -= amount;
     std::cout<<"ClapTrap "<<this->Name<<", causing "<<amount<< " points of damage"<<std::endl;
}

void ClapTrap:: beRepaired(unsigned int amount)
{
    if(this->Energy == 0)
    {
        return;
    }
    this->HitPoint += amount;
    this->Energy -= 1;
    std::cout<<"ClapTrap "<<this->Name<<" , causing " << amount <<" points of damage"<<std::endl;
}

ClapTrap::~ClapTrap()
{
    std::cout<<" ClapTrap Destructor called"<<std::endl;
}