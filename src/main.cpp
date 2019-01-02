#include <iostream>
#include <cmath>

int main()
{
    int a = 0, b = 0, c = 0, d = 0;
    std::cin >> a >> b >> c >> d;
    int x = a - c, y = b - d;
    if ((x >= -1 && x <= 1) && (y >= -1 && y <= 1))
    {
        std::printf("%s", "YES");
        return 0;
    }
    std::printf("%s", "NO");
    return 0;
}