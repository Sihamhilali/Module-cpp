#include"Animal.hpp"

Animal::Animal()
{
    std::cout << "default Animal constructor called" << std::endl;
}

Animal::~Animal()
{
    std::cout << "default Animal destacter called" << std::endl;
}

Animal::Animal(const Animal &A)
{
    std::cout << "copy Animal constructor called" << std::endl;
    *this = A;
}
void Animal ::makeSound() const
{
    std::cout << "Animal makeSound called" << std::endl;
}

std::string Animal::getType() const
{
    return (this->type);
}

void Animal::setType(std::string type)
{
    this->type = type;
}

Animal &Animal::operator=(const Animal &A)
{
    std::cout << "Animal assignation operator called" << std::endl;
    this->type = A.type;
    return (*this);
}
