#include <iostream>
#include <cmath>

int main()
{
    unsigned int num = 0, n1 = 0, n2 = 0, n3 = 0, n4 = 0;
    std::cin >> num;
    n1 = num / 1000;
    n2 = (num - n1 * 1000) / 100;
    n3 = (num - n1 * 1000 - n2 * 100) / 10;
    n4 = (num - n1 * 1000 - n2 * 100 - n3 * 10);
    //std::printf("%d_%d_%d_%d\n", n1, n2, n3, n4);

    if (n1 == n4 && n2 == n3)
    {
        std::printf("%d", 1);
        return 0;
    }
    std::printf("%d", 0);
}