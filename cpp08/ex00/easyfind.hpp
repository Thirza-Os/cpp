#ifndef EASYFIND_HPP
# define EASYFIND_HPP

#include <algorithm>
#include <iostream>


template<typename T>
typename T::iterator easyfind(T t, int i)
{
    typename T::iterator ret;

    ret = std::find(t.begin(), t.end(), i) ;
    if (ret == t.end())
        throw std::invalid_argument(" instance not found ");
    return (ret);
}

#endif