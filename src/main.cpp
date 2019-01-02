#include <iostream>
#include <cmath>

int main()
{
    int a = 0, b = 0, c = 0, d = 0;
    std::cin >> a >> b >> c >> d;
    if ((a == c) || (b == d))
    {
        std::printf("%s", "YES");
        return 0;
    }
    std::printf("%s", "NO");
    return 0;
}