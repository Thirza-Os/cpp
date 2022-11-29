#include "Iter.hpp"

int main (void)
{
    int intArr[3] = {1, 5, 8};
    char charArr[3] = {'A', 'B', 'C'};

    iter(intArr, 3, swap);
    iter(charArr, 3, swap);

    printArray(intArr);
    printArray(charArr);

}