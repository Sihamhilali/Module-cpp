#include "Cat.hpp"

Cat::Cat()
{
    std::cout << "default Cat constructor called" << std::endl;
    this->type = "Cat";
    this->B = new Brain();
}

Cat::~Cat()
{
    delete B;
    std::cout << "default Cat destructor called" << std::endl;
}

Cat::Cat(const Cat &C)
{
    std::cout << "copy Cat constructor called" << std::endl;
    *this = C;
}

void Cat::makeSound() const
{
    std::cout << "Cat makeSound called" << std::endl;
}

Cat &Cat::operator=(const Cat &C)
{
    std::cout << "Cat assignation operator called" << std::endl;
    this->B = new Brain(*C.B);
    this->type = C.type;
    return (*this);
}