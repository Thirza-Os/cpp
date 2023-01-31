#ifndef SPAN_HPP
# define SPAN_HPP

#include <string>
#include <iostream>
#include <algorithm>
#include <vector>
#include <iterator>

class Span
{
private:
    const unsigned int 	    _N;
    std::vector<int>	    span;

public:
    Span();
    Span(const unsigned int N);
    ~Span();
	Span(const Span& copy);
	Span& operator=(const Span & other);

    unsigned int    getSize() const;

    void            addNumber(int i);
    unsigned int    shortestSpan();
    unsigned int    longestSpan();
    void            addRange(int min, int max);

    void            printRange();

};

#endif