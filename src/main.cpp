#include <iostream>
#include <cmath>

int main()
{
    int prevVal = 0, curVal = 0, nextVal = 0, lastMaxPosition = 0, minMaxRout = -1;
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
            if (lastMaxPosition != 0 && minMaxRout == -1)
            {
                minMaxRout = i - lastMaxPosition;
            }
            else if (lastMaxPosition != 0 && (minMaxRout > (i - lastMaxPosition)))
            {
                minMaxRout = i - lastMaxPosition;
            }
            if (lastMaxPosition != i)
            {
                lastMaxPosition = i;
            }
        }
        i++;
    }

    if (minMaxRout == -1)
    {
        minMaxRout = 0;
    }

    std::printf("%d", minMaxRout);
    return 0;
}