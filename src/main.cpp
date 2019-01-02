#include <iostream>
#include <cmath>

int main()
{
    int a1, b1, c1, a2, b2, c2;
    std::cin >> a1 >> b1 >> c1 >> a2 >> b2 >> c2;

    if (a1 > b1)
    {
        std::swap(a1, b1);
    }
    if (a1 > c1)
    {
        std::swap(a1, c1);
    }
    if (b1 > c1)
    {
        std::swap(b1, c1);
    }

    if (a2 > b2)
    {
        std::swap(a2, b2);
    }
    if (a2 > c2)
    {
        std::swap(a2, c2);
    }
    if (b2 > c2)
    {
        std::swap(b2, c2);
    }

    if (a1 == a2 && b1 == b2 && c1 == c2)
    {
        std::printf("Boxes are equal"); //если коробки одинаковые
        return 0;
    }
    else if (a1 <= a2 && b1 <= b2 && c1 <= c2)
    {
        std::printf("The first box is smaller than the second one"); //если первая коробка может быть положена во вторую
        return 0;
    }

    else if (a1 >= a2 && b1 >= b2 && c1 >= c2)
    {
        std::printf("The first box is larger than the second one"); //если вторая коробка может быть положена в первую
        return 0;
    }

    //std::printf("Box one: %d %d %d\n", a1, b1, c1);
    //std::printf("Box two: %d %d %d\n", a2, b2, c2);
    std::printf("Boxes are incomparable"); //во всех остальных случаях
    return 0;
}