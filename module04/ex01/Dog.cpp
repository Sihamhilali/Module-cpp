#include "Dog.hpp"


Dog::Dog()
{
    std::cout << "default Dog constructor called" << std::endl;
    this->type = "Dog";
    this->B = new Brain();
}

Dog::~Dog()
{
    delete B;
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
    std::cout << "dog assignation operator called" << std::endl;
    this->B = new Brain(*D.B);
    this->type = D.type;
    return (*this);
}
