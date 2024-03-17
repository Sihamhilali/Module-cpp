#include"Bureaucrat.hpp"


int main()
{
    try
    {
        Bureaucrat highGradeBureaucrat("John Doe", 1);
        Bureaucrat lowGradeBureaucrat("Jane Doe", 150);

        std::cout << highGradeBureaucrat << std::endl;
        std::cout << lowGradeBureaucrat << std::endl;

        highGradeBureaucrat.incrementGrade();
        lowGradeBureaucrat.decrementGrade();

        std::cout << highGradeBureaucrat << std::endl;
        std::cout << lowGradeBureaucrat << std::endl;

        Bureaucrat invalidGradeBureaucrat("Invalid", 160);
    } 
    catch (std::exception& e)
    {
        std::cout << "Exception caught: " << e.what() << std::endl;
    }

    return 0;
}