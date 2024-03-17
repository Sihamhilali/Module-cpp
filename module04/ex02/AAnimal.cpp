
#include"AAnimal.hpp"

AAnimal::AAnimal()
{
    std::cout << "default AAnimal constructor called" << std::endl;
}

AAnimal::~AAnimal()
{
    std::cout << "default AAnimal destructor called" << std::endl;
}

AAnimal::AAnimal(const AAnimal &A)
{
    std::cout << "copy AAnimal constructor called" << std::endl;
    *this = A;
}
void AAnimal ::makeSound() const
{
    std::cout << "AAnimal makeSound called" << std::endl;
}

std::string AAnimal::getType() const
{
    return (this->type);
}

void AAnimal::setType(std::string type)
{
    this->type = type;
}

AAnimal &AAnimal::operator=(const AAnimal &A)
{
    std::cout << "AAnimal assignation operator called" << std::endl;
    this->type = A.type;
    return (*this);
}
