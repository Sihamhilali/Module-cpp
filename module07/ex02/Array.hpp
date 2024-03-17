#ifndef ARRAY_HPP
#define ARRAY_HPP
#include <iostream>

template <typename T>
class Array
{
    private:
        T *_array;
        size_t  _size;
    public :
        Array();
        Array(size_t n);
        Array operator=(Array const &other);
        T &operator[](size_t i);
        Array(Array const &other);
        ~Array();
};

template <typename T>
Array<T>::Array()
{
    _array = NULL;
    _size = 0;
}

template <typename T>
Array<T>::Array(size_t n)
{
    _array = new T[n];
    _size = n;
}

template <typename T>
Array<T>::Array(Array const &other)
{
    _array = new T[other._size];
    _size = other._size;
    for (size_t i = 0; i < _size; i++)
        _array[i] = other._array[i];
}

template <typename T>
Array<T> Array<T>::operator=(Array const &other)
{
    if (_array)
        delete[] _array;
    _array = new T[other._size];
    _size = other._size;
    for (size_t i = 0; i < _size; i++)
        _array[i] = other._array[i];
    return *this;
}


template <typename T>
T &Array<T>::operator[](size_t i)
{
    if (i >= _size)
        throw std::out_of_range("Index out of range");
    return _array[i];
}

template <typename T>
Array<T>::~Array()
{
    if (_array)
        delete[] _array;
}

#endif