
#include <iostream>
#include "AForm.hpp"

AForm::AForm(void): name("default"),f_Signed(false),grade_F_Signed(1), grade_F_Exec(1) {
	std::cout << "AForm <" << this->getName() << "> default constructor called" << std::endl;
}

AForm::AForm(const AForm& to_copy): name(to_copy.name),f_Signed(to_copy.f_Signed),grade_F_Signed(to_copy.grade_F_Signed), grade_F_Exec(to_copy.grade_F_Exec) 
{
	std::cout << "AForm <" << this->getName() << "> copy constructor called" << std::endl;
}

AForm::AForm(const std::string name, const int grade_to_sign,  const int grade_to_execute): name(name), f_Signed(false), grade_F_Signed(grade_to_sign), grade_F_Exec(grade_to_execute) {
std::cout << "AForm <" << this->getName() << "> constructor called" << std::endl;
}


AForm::~AForm(void) {
	std::cout << "AForm <" << this->getName() << "> default destructor has been called" << std::endl;
}

AForm &AForm::operator=(const AForm &original) {
	if (this == &original)
		return *this;
	this->f_Signed = original.f_Signed;
	return *this;
}

const std::string& AForm::getName(void) const {
	return this->name;
}

bool AForm::getSignState(void) const {
	return this->f_Signed;
}

int AForm::getGradeFSign(void) const {
	return this->grade_F_Signed;
}

int AForm::getGradeFExec(void) const {
	return this->grade_F_Exec;
}

void AForm::beSigned(Bureaucrat &bureaucrat) {
    if (bureaucrat.getGrade() > this->getGradeFSign())
        throw (AForm::GradeTooLowException());
    this->f_Signed = true;
}

const char* AForm::GradeTooHighException::what(void) const throw() {
	return "Form exception: exception: grade too high!";
}

const char* AForm::GradeTooLowException::what(void) const throw() {
	return "Form exception: exception: grade too low!";
}

std::ostream &operator<<(std::ostream &stream, AForm &Aform)
{
	stream << "Name: " << Aform.getName() << std::endl;
		if (Aform.getSignState() == true)
			stream << "Signed: yes\n";
		else
			stream << "Signed: no\n";
		stream << "Grade to sign: " << Aform.getGradeFSign() << "\n"
		   << "Grade to execute: " << Aform.getGradeFExec() << "\n" 
		   << std::endl;
	return stream;
}