#include "Cat.hpp"

Cat::Cat(): Animal()
{
    this->type = "cat";
    std::cout << "Constructing Cat class" << std::endl;
}

Cat::~Cat()
{
    std::cout << "Deonstructing Cat class" << std::endl;
}

Cat::Cat(Cat &copy): Animal(copy)
{
    *this = copy;
    std::cout << "Copy constructor Cat class called" << std::endl;
}

Cat&    Cat::operator=(Cat &other)
{
    if (this != &other)
        this->type = other.type;
    std::cout << "Assignment operator Cat class called" << std::endl;
    return (*this);
}

void    Cat::makeSound(void) const
{
    std::cout << "Miauw" << std::endl;
}