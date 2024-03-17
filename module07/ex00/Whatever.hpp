
#ifndef WHATEVER_HPP
#define WHATEVER_HPP
#include <iostream>

template <typename T>
static void swap(T &a, T &b)
{
    T tmp = a;
    a = b;
    b = tmp;
}

template <typename T>
static T& min(T &a, T &b)
{
    if (a < b)
        return a;
    return b;
}

template <typename T>
static T& max(T &a, T &b)
{
    if (a > b)
        return a;
    return b;
}

#endif