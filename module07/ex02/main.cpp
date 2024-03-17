#include"Array.hpp"

int main()
{
    Array<int> a(5);
    Array<int> b(a);
    Array<int> c;
    c = b;
    a[0] = 42;
    std::cout << a[0] << std::endl;
    std::cout << b[0] << std::endl;
    std::cout << c[0] << std::endl;
    return 0;
}