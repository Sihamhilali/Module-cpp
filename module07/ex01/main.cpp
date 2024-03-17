#include"Iter.hpp"

template <typename T, typename F>
F f(T &x)
{
    std::cout << x << std::endl;
}

int main( void ) 
{
   // int a[] = {1, 2, 3, 4, 5};
    std::string b[] = {"a", "b", "c", "d", "e"};
    iter(b, 5, f<std::string, void>);
    return 0;
}