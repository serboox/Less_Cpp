#include <iostream>
#include <cmath>

int main()
{
    size_t lastVal = 0, count = 1, countMax = 1, i = 0;
    while (true)
    {
        size_t x = 0;
        std::cin >> x;
        if (x == 0)
        {
            break;
        }

        if (x == lastVal)
        {
            count++;
            if (count > countMax)
            {
                countMax = count;
            }
        }
        else
        {
            count = 1;
            lastVal = x;
        }
        i++;
    }

    std::printf("%zu", countMax);
    return 0;
}