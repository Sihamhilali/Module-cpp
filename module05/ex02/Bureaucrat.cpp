
#include"Bureaucrat.hpp"

const char* Bureaucrat::GradeTooHighException::what() const throw() {
    return "Grade is too high";
}

Bureaucrat::Bureaucrat() : name("default"), grade(150) 
{
    
}

const char* Bureaucrat::GradeTooLowException::what() const throw() {
    return "Grade is too low";
}

Bureaucrat::Bureaucrat(const std::string& name, int grade) : name(name) {
    validateGrade(grade);
    this->grade = grade;
}

Bureaucrat::Bureaucrat(const Bureaucrat& src) : name(src.name) {
    validateGrade(src.grade);
    grade = src.grade;
}

Bureaucrat& Bureaucrat::operator=(const Bureaucrat& src) {
    validateGrade(src.grade);
    grade = src.grade;
    return *this;
}

Bureaucrat::~Bureaucrat() {}


int Bureaucrat::getGrade() const {
    return grade;
}

std::string const & Bureaucrat::getName() const {
    return name;
}

void Bureaucrat::incrementGrade() {
    validateGrade(grade - 1);
    grade--;
}

void Bureaucrat::decrementGrade() {
    validateGrade(grade + 1);
    grade++;
}

void Bureaucrat::validateGrade(int grade) {
    if (grade < 1) {
        throw GradeTooHighException();
    } else if (grade > 150) {
        throw GradeTooLowException();
    }
}

void Bureaucrat::signForm(AForm  &aform)
{
    try
    {
        aform.beSigned(*this);
        std::cout << this->getName() << " signs " << aform.getName() << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cerr << this->getName() << " cannot sign " << aform.getName() << " because " << e.what() << std::endl;
    }
    
}

void Bureaucrat::executeForm(AForm const & form) {
    try {
        form.execute(*this);
        std::cout << name << " executes " << form.getName() << std::endl;
    } catch (std::exception& e) {
        std::cout << name << " cannot execute " << form.getName() << " because " << e.what() << std::endl;
    }
}

std::ostream& operator<<(std::ostream& os, const Bureaucrat& bureaucrat) {
    os << bureaucrat.getName() << ", bureaucrat grade " << bureaucrat.getGrade();
    return os;
}
