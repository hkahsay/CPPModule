#include "Serializer.hpp"

int main()
{
    Data    orginal;
    uintptr_t   S;

    orginal.new_ptr = "to serialize";
    std::cout << "orginal value: "<< orginal.new_ptr<<std::endl;
    Data *ptr = &orginal;
    std::cout << "before serializer: "<< ptr<<std::endl;
    S = Serialize(ptr);
    std::cout << "serializer: "<< S<<std::endl;
    ptr = deserialize(S);
    std::cout << "deserializer:"<< ptr<<std::endl;


}