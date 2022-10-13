#ifndef CONTACT_HPP
# define CONTACT_HPP

#include <string>
#include <iostream>
#include <iomanip>

class Contact{

	private:
		std::string	first_name;
		std::string	last_name;
		std::string	nick_name;
		std::string	phone_number;
		std::string	darkest_secret;

		bool		valid_input();
		std::string	format_length(std::string str) const;

	public:
    	Contact(); // Constructor
   		~Contact(); // Destructor

    	bool    init_contact();
		void	format_contacts_display() const;
		void	contacts_display(int index) const;
		void	show_single_contact();
	
};
#endif