#ifndef DATA_HPP
# define DATA_HPP

#include <string>
#include <iostream>
#include <cstdint>

struct Data
{
	Data(std::string data, int i): _thisIsData(data), _i(i) {}
	std::string _thisIsData;
	int _i;
};

// To get cout to accept a Date object after the insertion operator, 
// overload the insertion operator to recognize an ostream object on the left and a Date on the right. 
static std::ostream &operator<<(std::ostream &stream, const Data &data)
{
	stream << "Content:		" << data._thisIsData << std::endl;
	stream << "int:			" << data._i << std::endl;

	return (stream);
}

#endif