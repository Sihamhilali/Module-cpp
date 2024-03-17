
#include "Fixed.hpp"

Fixed::Fixed(void) : value(0)
{
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const int inInt) : value(inInt * (1 << Fixed::bits))
{
		std::cout << "Int constructor called" << std::endl;

}

Fixed::Fixed(const float inFloat) : value( roundf(inFloat * (1 << Fixed::bits)) )
{
		std::cout << "Float constructor called" << std::endl;

}

Fixed::Fixed(const Fixed &to_copy) 
{
	std::cout << "Copy constructor called" << std::endl;
	*this = to_copy;
}

Fixed &Fixed::operator=(const Fixed &original)
{
		std::cout << "Copy assignment operator called" << std::endl;
	this->setRawBits(original.getRawBits());
	return *this;
}

Fixed::~Fixed() {
		std::cout << "Destructor called" << std::endl;
};

int Fixed::getRawBits(void) const {
	return this->value;
}

void Fixed::setRawBits(int const raw) {
	this->value = raw;
}

float Fixed::toFloat(void) const {
	return (float)this->value / (float)(1 << Fixed::bits);
}

int Fixed::toInt( void ) const {
	return this->value >> Fixed::bits;
}


bool Fixed::operator>(const Fixed &nbr) const {
	return this->value > nbr.getRawBits();
}

bool Fixed::operator<(const Fixed &nbr) const{
	return this->value < nbr.getRawBits();
}

bool Fixed::operator<=(const Fixed &nbr)const {
	return this->value <= nbr.getRawBits();
}

bool Fixed::operator>=(const Fixed &nbr) const{
	return this->value >= nbr.getRawBits();
}

bool Fixed::operator==(const Fixed &nbr) const{
	return this->value == nbr.getRawBits();
}

bool Fixed::operator!=(const Fixed &nbr) const{
	return this->value != nbr.getRawBits();
}

Fixed Fixed::operator+(const Fixed &nbr) const{

	Fixed Return_;
	
	int FP = this->getRawBits() + nbr.getRawBits();
	Return_.setRawBits(FP);
	return Return_;
}

Fixed Fixed::operator-(const Fixed &nbr) const{
	Fixed Return_;
	
	int FP = this->getRawBits() - nbr.getRawBits();
	Return_.setRawBits(FP);
	return Return_;
}

Fixed Fixed::operator*(const Fixed &nbr) const{

	Fixed Return_;
	
	int FP = this->getRawBits() * nbr.getRawBits();
	Return_.setRawBits((FP / (1 << bits)));
	return Return_;
}

Fixed Fixed::operator/(const Fixed &nbr) const{
	
	Fixed Return_;
	int FP = this->getRawBits() / nbr.getRawBits();
	Return_.setRawBits((FP * (1 << bits)));
	return Return_;
}

Fixed &Fixed::operator++(void)
{
	this->value += 1;
	return *this;
}

Fixed Fixed::operator++( int )
{
	Fixed tmp( *this );
	this->value += 1;
	return tmp;
}

Fixed &Fixed::operator--( void )
{
	this->value -= 1;
	return *this;
}

Fixed Fixed::operator--(int)
{
	Fixed tmp( *this );
	this->value -= 1;
	return tmp;
}

Fixed& Fixed::min(Fixed &a, Fixed &b)
{
	if (a.getRawBits() < b.getRawBits())
		return a;
	return b;
}

const Fixed& Fixed::min(const Fixed &a, const Fixed &b)
{
	if (a.getRawBits() < b.getRawBits())
		return a;
	return b;
}

Fixed& Fixed::max(Fixed &a, Fixed &b)
{
	if (a.getRawBits() > b.getRawBits())
		return a;
	return b;
}

const Fixed& Fixed::max(const Fixed &a, const Fixed &b)
{
	if (a.getRawBits() > b.getRawBits())
		return a;
	return b;
}

std::ostream &operator<<(std::ostream &stream, const Fixed &nbr)
{
	stream << nbr.toFloat();
	return stream;
}
