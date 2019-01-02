#include <iostream>
#include <cmath>

int main()
{
    size_t x = 0;
    std::cin >> x;

    size_t i = 2;
    while (true)
    {
        //std::printf("%zu\n", x % i);
        if ((x % i) == 0)
        {
            std::printf("%zu", i);
            return 0;
        }
        if (i > x)
        {
            std::printf("%zu", x);
            return 0;
        }
        i++;
    }
    return 0;
}