#pragma once
#include "AForm.hpp"

class PresidentialPardonForm:public AForm
{
    private:
        std::string target;
    public:
    PresidentialPardonForm();
        PresidentialPardonForm(const PresidentialPardonForm& to_copy);
        PresidentialPardonForm(std::string target);
        ~PresidentialPardonForm();
        PresidentialPardonForm &operator=(const PresidentialPardonForm &original);
        void execute(Bureaucrat const & executor) const;
};