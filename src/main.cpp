#include <iostream>

int main()
{
    // put your code here
    unsigned int h = 0, i = 0, s = 0, sec = 0;
    std::cin >> sec;

    if ((sec % 86400) >= 0)
    {
        sec -= (sec / 86400) * 86400;
    }

    //std::printf("%d = %d %% %d\n", sec / 3600, sec, 3600);
    if ((sec % 3600) >= 0)
    {
        h += sec / 3600;
        sec -= h * 3600;
    }

    //std::printf("%d = %d %% %d\n", sec / 60, sec, 60);
    if ((sec % 60) >= 0)
    {
        i += sec / 60;
        sec -= i * 60;
    }
    if (sec > 0)
    {
        s += sec;
    }

    std::printf("%d:", h);
    if (i >= 10)
    {
        std::printf("%d:", i);
    }
    else
    {
        std::printf("0%d:", i);
    }

    if (s >= 10)
    {
        std::printf("%d", s);
    }
    else
    {
        std::printf("0%d", s);
    }
    return 0;
}