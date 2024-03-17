#include"AMateria.hpp"

AMateria::AMateria()
{
}

AMateria::~AMateria()
{
}

AMateria::AMateria(const AMateria &Am)
{
    *this = Am;
}

AMateria &AMateria::operator=(const AMateria &AM)
{
    this->type = AM.type;
    return (*this);
}

void AMateria::setType(std::string type)
{
    this->type = type;
}

std::string  const & AMateria::getType() const
{
    return(this->type);
}

void AMateria::use(ICharacter& target)
{
    std::cout<<"this is use"<< target.getName() << std::endl;
}

AMateria::AMateria(std::string const & type): type(type)
{
}