
#pragma once
#include <iostream>
#include "Animal.hpp"

class Dog: public Animal
{
    public:
        Dog();
        ~Dog();
        Dog(const Dog &D);
        Dog &operator=(const Dog &D);
        void makeSound() const;
};