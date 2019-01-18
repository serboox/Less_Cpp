#include <cmath>
#include <iomanip> //Для подробного вывода вещественных числел
#include <iostream>
#include <vector>

// trunc() - отсекает вещественную часть, например -3.14 будет -3
// floor() - округляет вниз, например -3.14 будет -4
// cail() - округляет вверх, например -3.14 будет -3
// round() - округедние по математическим правилам, например -3.14 будет -3
// Pi = std::atan(1) * 4
int main()
{
  size_t n = 0;
  std::scanf("%zu", &n);
  std::cin.ignore();
  double x = 0;
  std::scanf("%lf", &x);
  std::cin.ignore();
  double res = 0;
  int j = 1;
  for (int i = n; i >= 0; i--)
  {
    double a = 0;
    std::scanf("%lf", &a);
    std::cin.ignore();

    res += a * pow(x, i);
    //std::printf("X%d=%lf*%lf^%d=%lf\n", j, a, x, i, a * pow(x, i));
    j++;
  }
  std::printf("%lf\n", res);
  return 0;
}