#ifndef DOG_HPP
# define DOG_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class Dog: public Animal
{
    private:
        Brain*  BrainPointer;

    public:
        Dog();
        Dog(Dog &copy);
        Dog& operator=(Dog &other);
        virtual ~Dog();

        virtual void    makeSound(void) const;
        std::string     getBrainIdea(int index);
        void            setBrainIdea(std::string idea, int index);
};

#endif