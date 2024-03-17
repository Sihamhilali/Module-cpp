#pragma once
#include"AForm.hpp"

class Intern
{
    public:
        Intern();
        ~Intern();
        Intern(const Intern &copy);
        Intern &operator=(const Intern &ref);
        AForm *makeForm(const std::string& formName, const std::string& target);
};
