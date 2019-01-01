#include <iostream>
#include <cmath>

int main()
{
    int a = 0, b = 0;
    std::cin >> a >> b;
    if (a > b)
    {
        std::printf("%d", a);
        return 0;
    }
    std::printf("%d", b);
    return 0;
}