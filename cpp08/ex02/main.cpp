#include "MutantStack.hpp"

#include <iostream>
// int main()
// {
//     MutantStack<int> sp;
//     sp.push(1);
//     sp.push(2);

//     for (std::deque<int>::iterator it = sp.begin(); it != sp.end(); ++it) {
//     std::cout << *it << ' ';
//     }

//     int size = sp.size();


//     std::cout << size << std::endl;

// }

int main()
{
    MutantStack<int> mstack;
    mstack.push(5);
    mstack.push(17);
    std::cout << mstack.top() << std::endl;
    mstack.pop();
    std::cout << mstack.size() << std::endl;
    mstack.push(3);
    mstack.push(5);
    mstack.push(737);
    //[...]
    mstack.push(0);
    MutantStack<int>::iterator it = mstack.begin();
    MutantStack<int>::iterator ite = mstack.end();
    ++it;
    --it;
    while (it != ite)
    {
    std::cout << *it << std::endl;
    ++it;
    }
    std::stack<int> s(mstack);
    return 0;
}