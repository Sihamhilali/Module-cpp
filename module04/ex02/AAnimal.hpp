#pragma once
#include <iostream>

class AAnimal
{
    protected:
        std::string type;
    public :
        AAnimal();
        virtual ~AAnimal();
        AAnimal(const AAnimal &A);
        std::string getType() const;
        void setType(std::string type);
        AAnimal &operator=(const AAnimal &A);
        virtual void makeSound() const = 0;
};