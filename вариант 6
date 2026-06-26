#include <iostream>

bool is_lucky(int n) {
    int sum1 = 0, sum2 = 0;
    for (int i = 0; i < 3; ++i) {
        sum2 += n % 10;
        n /= 10;
    }
    for (int i = 0; i < 3; ++i) {
        sum1 += n % 10;
        n /= 10;
    }
    return sum1 == sum2;
}

void find_lucky_tickets() {
    for (int i = 0; i <= 999999; ++i) {
        if (is_lucky(i)) {
            std::cout << i << " ";
        }
    }
    std::cout << "\n";
}

void test() {
    std::cout << "Счастливые билеты (первые 10):\n";
    int count = 0;
    for (int i = 0; i <= 999999 && count < 10; ++i) {
        if (is_lucky(i)) {
            std::cout << i << " ";
            count++;
        }
    }
    std::cout << "\n";
}

int main() {
    test();
    return 0;
}
