
#include "Span.hpp"

Span::Span() : _max(0)
{
}

Span::Span(unsigned int n) : _max(n)
{
    _arr.reserve(n);
}

Span::Span(Span const & src)
{
    *this = src;
}

Span & Span::operator=(Span const & src)
{
    if (this == &src)
        return *this;
    _max = src._max;
    _arr = src._arr;
    return *this;
}

void Span::addNumber(int n)
{
    if (_arr.size() < _max)
        _arr.push_back(n);
    else
        throw std::exception();
}

int Span::shortestSpan()
{
    if (_arr.size() < 2)
        throw std::exception();
    std::vector<int> tmp = _arr;
    std::sort(tmp.begin(), tmp.end());
    int min = tmp[1] - tmp[0];
    for (size_t i = 1; i < tmp.size() - 1; i++)
    {
        if (tmp[i + 1] - tmp[i] < min)
            min = tmp[i + 1] - tmp[i];
    }
    return min;
}

int Span::longestSpan()
{
    if (_arr.size() < 2)
        throw std::exception();
    std::vector<int> tmp = _arr;
    std::sort(tmp.begin(), tmp.end());
    return tmp[tmp.size() - 1] - tmp[0];
}

void Span::addNumber(std::vector<int>::iterator begin, std::vector<int>::iterator end)
{
    if (_arr.size() + std::distance(begin, end) > _max)
        throw std::exception();
    _arr.insert(_arr.end(), begin, end);
}


Span::~Span()
{
}