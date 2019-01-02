#include <iostream>
#include <cmath>

int main()
{
    size_t x = 0, i = 0;
    int max = 0, maxCount = 1;
    std::cin >> max;
    while (true)
    {
        std::cin >> x;
        if (x == 0)
        {
            break;
        }
        if (x == max)
        {
            maxCount++;
        }
        if (x > max)
        {
            max = x;
            maxCount = 1;
        }
        i++;
    }

    std::printf("%d", maxCount);
    return 0;
}