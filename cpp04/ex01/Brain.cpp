#include "Brain.hpp"

Brain::Brain()
{
    std::cout << "Constructing Brain class" << std::endl;
}

Brain::Brain(Brain &copy)
{
    *this = copy;
}

Brain& Brain::operator=(Brain &other)
{
    if (this != &other)
    {
        for(int i = 0; i < 100; i++)
        this->setIdea(other.getIdea(i), i);
    }
    std::cout << "assignment operator Brain called" << std::endl;
    return(*this);
}

Brain::~Brain()
{
    std::cout << "Deconstructing Brain class" << std::endl;
}

std::string Brain::getIdea(int index)
{
    if (index < 0 || index > 100)
    {
        std::cerr << "Index is out of range" << std::endl;
        return std::string();
    }
    return(this->ideas[index]);
}

void        Brain::setIdea(std::string idea, int index)
{
    if (index < 0 || index > 100)
    {
        std::cerr << "Index is out of range" << std::endl;
        return ;
    }
    this->ideas[index] = idea;
}