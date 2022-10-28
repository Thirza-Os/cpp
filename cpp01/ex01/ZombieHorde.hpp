#ifndef ZOMBIEHORDE_HPP
# define ZOMBIEHORDE_HPP

#include <string>
#include <iostream>

class Zombie{

    private:
        std::string _name;

    public:
        Zombie();
        ~Zombie();

        void    announce(void);
        
        // add member function to name the zombie (could also add another contructor for this)
        void    name_zombie(std::string name);
};
        // function that returns a pointer to an array of zombies
        Zombie  *zombieHorde(int N, std::string name);
#endif