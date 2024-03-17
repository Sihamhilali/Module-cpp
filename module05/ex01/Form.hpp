#pragma once
# include <exception>
# include <string>
#include"Bureaucrat.hpp"

class Bureaucrat;

class Form
{
	private:
		const std::string name;
		bool f_Signed;
		const int grade_F_Signed;
		const int grade_F_Exec;
	public:
		class GradeTooHighException : public std::exception
		{
			public:
				virtual const char* what() const throw();
		};
		class GradeTooLowException : public std::exception
		{
			public:
				virtual const char* what() const throw();
		};
		Form();
		Form(const Form& to_copy);
		Form(const std::string name, const int grade_to_sign, const int grade_to_execute);
		Form &operator=(const Form &original);
		~Form();

		const std::string& getName(void) const;
		bool getSignState(void) const;
		int getGradeFSign(void) const;
		int getGradeFExec(void) const;
		void beSigned(Bureaucrat &bureaucrat);


};

std::ostream &operator<<(std::ostream &stream, Form &Form);