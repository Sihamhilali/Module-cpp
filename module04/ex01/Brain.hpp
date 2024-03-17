#include <iostream>
#pragma once

class Brain
{
    private:
    std::string Ideas[100];
    public:
    Brain();
    ~Brain();
    Brain(const Brain &B);
    Brain &operator=(const Brain &B);
};