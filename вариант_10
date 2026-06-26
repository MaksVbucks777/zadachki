#include <iostream>

int digit_sum(int n) {
    int sum = 0;
    while (n > 0) {
        sum += n % 10;
        n /= 10;
    }
    return sum;
}

void find_numbers(int N) {
    for (int i = 100; i <= 999; ++i) {
        if (digit_sum(i) == N) {
            std::cout << i << " ";
        }
    }
    std::cout << "\n";
}

void test() {
    std::cout << "Трехзначные с суммой цифр = 10: ";
    find_numbers(10);
    std::cout << "Трехзначные с суммой цифр = 5: ";
    find_numbers(5);
}

int main() {
    test();
    return 0;
}
