#include <iostream>
#include <cmath>

int main()
{
    size_t x = 0;
    std::cin >> x;
    double i = 0;
    while (true)
    {
        if (std::pow(2, i) == x)
        {
            std::printf("YES");
            return 0;
        }

        if (i > 4096)
        {
            break;
        }
        i++;
    }

    std::printf("NO");
    return 0;
}