#pragma once
#include <ctime>
#include <cstdlib>
#include <iostream>

class Base
{
    public:
    virtual ~Base() {};
};

class A : public Base
{
    ~A() {};
};

class B : public Base
{
    ~B() {};
};

class C : public Base
{
    ~C() {};
};