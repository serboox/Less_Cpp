#include <iostream>
#include <cmath>

main()
{
    int a, b, c;
    std::cin >> a >> b >> c;
    if (a > b)
    {
        std::swap(a, b);
    }

    if (a > c)
    {
        std::swap(a, c);
    }

    if (b > c)
    {
        std::swap(b, c);
    }

    std::printf("%d %d %d", a, b, c);
    return 0;
}