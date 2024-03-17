#pragma once 
#include <iostream>
#include "Animal.hpp"
#include "Brain.hpp"

class Cat: public Animal
{
    private :
        Brain *B;
    public:
        Cat();
        ~Cat();
        Cat(const Cat &C);
        Cat &operator=(const Cat &C);
        void makeSound() const;
};