#include "RPN.hpp"
#include <cstdlib>
RPN::RPN()
{
}
RPN::RPN(const RPN &src)
{
    *this = src;
}

RPN &RPN::operator=(const RPN &src)
{
    if (this != &src)
    {
        _stack = src._stack;
    }
    return *this;
}

RPN::RPN(std::string str)
{
    RP_Notation(str.c_str());
}

void RPN::RP_Notation(const char *str)
{
    std::string s(str);
    int i = 0;
    while (s[i])
    {
        if (s[i] == ' ')
        {
            i++;
            continue;
        }
        if (s[i] == '+' || s[i] == '-' || s[i] == '*' || s[i] == '/')
        {
            if (_stack.size() < 2)
            {
                std::cout << "Error" << std::endl;
                return;
            }

            long a = _stack.top();
            if(a <= -2147483648 || a >= 2147483647)
            {
                std::cout << "Error: value out of range" << std::endl;
                return;
            }
            _stack.pop();
            long b = _stack.top();
            if(b <= -2147483648 || b >= 2147483647)
            {
                std::cout << "Error: value out of range" << std::endl;
                return;
            }
            _stack.pop();
            if (s[i] == '+')
            {
                _stack.push(b + a);
            }
            else if (s[i] == '-')
            {
                _stack.push(b - a);
            }
            else if (s[i] == '*')
            {
                _stack.push((b * a));
            }
            else if (s[i] == '/')
            {
                if (a == 0)
                {
                    std::cout << "Error cannot devide by zero" << std::endl;
                    return;
                }
                else
                    _stack.push(b / a);
            }
        }
        else
        {
            _stack.push(std::atol(&s[i]));
        }
        i++;
    }
    if (_stack.size() != 1)
    {
        std::cout << "Error" << std::endl;
        return;
    }
    std::cout << _stack.top() << std::endl;
    _stack.pop();
}
RPN::~RPN()
{
}