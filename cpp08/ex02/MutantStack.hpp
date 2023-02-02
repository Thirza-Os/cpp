#ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP

#include <string>
#include <iostream>
#include <algorithm>
#include <vector>
#include <iterator>
#include <stack>
#include <deque>

// std::stack warper to underlying container -> a LIFO (last-in, first-out) data structure.
// T            = type of container elements
// conatiner    = type of container

// setting the container to deque (default has iterator)
template <typename T, class Container = std::deque<T> >
class MutantStack: public std::stack<T, Container>
{
public:
    MutantStack(){};
    virtual ~MutantStack(){};
	MutantStack(const MutantStack& copy){
        *this = copy;
    };
    // Replaces the contents with a copy of the contents of other. Effectively calls c = other.c;.
	MutantStack& operator=(const MutantStack & other){
        if (this == &other)
            return *this;
        std::stack<T, Container>::operator=(other);
        return *this;
    };

    // set type it to deque container & then access the iterator
    typedef typename std::stack<T, Container>::container_type::iterator iterator;
    typedef typename std::stack<T, Container>::container_type::const_iterator const_iterator;

// The `begin()` and `end()` functions provide mutable iterators to the underlying container,
// which means that you can modify the elements through these iterators.
    iterator begin()
    {
        return this->c.begin();
    }

    iterator end()
    {
        return this->c.end();
    }
    
// On the other hand, the `cbegin()` and `cend()` functions provide constant iterators to the underlying container,
// which means that you can only read the elements through these iterators and cannot modify them.
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

// Having both mutable and constant iterators is a common pattern in C++
// and it provides more flexibility in terms of how you use the iterators.
// For example, you may want to use a constant iterator when you want to traverse the elements of the container without modifying them,
// and use a mutable iterator when you want to modify the elements of the container.

// In general, it is a good practice to provide both constant and mutable iterators for containers,
// so that the user of the container can choose the appropriate type of iterator based on their needs.
// However, if you only need to provide constant iterators,
// then you only need to provide `cbegin()` and `cend()` functions.
