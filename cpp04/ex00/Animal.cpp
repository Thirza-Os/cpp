#include "Animal.hpp"

Animal::Animal()
{
    std::cout << "Constructing Animal class" << std::endl;
    this->type = "Default animal";
}

Animal::Animal(Animal &copy)
{
    std::cout << "copy constructor Animal class" << std::endl;
    *this = copy;
}

Animal& Animal::operator=(Animal &other)
{
    if (this != &other)
    {
        this->type = other.type;
    }
    std::cout << "assignment operator animal called" << std::endl;
    return(*this);
}

Animal::~Animal()
{
    std::cout << "Deonstructing Animal class" << std::endl;
}

void    Animal::makeSound(void) const
{
    std::cout << "Animal sound" << std::endl;
}

const std::string& Animal::getType(void) const
{
    return (type);
}