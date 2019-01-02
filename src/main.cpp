#include <iostream>
#include <cmath>

int main()
{
    double n = 0;
    std::cin >> n;
    double i = 0;
    while (true)
    {
        double sqrt5 = std::sqrt(5);
        double arg1 = std::pow((1 + sqrt5) / 2, i);
        //std::printf("arg1: %lf\n", arg1);

        double arg2 = std::pow((1 - sqrt5) / 2, i);
        //std::printf("arg2: %lf\n", arg2);

        double res = 1 / sqrt5 * arg1 - arg2;
        res = round(res);

        if (res == n)
        {
            std::printf("%d", (int)i);
            return 0;
        }
        else if (res > n)
        {
            std::printf("%d", -1);
            return 0;
        }
        i++;
    }
    return 0;
}