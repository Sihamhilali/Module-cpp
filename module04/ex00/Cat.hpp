#pragma once 
#include <iostream>
#include "Animal.hpp"
class Cat: public Animal
{
    public:
        Cat();
        ~Cat();
        Cat(const Cat &C);
        Cat &operator=(const Cat &C);
        void makeSound() const;
};