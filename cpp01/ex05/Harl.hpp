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
	
	typedef void (*point[]);

public:
    Harl();
    ~Harl();

	void complain(std::string level);
};


#endif