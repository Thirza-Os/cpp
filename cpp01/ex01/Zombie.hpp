#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

#include <string>
#include <iostream>

class Zombie{

    private:
        std::string _name;

    public:
        Zombie();
        ~Zombie();

        void    announce(void);
        void    name_zombie(std::string name);
};

        Zombie  *zombieHorde(int N, std::string name);
#endif