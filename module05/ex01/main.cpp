#include"Bureaucrat.hpp"
#include"Form.hpp"

int main()
{
    try
    {
        Bureaucrat b1("b1", 1);
        Bureaucrat b2("b2", 140);
        Form f1("f1", 870, 150);
        Form f2("f2", 150, 10);
        b1.signForm(f1);
        b2.signForm(f2);
        f1.beSigned(b1);
        f2.beSigned(b2);
        std::cout << b1 << b2 << f1 << f2;
        std::cout << f1 << f2;
    } 
    catch (std::exception& e)
    {
        std::cerr << "Exception caught: " << e.what() << std::endl;
    }

    return 0;
}