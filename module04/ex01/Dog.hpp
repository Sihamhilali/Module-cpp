
#pragma once
#include <iostream>
#include "Animal.hpp"
#include "Brain.hpp"

class Dog: public Animal
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