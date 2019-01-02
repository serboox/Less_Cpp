#include <iostream>
#include <cmath>

int main()
{
    int a = 0, b = 0, c = 0, d = 0;
    std::cin >> a >> b >> c >> d;
    int x = 0, y = 0;
    x = std::abs(a - c);
    y = std::abs(b - d);
    if (x == y)
    {
        std::printf("%s", "YES");
        return 0;
    }
    std::printf("%s", "NO");
    return 0;
}