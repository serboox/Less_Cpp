#include <iostream>

int main()
{
    // put your code here
    unsigned int h1 = 0, i1 = 0, s1 = 0, sec1 = 0;
    unsigned int h2 = 0, i2 = 0, s2 = 0, sec2 = 0;
    std::cin >> h1 >> i1 >> s1 >> h2 >> i2 >> s2;

    sec1 = h1 * 3600 + i1 * 60 + s1;
    sec2 = h2 * 3600 + i2 * 60 + s2;

    //std::printf("sec1:%d\nsec2:%d\n", sec1, sec2);
    std::printf("%d", sec2 - sec1);
    return 0;
}