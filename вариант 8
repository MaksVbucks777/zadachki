#include <iostream>
#include <cmath>

double func(double x) {
    return x * x - 4 * x + 3;
}

double find_max(double (*f)(double), double a, double b, double step = 0.001) {
    double max_val = f(a);
    for (double x = a; x <= b; x += step) {
        double val = f(x);
        if (val > max_val) max_val = val;
    }
    return max_val;
}

void test() {
    std::cout << "Максимум x^2 - 4x + 3 на [0, 4]: " << find_max(func, 0, 4) << "\n";
    std::cout << "Максимум x^2 - 4x + 3 на [0, 2]: " << find_max(func, 0, 2) << "\n";
}

int main() {
    test();
    return 0;
}
