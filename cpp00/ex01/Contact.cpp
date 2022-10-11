    #include "Contact.hpp"
    
// change order: once all fields completed, add to contacts
//empty input still visible in phonebook

   Contact::Contact()
    {
    }

   Contact::~Contact()
    {
    }

    bool    Contact::valid_input(void)
    {
        if (this->first_name.empty() || this->last_name.empty() || this->nick_name.empty() || this->darkest_secret.empty() || this->phone_number.empty())
            return (0);
        return (1);
    }

    bool    Contact::init_contact(void)
    {
        std::cout << "Pleas input the first name :" << std::endl;
        std::getline(std::cin, this->first_name);
        std::cout << "Pleas input the last name :" << std::endl;
        std::getline(std::cin, this->last_name);
        std::cout << "Pleas input the nickname :" << std::endl;
        std::getline(std::cin, this->nick_name);
        std::cout << "Please input the phone number :" << std::endl;
        std::getline(std::cin, this->phone_number);
        std::cout << "Please input the darkest secret :" << std::endl;
        std::getline(std::cin, this->darkest_secret);
        if (this->valid_input() == 0)
        {
            std::cout << "not a valid input" << std::endl;
            return (0);
        }
        return (1);
    }

    void    Contact::show_single_contact(void)
    {
        if (this->first_name.empty())
        {
            std::cout << "This is an empty contact field!" << std::endl;
            return ;
        }
        std::cout << this->first_name << std::endl;
        std::cout << this->last_name << std::endl;
        std::cout << this->nick_name << std::endl;
        std::cout << this->phone_number << std::endl;
        std::cout << this->darkest_secret << std::endl;
    }

    void    Contact::format_contacts_display() const
    {
        std::cout << "Contacts:"<< std::endl;
    }

    std::string Contact::format_length(std::string str) const
    {
        if (str.length() > 10)
            str = str.substr(0,9) + ".";
        return(str);
    }

    void    Contact::contacts_display(int index) const
    {
        std::cout << std::setw(10) << index;
        std::cout << "|"  << std::setw(10) << this->format_length(this->first_name);
        std::cout << "|" << std::setw(10) << this->format_length(this->last_name);
        std::cout << "|" << std::setw(10) << this->format_length(this->nick_name) << std::endl;
    }