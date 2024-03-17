#include"ScalarConverter.hpp"
#include <limits>
#include <sstream>

bool isdouble(std::string c)
{
    bool dot = false;
    for(unsigned int i = 0; i <= c.length(); i++)
    {
        if (c[i] == '.')
        {
            if (dot)
                return false;
            dot = true;
        }
        else if (isalpha(c[i]))
          return false;
    }
    return true;
}

bool noMantissa(std::string c)
{
    bool dot = false;
    for(unsigned int i = 0; i <= c.length(); i++)
    {
        if (c[i] == '.')
        {
            if (dot)
                return false;
            dot = true;
            for (unsigned int j = i + 1; j <= c.length(); j++)
            {
                if (c[j] != '0')
                    return false;
            }
        }
    }
    return true;
}

bool isfloat(std::string c)
{
    bool dot = false;
    for(unsigned int i = 0; i <= c.length(); i++)
    {
        if (c[i] == '.')
        {
            if (dot)
                return false;
            dot = true;
        }
        else if (c[i] != 'f' && !isalpha(c[i]))
           return false;
    }

    return true;
}

bool isint(std::string c)
{
    int t = atoi(c.c_str());
    std::stringstream ss;
    ss << t;
    if (ss.str() != c)
        return 0;
    return 1;
}
void printChar(char c)
{
        std::cout << "char: " << c << std::endl;
        std::cout << "int: " << static_cast<int>(c) << std::endl;
        std::cout << "float: " << static_cast<float>(c) << std::endl;
        std::cout << "double: " << static_cast<double>(c)  << std::endl;
}

void printDouble(std::string c)
{
    double i = atof(c.c_str());
    std::cout << "char: ";
    if (i < 32 || i > 126)
        std::cout << "Non displayable" << std::endl;
    else
        std::cout<<"'" << static_cast<char>(i) <<"'"<< std::endl;
    if(i > INT_MAX|| i < INT_MIN)
        std::cout << "int : impossible "<< std::endl;
    else
        std::cout << "int: " << static_cast<int>(i) << std::endl;
    std::cout << "float: " << static_cast<float>(i) << std::endl;
    std::cout << "double: " << i << std::endl;
}

void printFloat(std::string c)
{
    float i = atof(c.c_str());
    std::cout << "char: ";
    if (i < 32 || i > 126)
        std::cout << "Non displayable" << std::endl;
    else
        std::cout <<"'" << static_cast<char>(i) << "'" <<std::endl;
    if (i > INT_MAX || i < INT_MIN)
        std::cout << "int : impossible "<< std::endl;
    else
        std::cout << "int: " << static_cast<int>(i) << std::endl;
    if (noMantissa(c))
        std::cout << "float: " << i << ".0f" << std::endl;
    else
        std::cout << "float: " << i << "f" << std::endl;

    std::cout << "double: " << static_cast<double>(i)<< std::endl;
}

void printInt(std::string c)
{
    int i = atoi(c.c_str());
    std::cout << "char: ";
    if (i < 32 || i > 126)
        std::cout << "Non displayable" << std::endl;
    else
        std::cout<<"'" << static_cast<char>(i) <<"'"<< std::endl;
    
    std::cout << "int: " << i << std::endl;
    std::cout << "float: " << static_cast<float>(i) << ".0f" << std::endl;
    std::cout << "double: " << static_cast<double>(i) << ".0" << std::endl;
}

void printerror(std::string c)
{
    std::cout << "char: impossible" << std::endl;
    std::cout << "int: impossible" << std::endl;
    std::cout << "float: " << c << "f" << std::endl;
    std::cout << "double: " << c << std::endl;
}
void ScalarConverter::Convert(const std::string &input)
{
    if(input.length() == 1 && !isdigit(input[0]))
        printChar(input[0]);
    if(input == "nan" || input == "nanf" || input == "+inf" || input == "+inff" || input == "-inf" || input == "-inff")
        printerror(input);
    else
    {
        if(isint(input))
            printInt(input);
        else if(!isfloat(input))
             printFloat(input);
        else if(isdouble(input))
            printDouble(input);
    }
}