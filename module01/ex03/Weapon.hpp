#include<iostream>
#pragma once

class Weapon
{
    private:
        std::string type;
    public:
        Weapon();
        ~Weapon();
        Weapon(std::string str);
        void setType(std::string type);
        const std::string getType();
};
