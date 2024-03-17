#pragma once
#include <iostream>
#include"WrongAnimal.hpp"

class WrongCat: public WrongAnimal
{
    protected:
        std::string type;

    public :
        WrongCat();
        ~WrongCat();
        WrongCat(const WrongCat &other);
        WrongCat &operator=(const WrongCat &other);
        void makeSound() const;
};