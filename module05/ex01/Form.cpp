#include <iostream>
#include "Form.hpp"

Form::Form(void): name("default"), f_Signed(false), grade_F_Signed(150), grade_F_Exec(150) {
	std::cout << "Form " << this->getName() << " constructor called" << std::endl;
}

Form::Form(const Form& to_copy): name(to_copy.name), f_Signed(to_copy.f_Signed),grade_F_Signed(to_copy.grade_F_Signed), grade_F_Exec(to_copy.grade_F_Exec) 
{
	std::cout << "Form " << this->getName() << " copy constructor called" << std::endl;
}

Form::Form(const std::string name,const int grade_to_sign,  const int grade_to_execute): name(name), f_Signed(false), grade_F_Signed(grade_to_sign), grade_F_Exec(grade_to_execute) {
	std::cout << "Form " << this->getName() << " constructor called" << std::endl;
}

Form::~Form(void) {
	std::cout << "Form " << this->getName() << " destructor has been called" << std::endl;
}

const std::string& Form::getName(void) const {
	return this->name;
}

bool Form::getSignState(void) const {
	return this->f_Signed;
}

int Form::getGradeFSign(void) const {
	return this->grade_F_Signed;
}

int Form::getGradeFExec(void) const {
	return this->grade_F_Exec;
}

void Form::beSigned(Bureaucrat &bureaucrat) 
{
    if (bureaucrat.getGrade() > this->getGradeFSign())
        throw (Form::GradeTooLowException());
    this->f_Signed = true;
}

const char* Form::GradeTooHighException::what(void) const throw() {
	return "Form exception: exception: grade too high!";
}

const char* Form::GradeTooLowException::what(void) const throw() {
	return "Form exception: exception: grade too low!";
}

Form &Form::operator=(const Form &to_copy)
{
	if(this == &to_copy)
		return *this;
	this->f_Signed = to_copy.f_Signed;
	return *this;
}


std::ostream &operator<<(std::ostream &stream, Form &form)
{
	stream << "Name: " << form.getName() << std::endl;
		if (form.getSignState() == true)
			stream << "Signed: yes\n";
		else
			stream << "Signed: no\n";
		stream << "Grade to sign: " << form.getGradeFSign() << "\n"
		   << "Grade to execute: " << form.getGradeFExec() << "\n" 
		   << std::endl;
	return stream;
}
