#include <iostream>
#include <cmath>

int main()
{
    size_t prevVal = 0, curVal = 0, nextVal = 0, countMax = 0;
    size_t i = 1;
    while (true)
    {
        size_t x = 0;
        std::cin >> x;
        if (x == 0)
        {
            break;
        }
        prevVal = curVal;
        curVal = nextVal;
        nextVal = x;

        if (curVal > prevVal && curVal > nextVal && i > 2)
        {
            countMax++;
        }
        i++;
    }

    std::printf("%zu", countMax);
    return 0;
}