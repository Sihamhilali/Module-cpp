#include"Bureaucrat.hpp"
#include"PresidentialPardonForm.hpp"
#include"RobotomyRequestForm.hpp"
#include"ShrubberyCreationForm.hpp"
#include"Intern.hpp"

int main()
{
    Bureaucrat b1("Bureaucrat1", 1);
    Bureaucrat b2("Bureaucrat2", 150);
    Intern intern;
    Intern intern1;
    Intern intern2;
    Intern intern3;
    AForm *form1; 
    form1 = intern.makeForm("presidential pardon", "target1");
    if(!form1)
    {
        std::cout << "Form not created" << std::endl;
        return 0;
    }

 form1 = intern1.makeForm("robotomy request", "target2");
    if(!form1)
    {
        std::cout << "Form not created" << std::endl;
        return 0;
    }
     form1 = intern2.makeForm("shrubbery creation", "target3");
    if(!form1)
    {
        std::cout << "Form not created" << std::endl;
        return 0;
    }
     form1 = intern3.makeForm("pre", "target");
    if(!form1)
    {
        std::cout << "Form not created" << std::endl;
        return 0;
    }
   std::cout << *form1;
    try
    {
        form1->beSigned(b1);

    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    return 0;
}