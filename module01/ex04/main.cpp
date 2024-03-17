
#include<iostream>
#include<fstream>
#include"Losers.hpp"

int main(int argc, char **argv)
{
    std::string s1;
    std::string s2;
    std::string s3;


    if(argc != 4)
    {
        std::cout << "Error: Wrong number of arguments" << std::endl;
        return (1);
    }
    else
    {
        s1 = argv[1];
        s2 = argv[2];
        s3 = argv[3];
        if(s2.empty())
        {
            std::cout << "u should put what  u want to change" <<std::endl;
            exit(0);
        }
        Loser loser;
        loser.Los(s1, s2, s3);
          std::cout << "Replacement complete." << std::endl;
    }
    return 0;
}
