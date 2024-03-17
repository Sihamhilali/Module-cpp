
#include"Serializer.hpp"

int main()
{
    Data data;
    data.s1 = "Hello";
    uintptr_t serialized = Serializer::serialize(&data);
    Data *deserialized = Serializer::deserialize(serialized);
    std::cout << "s1: " << deserialized->s1 << std::endl;
    return 0;
}