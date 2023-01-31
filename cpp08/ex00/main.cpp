#include "easyfind.hpp"
#include <array>
#include <vector>
#include <queue>
#include <iostream>
#include <stdexcept>

// containers are holder objects that store a collection of objects (its elements).

int main(void)
{
    std::array<int, 7> arr={1,2,3,4,5,6,7};
    int a = 1;

    std::vector<int> vec;
    for (int i = 0; i < 7; i++)
        vec.push_back(i);
    int v = 5;

    std::queue<int> que;
    for (int j = 0; j < 7; j++)
        que.push(j);
    int q = 2;

    try { std::cout << *easyfind(arr, a) << std::endl; }
    catch (std::invalid_argument &e){std::cerr << e.what() << std::endl;}

    try { std::cout << *easyfind(vec, v) << std::endl; }
    catch (std::invalid_argument &e){std::cerr << e.what() << std::endl;}

    try { std::cout << *easyfind(vec, q) << std::endl; }
    catch (std::invalid_argument &e){std::cerr << e.what() << std::endl;}

}
