#include"RobotomyRequestForm.hpp"
#include <cstdlib>

RobotomyRequestForm::RobotomyRequestForm(std::string target): AForm("Robotomy request", 72, 45), target(target)
{
    std::cout << "Robotomy request constructor" << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm(): AForm("Robotomy request", 72, 45), target("default")
{
    std::cout << "Robotomy request default constructor" << std::endl;
}

RobotomyRequestForm::~RobotomyRequestForm()
{
    std::cout << "Robotomy request destructor" << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &copy): AForm(copy), target(copy.target)
{
    std::cout << "Robotomy request copy constructor" << std::endl;
}

RobotomyRequestForm &RobotomyRequestForm::operator=(const RobotomyRequestForm &ref)
{
    if (this == &ref)
        return *this;
    AForm::operator=(ref);
    this->target = ref.target;
    std::cout << "Robotomy request assignation operator" << std::endl;
    return (*this);
}

void RobotomyRequestForm::execute(Bureaucrat const & executor) const
{
    if (executor.getGrade() > this->getGradeFExec())
        throw AForm::GradeTooLowException();
    if(rand() % 2)
        std::cout << this->target << " has been robotomized successfully" << std::endl;
    else
        std::cout << this->target << " robotomization failed" << std::endl;
}