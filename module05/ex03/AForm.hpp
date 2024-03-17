# pragma once
# include <exception>
# include <string>
# include "Bureaucrat.hpp"


class Bureaucrat;

class AForm {
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
		AForm();
		AForm(const AForm& to_copy);
		AForm(const std::string name, const int grade_to_sign, const int grade_to_execute);
		AForm &operator=(const AForm &original);
		virtual ~AForm();

		const std::string& getName(void) const;
		bool getSignState(void) const;
		int getGradeFSign(void) const;
		int getGradeFExec(void) const;
		void beSigned(Bureaucrat &bureaucrat);
		virtual void execute(Bureaucrat const & executor) const = 0;
};

std::ostream &operator<<(std::ostream &stream, AForm &Form);