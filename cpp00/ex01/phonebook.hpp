#ifndef PHONEBOOK_H
# define PHONEBOOK_H

#include <string>
#include <iostream>

class Contact{


	public:

	// int			index;
	std::string	first_name;
	// std::string	last_name;
	// std::string	nick_name;
	// std::string	darkest_secret;
	// std::string	phone_number;
	
};

class Phonebook{

	public:
	int num;
	Contact	Contacts[1];

	// void	add_contact()
	// {
	// 	std::cout << "First name :" << std::endl;
	// 	std::cin >> Contacts->first_name; 
	// }

	// void	search_contact();

	// void	exit_phonebook();

};


#endif