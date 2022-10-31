#ifndef DOG_HPP
# define DOG_HPP

#include "Animal.hpp"

class Dog: public Animal
{
public:
    Dog();
    Dog(Dog &copy);
    Dog& operator=(Dog &other);
    virtual ~Dog();

    virtual void    makeSound(void) const;
};

#endif