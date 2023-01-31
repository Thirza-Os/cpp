#ifndef EASYFIND_HPP
# define EASYFIND_HPP

#include <iostream>
#include <algorithm>

// use algorithm header for find.
// iterator: is used to iterate through the container. Use as a pointer (dereference with *)
// iterator is also useful for dynamic lists in a for loop (declare as: vector<int>::iterator i)

template<typename T>
typename T::iterator easyfind(T t, int i)
{
    typename T::iterator ret;
    ret = std::find(t.begin(), t.end(), i);
    if (ret == t.end())
        throw std::invalid_argument(" instance not found ");
    return (ret);
}

#endif