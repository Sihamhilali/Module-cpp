#pragma once
#include"AForm.hpp"
#include"Bureaucrat.hpp"

class RobotomyRequestForm: public AForm
{
    private:
        std::string target;
    public:
    RobotomyRequestForm();
        RobotomyRequestForm(std::string target);
        ~RobotomyRequestForm();
        RobotomyRequestForm(const RobotomyRequestForm &copy);
        RobotomyRequestForm &operator=(const RobotomyRequestForm &ref);
        void execute(Bureaucrat const & executor) const;
};