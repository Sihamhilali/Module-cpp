#include"ScalarConverter.hpp"

int main(int argc, char **argv)
{
    if(argc != 2)
    {
        std::cout << "Error: Invalid number of arguments" << std::endl;
        return 1;
    }
    const std::string input = argv[1];
    ScalarConverter :: Convert(input);
    return 0;
}