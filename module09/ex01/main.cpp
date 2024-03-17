#include"RPN.hpp"

int main(int argc, char **argv)
{
    if(argc != 2)
    {
        std::cout << "Error: invalid number of arguments." << std::endl;
        return 1;
    }
    RPN rpn(argv[1]);
}