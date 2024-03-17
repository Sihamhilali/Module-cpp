
#include "easyfind.hpp"

int main()
{
    std::vector<int> vec;
    vec.push_back(1);
    vec.push_back(6);
    vec.push_back(3);
    vec.push_back(4);
    vec.push_back(5);
    try
    {
        std::cout << easyfind(vec, 2) << std::endl;
        std::cout << easyfind(vec, 6) << std::endl;
    }
    catch (std::exception &e)
    {
        std::cout << "Not found" << std::endl;
    }
    return 0;
}