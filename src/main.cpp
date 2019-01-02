#include <iostream>
#include <cmath>

int main()
{
    int a = 0, b = 0;
    std::cin >> a >> b;
    if (a > b)
    {
        std::printf("%d", 1);
        return 0;
    }
    else if (b > a)
    {
        std::printf("%d", 2);
        return 0;
    }
    std::printf("%d", 0);
    return 0;
}