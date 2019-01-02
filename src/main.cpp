#include <iostream>
#include <cmath>

int main()
{
    double n = 0;
    std::cin >> n;
    double sqrt5 = std::sqrt(5);
    double arg1 = std::pow((1 + sqrt5) / 2, n);
    //std::printf("arg1: %lf\n", arg1);

    double arg2 = std::pow((1 - sqrt5) / 2, n);
    //std::printf("arg2: %lf\n", arg2);

    double res = 1 / sqrt5 * arg1 - arg2;
    res = round(res);
    std::printf("%d", (int)res);
    return 0;
}