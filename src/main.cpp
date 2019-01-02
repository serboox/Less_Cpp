#include <iostream>
#include <cmath>

int main()
{
    size_t x = 0;
    size_t i = 0;
    while (true)
    {
        std::cin >> x;
        if (x == 0)
        {
            break;
        }
        i++;
    }

    std::printf("%zu", i);
    return 0;
}