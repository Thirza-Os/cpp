#include <string>
#include <iostream>
#include <cstdint>

#include "Data.hpp"

// integer type capable of holding a value converted from void pointer
// & be able to convert that type back with the type of the original pointer. 

// reinterpret_cast converts any pointer type to any other pointer type (nothing is checked, all conversions are allowed)


static uintptr_t	serialize(Data* ptr)
{
    return (reinterpret_cast<uintptr_t>(ptr));
}

static Data	*deserialize(uintptr_t raw)
{
    return (reinterpret_cast<Data *>(raw));
}

int main(void)
{
	Data *ptr;
	ptr = new Data("This is input for Data", 42);

    uintptr_t newPtr = serialize(ptr);
	std::cout << "After serialize:	" << newPtr << std::endl;

	Data *newDataPtr = deserialize(newPtr);
	std::cout << *newDataPtr << std::endl;
}
