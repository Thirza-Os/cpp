#ifndef WRONGANIMAL_HPP
# define WRONGANIMAL_HPP

#include <string>
#include <iostream>
// method: Function inside class (public/private/protected)
class WrongAnimal
{
protected:
    std::string type;

public:
    WrongAnimal();
    WrongAnimal(WrongAnimal &copy);
    WrongAnimal& operator=(WrongAnimal& other);
    ~WrongAnimal();
    
    void makeSound(void) const;

    const std::string   &getType(void) const;
};

#endif