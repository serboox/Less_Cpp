#include <iostream>
#include <cmath>

int main()
{
    int n = 0,
        m = 0,
        x = 0, // Long
        y = 0; // Short
    std::cin >> n >> m >> x >> y;

    if (n > m)
    {
        int buff = n;
        n = m;
        m = buff;
    }
    int min1 = 0;
    min1 = y;
    if (x < y)
    {
        min1 = x;
    }

    int e = n - x, w = m - y, min2 = 0;
    min2 = w;
    if (e < w)
    {
        min2 = e;
    }

    int min = 0;
    min = min2;
    if (min1 < min2)
    {
        min = min1;
    }

    std::printf("%d", min);
    return 0;
}