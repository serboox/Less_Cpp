#include <iostream>
#include <cmath>

int main()
{
    unsigned int h = 0, a = 0, b = 0, nowDist = 0, days = 0;
    std::cin >> h >> a >> b;
    while (true)
    {
        days++;
        nowDist += a;
        if (nowDist >= h)
        {
            std::printf("%d", days);
            return 0;
        }
        nowDist -= b;
    }
}