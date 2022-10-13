#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

#include <string>
#include <iostream>
#include "Contact.hpp"

class PhoneBook{

	private:
		int		index;
		Contact	contacts[8];

		int	pick_contact();

	public:
		PhoneBook(); // Constructor
		~PhoneBook(); // Destructor

	void	welcome(void);
	void	add_contact(void);
	void	search_contact(void);

};

#endif