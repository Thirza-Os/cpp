#include "Span.hpp"

Span::Span(): _N(0)
{
    std::cout << " basic contructor called" << std::endl;
}

Span::Span(const unsigned int N): _N(N)
{
    std::cout << "contructor called" << std::endl;
	this->span.reserve(N);
}

Span::~Span()
{
    std::cout << "destructor called " << std::endl;

    if (this->_N > 0)
        this->span.clear();
}

Span::Span(const Span &copy): _N(copy._N)
{
    std::cout << "copy constructor called " << std::endl;

    *this = copy;
}

Span& Span::operator=(const Span & other)
{
    std::cout << "ass operator overload called " << std::endl;

	if (this == &other)
		return *this;
    if (this->_N > 0)
	{
		this->span.resize(other._N);
        this->span = other.span;
    }
    return *this;
}

unsigned int Span::getSize(void) const
{
    return (span.size());
}

void    Span::addNumber(int i)
{
    if (this->span.size()== this->_N)
        throw std::out_of_range("The span is already full");
    this->span.push_back(i);
}

unsigned int Span::shortestSpan()
{    
    unsigned int ret = UINT_MAX;

    if (this->span.size() <= 1)
        throw std::out_of_range("There are too few elements");

    std::vector<int> temp = this->span;
    sort(temp.begin(), temp.end(), std::greater<int>());
    for (std::vector<int>::iterator base = temp.begin(); base != temp.end() - 1; base++)
    {   
		if(ret > (unsigned int)*base - (unsigned int)*(base + 1))
			ret = (unsigned int)*base - (unsigned int)*(base + 1);
    }
    return (ret);
}

unsigned int     Span::longestSpan()
{
    if (this->span.size() <= 1)
        throw std::out_of_range("There are too few elements");
    return (*max_element(this->span.begin(), this->span.end()) - *min_element(this->span.begin(), this->span.end()));
}

void	Span::addRange(int min, int max)
{
	for (int i = min; i < max; i++)
		addNumber(i);
}

void	Span::printRange()
{
	for (std::vector<int>::iterator it = span.begin(); it != span.end(); it++)
		std::cout << *it << std::endl;
}