
#include"WrongAnimal.hpp"

WrongAnimal::WrongAnimal()
{
     std::cout << "default WrongAnimal constructor called" << std::endl;
}

WrongAnimal::~WrongAnimal()
{
  std::cout << "default WrongAnimal destructor called" << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal &WA)
{
    std::cout << "copy WrongAnimal constructor called" << std::endl;
    *this = WA;
}

void WrongAnimal::makeSound() const
{
    std::cout<<"WrongAnimal makeSound called"<<std::endl;
}

std::string WrongAnimal::getType() const
{
    return(this->type);
}

void WrongAnimal::setType(std::string type)
{
    this->type = type;
}

WrongAnimal &WrongAnimal::operator=(const WrongAnimal &WA)
{
    std::cout<< "WrongAnimal assignation operator called"<<std::endl;
    this->type = WA.type;
    return(*this);
}