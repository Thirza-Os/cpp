#include "Cat.hpp"

Cat::Cat(): A_Animal()
{
    this->type = "cat";
    try
    {
        this->BrainPointer = new Brain();
    }
    catch(const std::bad_alloc& e)
    {
        std::cerr << "Bad alloc detected " << e.what() << std::endl;
    }

    std::cout << "Constructing Cat class" << std::endl;
}

Cat::~Cat()
{
    delete this->BrainPointer;
    std::cout << "Deonstructing Cat class" << std::endl;
}

//copy constructor making a deep copy: make the pointers reference to the same location
// in shallow copies only the data is copied(works well without pointers)
Cat::Cat(Cat &copy): A_Animal(copy)
{

    try 
    {
        BrainPointer = new Brain();
    }
    catch(const std::bad_alloc& e)
    {
        std::cerr << "Bad alloc detected " << e.what() << std::endl;
    }
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

std::string Cat::getBrainIdea(int index)
{
   return BrainPointer->GetIdea(index);
}

void        Cat::setBrainIdea(std::string idea, int index)
{
    BrainPointer->SetIdea(idea, index);
}