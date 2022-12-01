#ifndef ARRAY_HPP
# define ARRAY_HPP

#include <string>
#include <stdexcept>
#include <iostream>

template <typename T>

class Array
{
private:
	T				*arr;
    unsigned int    len;

public:
    // construction without parameter: empty arr
    Array<T>(void): arr(NULL), len(0) {std::cout << "constructor called " << std::endl;}

    // construction with parameter len: arr of len length
    Array<T>(unsigned int n): arr(new T[n]), len(n) {std::cout << "constructor(parameter) called " << std::endl;}

	// copy constructor: uses assignment
	Array<T>(Array<T> &copy): arr(new T[copy.len]), len(copy.len) 
	{
		std::cout << "copy constructor called " << std::endl;
		for (size_t i = 0; i < this->len; i++)
			this->arr[i] = copy.arr[i];
	}

	// assignment operator overload: checking if data has to be removed and copying new data
	Array<T>& operator=(Array<T> &other)
	{
		std::cout << "ass operator overload called " << std::endl;
		if (this->len > 0)
			delete [] (this->arr);
		this->len = other.len;
		if (this->len > 0)
		{
			this->arr = new T[other.len];
			for (size_t i = 0; i < this->len; i++)
				this->arr[i] = other.arr[i];
		}
		return (*this);
	}

    ~Array<T>()
	{
		if (this->len > 0)
			delete[] (this->arr);
	}

	T& operator[](unsigned int index) const
	{
		if (index > this->len || index < 0)
			throw std::out_of_range("This is not a correct index!");
		return	(this->arr[index]);
	}

	inline unsigned int	Size(void) const
	{
		return (this->len);
	}
};

#endif