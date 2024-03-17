#include"Bureaucrat.hpp"
#include"PresidentialPardonForm.hpp"
#include"RobotomyRequestForm.hpp"
#include"ShrubberyCreationForm.hpp"

int main()
{
    Bureaucrat b1("Bureaucrat1", 1);
    Bureaucrat b2("Bureaucrat2", 150);
    PresidentialPardonForm f1("target1");
    RobotomyRequestForm f2("target2");
    ShrubberyCreationForm f3("target3");

   std::cout << f3;
   std::cout << f1;
   std::cout << f2;
    try
    {
       f1.beSigned(b1);
       f1.execute(b1);
       std::cout << f1;
       f2.beSigned(b1);
       f1.beSigned(b1);
       f1.execute(b1);
       f3.beSigned(b1);
       f3.execute(b1);
        std::cout << f1;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    return 0;
}