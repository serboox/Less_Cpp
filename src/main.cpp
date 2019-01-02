#include <iostream>
#include <cmath>

int main()
{
    size_t x = 0, i = 0;
    int max = 0, max2 = 0;
    while (true)
    {
        std::cin >> x;
        if (x == 0)
        {
            break;
        }
        if (x > max)
        {
            max2 = max;
            max = x;
        }
        else if (x <= max && x > max2)
        {
            max2 = x;
        }
        i++;
    }

    std::printf("%d", max2);
    return 0;
}