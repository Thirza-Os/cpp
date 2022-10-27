#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

#include <string>
#include <iostream>
#include "ClapTrap.hpp"

class FragTrap: public ClapTrap
{
private:
	/* data */
public:
	FragTrap();
	FragTrap(std::string name);
	~FragTrap();
	FragTrap&   operator=(FragTrap& other);

	void	highFivesGuys(void);	
};


#endif