#include "PhoneBook.hpp"

PhoneBook::PhoneBook()
{
	this->index = 0;
}

PhoneBook::~PhoneBook()
{

}

void	PhoneBook::welcome(void)
{
	std::cout << "********************************************************************************" << std::endl << std::endl;
	std::cout << "            Welcome to your awsome PhoneBook! You are awesome!" << std::endl << std::endl;
	std::cout << "Please enter \"ADD\" \"SEARCH\" or \"EXIT\"." << std::endl << std::endl;
	std::cout << "\"ADD\" allwos you to add a contact." << std::endl;
	std::cout << "\"SEARCH\" will display your PhoneBook and allows you to search for a contact." << std::endl;
	std::cout << "\"EXIT\" will exit the PhoneBook :(." << std::endl << std::endl;
	std::cout << "********************************************************************************" << std::endl << std::endl;
}

void    PhoneBook::add_contact(void)
{

	if (this->index == 8)
		this->index = 0;
	if (this->contacts[this->index].init_contact() == 1)
		this->index++;
	return ;
}

int		PhoneBook::pick_contact(void)
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

void    PhoneBook::search_contact(void)
{
	int	i;

	this->contacts->format_contacts_display();
	for(i = 0; i < 8; i++)
		this->contacts[i].contacts_display(i);
	this->pick_contact();
}
