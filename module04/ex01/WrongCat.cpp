#include"WrongCat.hpp"

WrongCat::WrongCat()
{
    std::cout << "default WrongCat constructor called" << std::endl;
}

WrongCat::~WrongCat()
{
    std::cout << "default WrongCat destructor called" << std::endl;
}

WrongCat::WrongCat(const WrongCat &WC)
{
    std::cout << "copy WrongCat constructor called" << std::endl;
    *this = WC;
}

void WrongCat::makeSound() const
{
    std::cout << "WrongCat makeSound called" << std::endl;
}

WrongCat &WrongCat::operator=(const WrongCat &WC)
{
    this->type = WC.type;
    std::cout << "WrongCat assignation operator called" << std::endl;
    return (*this);
}
