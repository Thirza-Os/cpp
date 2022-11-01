#include "A_Animal.hpp"

A_Animal::A_Animal()
{
    std::cout << "Constructing A_Animal class" << std::endl;
    this->type = "Default A_animal";
}

A_Animal::A_Animal(A_Animal &copy)
{
    this->type = copy.type;
}

A_Animal& A_Animal::operator=(A_Animal &other)
{
    if (this != &other)
    {
        this->type = other.type;
    }
    std::cout << "assignment operator A_animal called" << std::endl;
    return(*this);
}

A_Animal::~A_Animal()
{
    std::cout << "Deonstructing A_Animal class" << std::endl;
}

const std::string& A_Animal::getType(void) const
{
    return (type);
}