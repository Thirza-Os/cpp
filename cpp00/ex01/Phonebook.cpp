#include "Phonebook.hpp"

Phonebook::Phonebook()
{
	this->index = 0;
}

Phonebook::~Phonebook()
{

}

void    Phonebook::add_contact(void)
{
	this->contacts[this->index].init_contact();
	this->index++;
}
