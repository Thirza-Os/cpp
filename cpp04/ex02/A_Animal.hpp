#ifndef A_ANIMAL_HPP
# define A_ANIMAL_HPP

#include <string>
#include <iostream>
// An abstract class is a class that is designed to be specifically used as a base class.
// Abstract class contains at least one purely virtual function.
// Make a function virtual by adding a pure specifier ( = 0);

// adding virtual function "sound" as set to null: making it purely virtual (not callable without subclass)

class A_Animal
{
protected:
    std::string type;

public:
    A_Animal();
    A_Animal(A_Animal &copy);
    A_Animal& operator=(A_Animal& other);
    virtual ~A_Animal();
    
    virtual void makeSound(void) const = 0;

    const std::string   &getType(void) const;
};

#endif