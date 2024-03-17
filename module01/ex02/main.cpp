#include <iostream>

int main()
{
    std::string var = "HI THIS IS BRAIN";
    std::string* stringPTR = &var;
    std::string& stringREF = var;

 std::cout << "------------------The memory address----------------" << std::endl;

    std::cout<<"var: "<< &var << std::endl;
    std::cout <<"stringPTR: " <<&stringREF << std::endl;
    std::cout <<"stringREF: "<<stringPTR << std::endl;

    std::cout << "-----------------The value----------------------" << std::endl;
    std::cout <<"var: "<< var << std::endl;
    std::cout << "stringPTR: "<<stringREF << std::endl;
    std::cout << "stringREF: "<<*stringPTR << std::endl;
}