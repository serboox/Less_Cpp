#include <iostream>

int main()
{
    // put your code here
    int a = 0, b = 0, c = 0, r = 0, k = 0;
    std::cin >> a >> b >> c;
    r = a * c;
    k = b * c;
    if ((k % 100) == 0)
    {
        r += k / 100;
        k = 0;
    }
    else if (k > 100)
    {
        r += k / 100;
        k = k % 100;
    }
    std::cout << r << " " << k << std::endl;
    return 0;
}
