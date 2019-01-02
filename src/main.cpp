#include <iostream>
#include <cmath>

int main()
{
    size_t x = 0, i = 0, res = 0;
    while (true)
    {
        std::cin >> x;
        if (x == 0)
        {
            break;
        }
        res += x;
        i++;
    }

    std::printf("%zu", res);
    return 0;
}