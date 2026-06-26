#include <iostream>
#include <cmath>

bool is_prime(int n) {
    if (n < 2) return false;
    if (n == 2) return true;
    if (n % 2 == 0) return false;
    for (int i = 3; i <= std::sqrt(n); i += 2) {
        if (n % i == 0) return false;
    }
    return true;
}

void find_primes(int N) {
    for (int i = 2; i <= N; ++i) {
        if (is_prime(i)) {
            std::cout << i << " ";
        }
    }
    std::cout << "\n";
}

void test() {
    std::cout << "Простые до 50: ";
    find_primes(50);
}

int main() {
    test();
    return 0;
}
