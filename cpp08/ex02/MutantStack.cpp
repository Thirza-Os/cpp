#include "MutantStack.hpp"

MutantStack::MutantStack()
{
    std::cout << " basic contructor called" << std::endl;
}

MutantStack::MutantStack()
{
    std::cout << "contructor called" << std::endl;
}

MutantStack::~MutantStack()
{
    std::cout << "destructor called " << std::endl;

}

MutantStack::MutantStack(const MutantStack &copy)
{
    std::cout << "copy constructor called " << std::endl;

    *this = copy;
}

MutantStack& MutantStack::operator=(const MutantStack & other)
{
    std::cout << "ass operator overload called " << std::endl;

	if (this == &other)
		return *this;
    return *this;
}


