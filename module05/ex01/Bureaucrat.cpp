
#include"Bureaucrat.hpp"

Bureaucrat::Bureaucrat() : name("default"), grade(150) 
{
    
}

const char* Bureaucrat::GradeTooHighException::what() const throw() {
    return "Grade is too high";
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
    if(this == &src)
        return *this;
    grade = src.grade;
    return *this;
}

Bureaucrat::~Bureaucrat() 
{

}

const std::string& Bureaucrat::getName() const {
    return name;
}

int Bureaucrat::getGrade() const {
    return grade;
}

void Bureaucrat::incrementGrade() {
    validateGrade(grade - 1);
    grade--;
}

void Bureaucrat::decrementGrade() {
    validateGrade(grade + 1);
    grade++;
}

void Bureaucrat::signForm(Form  &form)
{
    try
    {
        form.beSigned(*this);
        std::cout << this->getName() << " signs " << form.getName() << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cerr << this->getName() << " cannot sign " << form.getName() << " because " << e.what() << std::endl;
    }
    
}

void Bureaucrat::validateGrade(int grade) {
    if (grade < 1) {
        throw GradeTooHighException();
    } else if (grade > 150) {
        throw GradeTooLowException();
    }
}

std::ostream& operator<<(std::ostream& os, const Bureaucrat& bureaucrat) {
    os << bureaucrat.getName() << ", bureaucrat grade " << bureaucrat.getGrade()<<"\n";
    return os;
}
