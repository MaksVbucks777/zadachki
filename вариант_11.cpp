#include <iostream>

bool has_distinct_digits(int n) {
    bool digits[10] = {false};
    while (n > 0) {
        int d = n % 10;
        if (digits[d]) return false;
        digits[d] = true;
        n /= 10;
    }
    return true;
}

void find_numbers(int N) {
    for (int i = 1; i <= N; ++i) {
        if (has_distinct_digits(i)) {
            std::cout << i << " ";
        }
    }
    std::cout << "\n";
}

void test() {
    std::cout << "Числа с разными цифрами до 100: ";
    find_numbers(100);
}

int main() {
    test();
    return 0;
}
