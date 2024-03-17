
#include"Weapon.hpp"
#pragma once

class HumanB
{
    private:
        std::string name;
        Weapon *wea;
    public:
      HumanB();
    ~HumanB();
    HumanB(std::string str);
        void setName(std::string name);
        std::string getName();
         void setWeapon(Weapon &wea);
        Weapon *getWeapon();
        void attack();
};