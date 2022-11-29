#ifndef ARRAY_HPP
# define ARRAY_HPP

#include <string>
#include <stdexcept>

template <typename T>

class Array
{
private:
	T				*arr;
    unsigned int    len;

public:
    // construction without parameter: empty arr
    Array<T>(): arr(NULL), len(0) {}

    // construction with parameter len: arr of len length
    Array<T>(unsigned int n): arr(new T[n]), len(n) {}

	// copy constructor: uses assignment
	Array<T>(Array<T> &copy)
	{
		*this = copy;
	}

	// assignment operator overload: checking if data has to be removed and copying new data
	Array<T>& operator=(Array<T> &other)
	{
		if (*this != other)
		{
			if (this->len > 0)
				delete (this->arr);
			for (size_t i; i < this->len; i++)
				this->arr[i] = other.arr[i];
		}
		return (*this);
	}

    ~Array<T>()
	{
		if (this->len > 0)
			delete (this->arr);
	}

	T& operator[](unsigned int index) const
	{
		if (index > this->len || index < 0)
			throw std::out_of_range("This is not a correct index!");
		return	(this->arr[index]);
	}
};


#endif