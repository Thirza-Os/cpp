    #include "Contact.hpp"
    
   Contact::Contact()
    {
    }

   Contact::~Contact()
    {
    }

    void    Contact::init_contact(void)
    {
        std::cout << "Pleas input the first name :" << std::endl;
        std::getline(std::cin, this->first_name);
        std::cout << "Pleas input the last name :" << std::endl;
        std::getline(std::cin, this->last_name);
        std::cout << "Pleas input the nickname :" << std::endl;
        std::getline(std::cin, this->nick_name);
        std::cout << "Please input the darkest secret :" << std::endl;
        std::getline(std::cin, this->darkest_secret);
    }