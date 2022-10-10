#ifndef CONTACT_H
# define CONTACT_H

#include <string>
#include <iostream>

class Contact{


	public:
    Contact(); // Constructor
    ~Contact(); // Destructor

	std::string	first_name;
	std::string	last_name;
	std::string	nick_name;
	std::string	darkest_secret;
	std::string	phone_number;

    void    init_contact();
	
};
#endif