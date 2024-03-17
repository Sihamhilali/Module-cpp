
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

Bureaucrat::Bureaucrat(const Bureaucrat& B) : name(B.name) {
    validateGrade(B.grade);
    grade = B.grade;
}

Bureaucrat& Bureaucrat::operator=(const Bureaucrat& B) {
    validateGrade(B.grade);
    if(this == &B)
        return *this;
    grade = B.grade;
    return *this;
}

Bureaucrat::~Bureaucrat()
{
}

const std::string Bureaucrat::getName() const {
    return name;
}

int Bureaucrat::getGrade() const {
    return grade;
}

void Bureaucrat::incrementGrade()
{
    validateGrade(grade - 1);
    grade--;
}

void Bureaucrat::decrementGrade()
{
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

std::ostream& operator<<(std::ostream& s, const Bureaucrat& B) {
    s << B.getName() << ", bureaucrat grade " << B.getGrade();
    return s;
}
