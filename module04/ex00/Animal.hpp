#pragma once
#include <iostream>

class Animal
{
    protected:
        std::string type;
    public :
        Animal();
        virtual ~Animal();
        Animal(const Animal &A);
        std::string getType() const;
        void setType(std::string type);
        Animal &operator=(const Animal &A);
        virtual void makeSound() const;
};
