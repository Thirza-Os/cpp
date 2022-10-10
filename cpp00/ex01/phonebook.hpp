#ifndef PHONEBOOK_H
# define PHONEBOOK_H

#include <string>
#include <iostream>
#include "Contact.hpp"

class Phonebook{

	private:
	int		index;
	Contact	contacts[8];

	public:
	Phonebook(); // Constructor
	~Phonebook(); // Destructor

	void	add_contact();

	// void	search_contact();

	// void	exit_phonebook();

};

#endif