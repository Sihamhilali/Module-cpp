#include "Cure.hpp"

AMateria* Cure::clone() const
{
    return new Cure(*this);
}

void Cure::use(ICharacter& target) {
    std::cout << "* heals " << target.getName() << "’s wounds *" << std::endl;
}

Cure::Cure()
{
    this->type = "cure";
}

Cure::~Cure()
{
}

Cure:: Cure(const Cure &C): AMateria("cure")
{
    *this = C;
}