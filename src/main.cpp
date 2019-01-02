#include <iostream>
#include <cmath>

int main()
{
    int a = 0, b = 0, c = 0;
    std::cin >> a >> b >> c;
    if ((a * b > c) && ((c % a == 0) || (c % b == 0)))
    {
        std::printf("%s", "YES");
        return 0;
    }
    std::printf("%s", "NO");
    return 0;
}