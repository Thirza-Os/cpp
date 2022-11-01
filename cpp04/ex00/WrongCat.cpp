#include "WrongCat.hpp"

WrongCat::WrongCat(): WrongAnimal()
{
    this->type = "WrongCat";
    std::cout << "Constructing WrongCat class" << std::endl;
}

WrongCat::~WrongCat()
{
    std::cout << "Deonstructing WrongCat class" << std::endl;
}

WrongCat::WrongCat(WrongCat &copy): WrongAnimal(copy)
{
    *this = copy;
    std::cout << "Copy constructor WrongCat class called" << std::endl;
}

WrongCat&    WrongCat::operator=(WrongCat &other)
{
    if (this != &other)
        this->type = other.type;
    std::cout << "Assignment operator WrongCat class called" << std::endl;
    return (*this);
}

void    WrongCat::makeSound(void) const
{
    std::cout << "Wrong Miauw Sound" << std::endl;
}