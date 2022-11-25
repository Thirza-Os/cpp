#include <string>
#include <iostream>
#include <cstdint>

#include "Data.hpp"

// UINTPTR: integer type capable of holding a value converted from void pointer
// & be able to convert that type back with the type of the original pointer. 

// reinterpret_cast converts any pointer type to any other pointer type (nothing is checked, all conversions are allowed)

// Convert a Data pointer to a uintptr
static uintptr_t	serialize(Data* ptr)
{
	return (reinterpret_cast<uintptr_t>(ptr));
}

// Convert a uintptr to a Data pointer
static Data			*deserialize(uintptr_t raw)
{
	return (reinterpret_cast<Data *>(raw));
}

int main(void)
{
	// Data pointer and ititialization
	Data *ptr;
	ptr = new Data("This is input for Data", 42);
	std::cout << *ptr << std::endl;

	// Testing conversion to a uintptr
	uintptr_t newPtr = serialize(ptr);
	std::cout << "After serialize:	" << newPtr << std::endl;

	// Testing conversion to a Data pointer
	Data *newDataPtr = deserialize(newPtr);
	std::cout << std::endl << *newDataPtr << std::endl;
}
