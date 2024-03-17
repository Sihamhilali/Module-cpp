#pragma once
#include "Weapon.hpp"

class HumanA
{
    private:
        std::string name;
        Weapon &wea;
    public:
        void setName(std::string name);
        std::string getName();
        void setWeapon(Weapon &wea);
        Weapon &getWeapon();
        HumanA(Weapon &wea);
        HumanA(std::string name, Weapon &wea);
        void attack();
};