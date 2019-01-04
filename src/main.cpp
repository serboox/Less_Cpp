#include <iostream>
#include <iomanip> //Для подробного вывода вещественных числел
#include <cmath>
#include <vector>

// trunc() - отсекает вещественную часть, например -3.14 будет -3
// floor() - округляет вниз, например -3.14 будет -4
// cail() - округляет вверх, например -3.14 будет -3
// round() - округедние по математическим правилам, например -3.14 будет -3
// Pi = std::atan(1) * 4
int main()
{
    size_t n = 0;
    double sum = 0, s = 0;
    std::vector<int> xVector;
    while (true)
    {
        int x = 0;
        std::cin >> x;
        if (x == 0)
        {
            break;
        }
        xVector.push_back(x);
        sum += x;
        n++;
    }

    //std::printf("sum:%.11lf\n", sum);
    //std::printf("size:%lu\n", xVector.size());

    s += sum / xVector.size();
    //std::printf("s:%lf\n", s);

    double qt = 0;
    for (n = 0; n < xVector.size(); n++)
    {
        qt += std::pow(xVector[n] - s, 2);
        //std::printf("qt:%lf -> %d - %lf\n", qt, xVector[n], s);
    }

    double q = std::sqrt(qt / (xVector.size() - 1));

    std::printf("%.11lf", q);
    return 0;
}