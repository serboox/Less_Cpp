#include <iostream>
#include <cmath>

//(V*t%s+s)%s
//S - длина окружности(км);
//V - скорость(км/час);
//T - время(час);
int main()
{
    const int MKAD_LENGNH = 109;
    int v = 0;
    unsigned int vm = 0, t = 0, res = 0, dist = 0;
    std::cin >> v >> t;

    vm = std::abs(v);
    dist = (vm * t % MKAD_LENGNH + MKAD_LENGNH) % MKAD_LENGNH;
    //std::printf("Dist: %d\n", 0);
    if (dist == 109 || dist == -109 || dist == 0)
    {
        std::printf("%d", 0);
    }
    else if (v < 0)
    {
        std::printf("%d", MKAD_LENGNH - dist);
    }
    else
    {
        std::printf("%d", dist);
    }
    return 0;
}