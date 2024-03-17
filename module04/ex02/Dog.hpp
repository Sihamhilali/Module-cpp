
#pragma once
#include <iostream>
#include "AAnimal.hpp"
#include "Brain.hpp"

class Dog: public AAnimal
{
     private :
        Brain *B;
    public:
        Dog();
        ~Dog();
        Dog(const Dog &D);
        Dog &operator=(const Dog &D);
        void makeSound() const;
};