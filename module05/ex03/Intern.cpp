
#include "Intern.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

Intern::Intern() {
    std::cout << "Intern constructor called" << std::endl;
}

Intern::~Intern() {
    std::cout << "Intern destructor called" << std::endl;
}

Intern::Intern(const Intern &copy) {
    std::cout << "Intern copy constructor called" << std::endl;
    *this = copy;
}

Intern &Intern::operator=(const Intern &ref) {
    std::cout << "Intern assignation operator called" << std::endl;
    (void)ref;
    return *this;
}

AForm *Intern::makeForm(const std::string& formName, const std::string& target) 
{
    std::string form[3] = {"presidential pardon", "robotomy request", "shrubbery creation"};

    int t = 4;
    for (int i = 0; i < 3; i++)
    {
        if(formName == form[i])
            t = i;
    }
    switch (t) {
        case 0:
            std::cout << "Intern creates <" << form[0] << ">" << std::endl;
            return new PresidentialPardonForm(target);
        case 1:
            std::cout << "Intern creates <" << form[1] << ">" << std::endl;
            return new RobotomyRequestForm(target);
        case 2:
            std::cout << "Intern creates <" << form[2] << ">" << std::endl;
            return new ShrubberyCreationForm(target);
        default:
            std::cout << "Intern couldn't create form" << std::endl;
            return NULL;
    }
}