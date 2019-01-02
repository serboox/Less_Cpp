#include <iostream>
#include <cmath>

int main()
{
    size_t x = 0, i = 0;
    int max = 0;
    std::cin >> max;
    while (true)
    {
        std::cin >> x;
        if (x == 0)
        {
            break;
        }
        if (x > max)
        {
            max = x;
        }
        i++;
    }

    std::printf("%d", max);
    return 0;
}