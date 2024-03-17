#pragma once
#include "AForm.hpp"
#include <iostream>

class AForm;
class Bureaucrat {

private:

    const std::string name;
    int grade;
    void validateGrade(int grade);


public:
    class GradeTooHighException : public std::exception 
    {
        public:
        const char* what() const throw();
    };

    class GradeTooLowException : public std::exception
    {
        public:
        const char* what() const throw();
    };
    Bureaucrat();
    Bureaucrat(const std::string& name, int grade);
    Bureaucrat(const Bureaucrat& src);
    Bureaucrat& operator=(const Bureaucrat& src);
    ~Bureaucrat();

    const std::string& getName() const;
    int getGrade() const;
    void signForm(AForm  &aform);
    void executeForm(AForm const & form);
    void incrementGrade();
    void decrementGrade();

};

std::ostream& operator<<(std::ostream& os, const Bureaucrat& bureaucrat);
