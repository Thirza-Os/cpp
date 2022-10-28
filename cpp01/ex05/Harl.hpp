//every identifier introduced in a typedef declaration becomes a typedef name: synoniym for the type it becomes if typedef is removed.

#ifndef HARL_HPP
# define HARL_HPP

#include <string>
#include <iostream>

class Harl
{
private:
	void error(void);
	void debug(void);
	void info(void);
	void warning(void);

public:
    Harl();
    ~Harl();
	// public member function calling private member function
	void complain(std::string level);
};


#endif
