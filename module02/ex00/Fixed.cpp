#include"Fixed.h"

Fixed::Fixed():value(0)
{
     std::cout << "Default constructor called" << std::endl;
}

Fixed& Fixed::operator=(const Fixed& fx)
{
    std::cout << "copy assignment operator called" << std::endl;
    this->value = fx.getRawBits();
    return(*this);
}
Fixed::Fixed(const Fixed &fx)
{
    std::cout << "Copy constructor called" << std::endl;
    *this = fx;
}

int Fixed:: getRawBits( void ) const
{
    std::cout << "getRawBits member function called" << std::endl;
    return(this->value);
}
void Fixed:: setRawBits( int const raw )
{
    std::cout << "setRawBits member function called" << std::endl;
    this->value = raw;
}
Fixed::~Fixed()
{
    std::cout << "Destructor called" << std::endl;
}
