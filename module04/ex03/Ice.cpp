#include "Ice.hpp"

AMateria* Ice::clone() const
{
    return new Ice(*this);
}

void Ice::use(ICharacter& target) {
    std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
}

Ice::Ice()
{
    this->type = "ice";
}

Ice::~Ice()
{
}

Ice::Ice(const Ice &I): AMateria("ice")
{
    *this = I;
}