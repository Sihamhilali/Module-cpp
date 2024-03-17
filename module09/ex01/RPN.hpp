
#ifndef RPN_HPP
#define RPN_HPP
#include <stack>
#include <iostream>

class RPN
{
private:
    std::stack<long> _stack;

public:
    RPN();
    RPN(std::string str);
    RPN(const RPN &src);
    RPN &operator=(const RPN &src);
    ~RPN();
    void RP_Notation(const char *str);
};
#endif