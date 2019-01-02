#include <iostream>
#include <cmath>

int main()
{
    int a = 0, b = 0, c = 0;
    std::cin >> a >> b >> c;
    if (a == b && b == c)
    {
        std::printf("%d", 3);
        return 0;
    }
    else if (a != b && a != c && b != c)
    {
        std::printf("%d", 0);
        return 0;
    }
    std::printf("%d", 2);
    return 0;
}