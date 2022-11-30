#ifndef ITER_HPP
# define ITER_HPP

#include <iostream>

template <typename T>
void increment(T input)
{
    input++;
}

template <typename ARR>
void    iter(ARR *input, size_t len, void (*func)(ARR&))
{
    for (size_t i = 0; i < len; i++)
    {
        func(input[i]);
    }
}

// template to print every type of array. Takes reference of the array and thus the size is clear
// deduces size from its declared type: template functions gets size from the const array (deduces type PRINT from arr)
template <typename PRINT, size_t n>
void    printArray(PRINT const(&input)[n])
{
    for (size_t i = 0; i < n; i++)
        std::cout << input[i] << " ";
    std::cout << std::endl;
}
#endif