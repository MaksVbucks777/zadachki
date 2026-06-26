#include <iostream>
#include <cmath>

double func(double x) {
    return x * x * x - 2 * x + 1;
}

double derivative(double (*f)(double), double x, double h = 1e-7) {
    return (f(x + h) - f(x - h)) / (2 * h);
}

void test() {
    std::cout << "f(x) = x^3 - 2x + 1\n";
    std::cout << "f'(0) = " << derivative(func, 0) << " (ожидается -2)\n";
    std::cout << "f'(1) = " << derivative(func, 1) << " (ожидается 1)\n";
    std::cout << "f'(2) = " << derivative(func, 2) << " (ожидается 10)\n";
}

int main() {
    test();
    return 0;
}
