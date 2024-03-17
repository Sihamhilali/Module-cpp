
#pragma once
#include <cstdint>
#include <iostream>

class Data
{
    public:
        std::string s1;
};

class Serializer
{
    private:
        Serializer() {};
    public:
        static uintptr_t serialize(Data* ptr);
        static Data* deserialize(uintptr_t raw);
};
