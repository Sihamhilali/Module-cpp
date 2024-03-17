#include <iostream>
#include <algorithm>
#include <vector>

template <typename T>
int  easyfind(T &string, int value)
{
    typename T::iterator it;
    it = std::find(string.begin(), string.end(), value);
    if (it != string.end())
        return *it;
    else
        throw std::exception();
    return 0;
}