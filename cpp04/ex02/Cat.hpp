#ifndef CAT_HPP
# define CAT_HPP

#include "A_Animal.hpp"
#include "Brain.hpp"

class Cat: public A_Animal
{
    private:
    Brain *BrainPointer;

    public:
        Cat();
        Cat(Cat &copy);
        Cat& operator=(Cat &other);
        virtual ~Cat();

        virtual void    makeSound(void) const;
        std::string     getBrainIdea(int index);
        void            setBrainIdea(std::string idea, int index);
};

#endif