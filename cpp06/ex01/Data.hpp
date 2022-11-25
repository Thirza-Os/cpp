#ifndef DATA_HPP
# define DATA_HPP

#include <string>
#include <iostream>

struct Data
{
	Data(std::string data, int i);

	std::string 	thisIsData;
	int				i;
};

// To get cout to accept a Date object after the insertion operator, 
// overload the insertion operator to recognize an ostream object on the left and a Date on the right. 
std::ostream &operator<<(std::ostream &stream, const Data &data);

#endif