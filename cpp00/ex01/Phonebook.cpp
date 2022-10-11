#include "Phonebook.hpp"

Phonebook::Phonebook()
{
	this->index = 0;
}

Phonebook::~Phonebook()
{

}

void	Phonebook::welcome(void)
{
	std::cout << "********************************************************************************" << std::endl << std::endl;
	std::cout << "            Welcome to your awsome phonebook! You are awesome!" << std::endl << std::endl;
	std::cout << "Please enter \"ADD\" \"SEARCH\" or \"EXIT\"." << std::endl << std::endl;
	std::cout << "\"ADD\" allwos you to add a contact." << std::endl;
	std::cout << "\"SEARCH\" will display your phonebook and allows you to search for a contact." << std::endl;
	std::cout << "\"EXIT\" will exit the phonebook :(." << std::endl << std::endl;
	std::cout << "********************************************************************************" << std::endl << std::endl;
}

void    Phonebook::add_contact(void)
{

	if (this->index == 8)
		this->index = 0;
	if (this->contacts[this->index].init_contact() == 1)
		this->index++;
	return ;
}

int		Phonebook::pick_contact(void)
{
	int	ret;

	std::cout << "Which contact would you like to see?" << std::endl;
	while (!(std::cin >> ret) || ret > 7 || ret < 0)
	{
		std::cin.clear();
		std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
		std::cout << "Please enter a valid contact number" << std::endl;
	}
	std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
	this->contacts[ret].show_single_contact();
	return(ret);
}

void    Phonebook::search_contact(void)
{
	int	i;

	this->contacts->format_contacts_display();
	for(i = 0; i < 8; i++)
		this->contacts[i].contacts_display(i);
	this->pick_contact();
}
