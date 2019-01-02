#include <iostream>
#include <cmath>

int main()
{
    int a = 0, b = 0, c = 0;
    std::cin >> a >> b >> c;
    if (((a + c) > (b + c)) && (a > c))
    {
        std::printf("%d", a);
        return 0;
    }
    else if (b > c)
    {
        std::printf("%d", b);
        return 0;
    }
    std::printf("%d", c);
    return 0;
}