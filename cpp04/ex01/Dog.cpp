#include "Dog.hpp"

Dog::Dog(): Animal()
{
    this->type = "dog";

    try
    {
        this->BrainPointer = new Brain;
    }
    catch(const std::bad_alloc& e)
    {
        std::cerr << "Bad alloc detected " << e.what() << std::endl;
    }
    std::cout << "Constructing Dog class" << std::endl;
}

Dog::~Dog()
{
    try
    {
        delete this->BrainPointer;
    }
    catch(const std::bad_alloc& e)
    {
        std::cerr << "Bad alloc detected " << e.what() << std::endl;
    }
    std::cout << "Deonstructing Dog class" << std::endl;
}

Dog::Dog(Dog &copy): Animal(copy)
{
    BrainPointer = new Brain();
    *this = copy;
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

std::string Dog::getBrainIdea(int index)
{
   return BrainPointer->GetIdea(index);
}

void        Dog::setBrainIdea(std::string idea, int index)
{
    BrainPointer->SetIdea(idea, index);
}