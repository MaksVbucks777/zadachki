#include <iostream>
#include <cmath>

double func(double x) {
    return x * x - 4;
}

double find_zero(double (*f)(double), double a, double b, double eps = 1e-6) {
    double c;
    while (b - a > eps) {
        c = (a + b) / 2;
        if (f(c) == 0) return c;
        if (f(a) * f(c) < 0) b = c;
        else a = c;
    }
    return (a + b) / 2;
}

void test() {
    std::cout << "Нуль x^2 - 4 на [0, 5]: " << find_zero(func, 0, 5) << "\n";
    std::cout << "Нуль x^2 - 4 на [1, 3]: " << find_zero(func, 1, 3) << "\n";
}

int main() {
    test();
    return 0;
}
