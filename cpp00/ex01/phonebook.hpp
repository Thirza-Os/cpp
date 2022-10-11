#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

#include <string>
#include <iostream>
#include "Contact.hpp"

class Phonebook{

	private:
	int		index;
	Contact	contacts[8];

	int	pick_contact();

	public:
	Phonebook(); // Constructor
	~Phonebook(); // Destructor

	void	welcome();
	void	add_contact();
	void	search_contact();

	// void	exit_phonebook();

};

#endif