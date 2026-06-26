#include <iostream>

int F(int n) {
    if (n == 0) return 1;
    if (n == 1) return 2;
    return 2 * F(n - 1) - F(n - 2);
}

void test() {
    std::cout << "F(0) = " << F(0) << "\n";
    std::cout << "F(1) = " << F(1) << "\n";
    std::cout << "F(2) = " << F(2) << "\n";
    std::cout << "F(3) = " << F(3) << "\n";
    std::cout << "F(4) = " << F(4) << "\n";
    std::cout << "F(5) = " << F(5) << "\n";
}

int main() {
    test();
    return 0;
}
