#include <iostream>

int reverse_num(int n) {
    int rev = 0;
    while (n > 0) {
        rev = rev * 10 + n % 10;
        n /= 10;
    }
    return rev;
}

bool is_palindrome(int n) {
    return n == reverse_num(n);
}

void find_palindromes(int N) {
    for (int i = 1; i <= N; ++i) {
        if (is_palindrome(i)) {
            std::cout << i << " ";
        }
    }
    std::cout << "\n";
}

void test() {
    std::cout << "Числа-перевертыши до 200: ";
    find_palindromes(200);
}

int main() {
    test();
    return 0;
}
