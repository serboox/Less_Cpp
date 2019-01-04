#include <iostream>
#include <iomanip> //Для подробного вывода вещественных числел
#include <cmath>

// trunc() - отсекает вещественную часть, например -3.14 будет -3
// floor() - округляет вниз, например -3.14 будет -4
// cail() - округляет вверх, например -3.14 будет -3
// round() - округедние по математическим правилам, например -3.14 будет -3
// Pi = std::atan(1) * 4
int main()
{
    double p = 0;
    int x = 0, y = 0;
    std::cin >> p >> x >> y;
    double res = (x * 100) + y;
    res += (res / 100) * p;
    //std::printf("%lf\n", res);
    std::printf("%d %d", int(res / 100), int(res - (int(res / 100) * 100)));
    //std::printf("%d %d", (int)x, (int)std::round((x - (int)x) * 100));
    return 0;
}