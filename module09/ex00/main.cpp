#include "BitcoinExchange.hpp"
#include <iostream>

int main(int argc, char **argv)
{
    try
    {
        if(argc != 2)
        {
            throw std::runtime_error("Error: invalid number of arguments.");
        }
        BitcoinExchange exch;
        exch = BitcoinExchange(argv[1]);
    }
    catch (std::exception &e)
    {
        std::cout << e.what() << std::endl;
    }

    return 0;
}