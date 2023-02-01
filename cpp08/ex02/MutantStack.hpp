#ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP

#include <string>
#include <iostream>
#include <algorithm>
#include <vector>
#include <iterator>
#include <stack>

template <typename T>
class MutantStack: public std::stack<T>
{
public:
    // MutantStack(){};
    // ~MutantStack(){};
	// MutantStack(const MutantStack& copy){};
	// MutantStack& operator=(const MutantStack & other){};

    typedef typename std::deque<T>::iterator iterator;
    typedef typename std::deque<T>::iterator const_iterator;

    iterator begin()
    {
        return this->c.begin();
    }

    iterator end()
    {
        return this->c.end();
    }

    const_iterator cbegin() const
    {
        return this->c.cbegin();
    }

    const_iterator cend() const
    {
        return this->c.cend();
    }

};

#endif

// The `begin()` and `end()` functions provide mutable iterators to the underlying container,
// which means that you can modify the elements through these iterators.
// On the other hand, the `cbegin()` and `cend()` functions provide constant iterators to the underlying container,
// which means that you can only read the elements through these iterators and cannot modify them.

// Having both mutable and constant iterators is a common pattern in C++
// and it provides more flexibility in terms of how you use the iterators.
// For example, you may want to use a constant iterator when you want to traverse the elements of the container without modifying them,
// and use a mutable iterator when you want to modify the elements of the container.

// In general, it is a good practice to provide both constant and mutable iterators for containers,
// so that the user of the container can choose the appropriate type of iterator based on their needs.
// However, if you only need to provide constant iterators,
// then you only need to provide `cbegin()` and `cend()` functions.
