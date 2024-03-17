#include<iostream>
#pragma once

class WrongAnimal
{
    protected :
   std::string type;
    public:
    WrongAnimal();
    ~WrongAnimal();
    WrongAnimal(const WrongAnimal &WA);
    std::string getType() const;
    void setType(std::string type);
    WrongAnimal &operator=(const WrongAnimal &A);
    void makeSound() const;
};