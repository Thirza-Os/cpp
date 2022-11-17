#ifndef CAT_HPP
# define CAT_HPP

#include "Animal.hpp"

class Cat: public Animal
{
public:
    Cat();
    Cat(Cat &copy);
    Cat& operator=(Cat &other);
    virtual ~Cat();

    virtual void    makeSound(void) const;
};

#endif