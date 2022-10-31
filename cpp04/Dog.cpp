#include "Dog.hpp"

Dog::Dog(): Animal()
{
    this->type = "dog";
    std::cout << "Constructing Dog class" << std::endl;
}

Dog::~Dog()
{
    std::cout << "Deonstructing Dog class" << std::endl;
}

Dog::Dog(Dog &copy): Animal(copy)
{
    this->type = copy.type;
    std::cout << "Copy constructor Dog class called" << std::endl;
}

Dog&    Dog::operator=(Dog &other)
{
    if (this != &other)
        this->type = other.type;
    std::cout << "Assignment operator Dog class called" << std::endl;
    return (*this);
}

void    Dog::makeSound(void) const
{
    std::cout << "Bark" << std::endl;
}