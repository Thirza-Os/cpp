#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal()
{
    std::cout << "Constructing WrongAnimal class" << std::endl;
    this->type = "Default WrongAnimal";
}

WrongAnimal::WrongAnimal(WrongAnimal &copy)
{
    *this = copy;
    std::cout << "copy constructor Wrong Animal class" << std::endl;
}

WrongAnimal& WrongAnimal::operator=(WrongAnimal &other)
{
    if (this != &other)
    {
        this->type = other.type;
    }
    std::cout << "assignment operator WrongAnimal called" << std::endl;
    return(*this);
}

WrongAnimal::~WrongAnimal()
{
    std::cout << "Deonstructing WrongAnimal class" << std::endl;
}

void    WrongAnimal::makeSound(void) const
{
    std::cout << "Wrong Animal sound: Coming from Wrong Animal so not overloaded!" << std::endl;
}

const std::string& WrongAnimal::getType(void) const
{
    return (type);
}