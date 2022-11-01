#ifndef BRAIN_HPP
# define BRAIN_HPP

#include "Animal.hpp"

class Brain
{
protected:
    std::string ideas[100];

public:
    Brain();
    Brain(Brain &copy);
    Brain& operator=(Brain& other);
    virtual ~Brain();

    // getter and setters for ideas
    std::string GetIdea(int index);
    void        SetIdea(std::string idea, int index);
};

#endif