#include<algorithm>
#include<iostream>
#include<vector>
class Span
{
    private:
        unsigned int _max;
        std::vector<int> _arr;
    public:
        Span();
        Span(unsigned int n);
        Span(Span const & src);
        Span & operator=(Span const & src);
        ~Span();
        void addNumber(int n);
        int shortestSpan();
        int longestSpan();
        void addNumber(std::vector<int>::iterator begin, std::vector<int>::iterator end);
};