#include <iostream>

void factorize(int n, int divisor = 2) {
    if (n <= 1) return;
    
    if (n % divisor == 0) {
        std::cout << divisor;
        n /= divisor;
        if (n > 1) std::cout << " * ";
        factorize(n, divisor);
    } else {
        factorize(n, divisor + 1);
    }
}

void test() {
    std::cout << "12 = ";
    factorize(12);
    std::cout << "\n";
    
    std::cout << "100 = ";
    factorize(100);
    std::cout << "\n";
    
    std::cout << "97 = ";
    factorize(97);
    std::cout << "\n";
}

int main() {
    test();
    return 0;
}
