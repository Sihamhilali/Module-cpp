#include <iostream>
#include"Fixed.h"

Fixed::Fixed(): value(0)
{
     std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const Fixed &fx)
{
    std::cout << "Copy constructor called" << std::endl;
    *this = fx;
}

Fixed& Fixed::operator=(const Fixed& fx)
{
    std::cout << "copy assignment operator called" << std::endl;
    this->value = fx.value;
    return(*this);
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

Fixed::Fixed(const int inInt) : value(inInt * (1 << Fixed::bits))
{
		std :: cout << "Int constructor called" << std::endl;

}

Fixed::Fixed(const float inFloat) : value(roundf(inFloat * (1 << Fixed::bits)) )
{
		std::cout << "Float constructor called" << std::endl;

}

float Fixed::toFloat(void) const {
	return (float)this->value / (float)(1 << Fixed::bits);
}

int Fixed::toInt(void) const {
	return this->value >> Fixed::bits;
}

std::ostream &operator<<(std::ostream &stream, const Fixed &nbr)
{
	stream << nbr.toFloat();
	return stream;
}

Fixed::~Fixed()
{
    std::cout << "Destructor called" << std::endl;
}
