#include <iostream>
#include <cmath>

int main()
{
    int a = 0, b = 0, c = 0;
    std::cin >> a >> b >> c;
    if (((a + b) > c) && ((a + c) > b) && ((b + c) > a) && (a > 0 && b > 0 && c > 0))
    {
        std::printf("YES");
        return 0;
    }
    std::printf("NO");
    return 0;
}