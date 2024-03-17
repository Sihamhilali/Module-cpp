#pragma once 
#include <iostream>
#include "AAnimal.hpp"
#include "Brain.hpp"

class Cat: public AAnimal
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