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
    int i = 0;
    double sum = 0;
    while (true)
    {
        int n = 0;
        std::cin >> n;
        if (n == 0)
        {
            break;
        }
        sum += n;
        i++;
    }
    std::printf("%.10lf", sum / i);
    return 0;
}