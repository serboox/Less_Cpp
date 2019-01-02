#include <iostream>
#include <cmath>

int main()
{
    int x = 0;
    std::cin >> x;

    size_t i = 1;
    while (true)
    {
        int pow = i * i;
        if (pow > x)
        {
            return 0;
        }
        if (i != 1)
        {
            std::printf(" ");
        }
        std::printf("%d", pow);
        i++;
    }

    return 0;
}