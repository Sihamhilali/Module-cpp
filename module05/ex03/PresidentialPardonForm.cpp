#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm& to_copy): AForm(to_copy), target(to_copy.target) {
    std::cout << "Presidential pardon " << this->getName() << " copy constructor called" << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm():AForm("Presidential pardon",25,5), target("default") {
    std::cout << "Presidential pardon " << this->getName() << " default constructor called" << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm(std::string target):AForm("Presidential pardon",25,5), target(target) {
    std::cout << "Presidential pardon" << this->getName() << " constructor called" << std::endl;
}

PresidentialPardonForm::~PresidentialPardonForm(void) {
    std::cout << "Presidential pardon " << this->getName() << " default destructor has been called" << std::endl;
}

PresidentialPardonForm &PresidentialPardonForm::operator=(const PresidentialPardonForm &original) {
    if (this == &original)
        return *this;
    AForm::operator=(original);
    this->target = original.target;
    return *this;
}

void PresidentialPardonForm::execute(Bureaucrat const & executor) const {
    if (executor.getGrade() > this->getGradeFExec())
        throw (AForm::GradeTooLowException());
    std::cout << this->target << " has been pardoned by Zafod Beeblebrox" << std::endl;
}