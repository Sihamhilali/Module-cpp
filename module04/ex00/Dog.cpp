#include "Dog.hpp"


Dog::Dog()
{
    std::cout << "default Dog constructor called" << std::endl;
    this->type = "Dog";
}

Dog::~Dog()
{
    std::cout << "default Dog destructor called" << std::endl;
}

Dog::Dog(const Dog &D)
{
    std::cout << "copy Dog constructor called" << std::endl;
    *this = D;
}

void Dog::makeSound() const
{
    std::cout << "Dog makeSound called" << std::endl;
}

Dog &Dog::operator=(const Dog &D)
{
    this->type = D.type;
    std::cout << "Dog assignation operator called" << std::endl;
    return (*this);
}
