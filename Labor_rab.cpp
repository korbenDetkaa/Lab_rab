
#include <iostream>
#include <math.h>

int main()
{
    setlocale(LC_ALL, "rus");
    const double pi = 3.14;
    double a, b, x, y;
    std::cout << "¬ведите \"х\":";
    std::cin >> x;
    std::cout << "x = " << x << "\n";
    b = (pi + x) / (x * x);
    a = sqrt(pow((x + b), 2) - 0.25);
    std::cout << "b = " << b << "\n";
    std::cout << "a = " << a << "\n";
    y = (tan(a * x)) + (pow(sin(x), 3) / b);
    std::cout << "y = " << y << "\n";
    return 0;
}

