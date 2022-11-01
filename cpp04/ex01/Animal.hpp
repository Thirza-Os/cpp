#ifndef ANIMAL_HPP
# define ANIMAL_HPP

#include <string>
#include <iostream>
// method: Function inside class (public/private/protected)
class Animal
{
protected:
    std::string type;

public:
    Animal();
    Animal(Animal &copy);
    Animal& operator=(Animal& other);
    virtual ~Animal();
    
    virtual void makeSound(void) const;

    const std::string   &getType(void) const;
};

#endif