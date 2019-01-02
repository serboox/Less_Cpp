#include <iostream>
#include <cmath>

int main()
{
    size_t x = 0;
    std::cin >> x;

    float i = 0;
    while (true)
    {
        float pow = std::pow(2, i);
        if (pow > x)
        {
            return 0;
        }
        if (i != 0)
        {
            std::printf(" ");
        }
        std::printf("%d", (int)pow);
        i++;
    }
    return 0;
}