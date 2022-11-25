#include "Data.hpp"

Data::Data(std::string data, int i): thisIsData(data), i(i)
{}

std::ostream &operator<<(std::ostream &stream, const Data &data)
{
	stream << "Content:		" << data.thisIsData << std::endl;
	stream << "int:			" << data.i << std::endl;

	return (stream);
}