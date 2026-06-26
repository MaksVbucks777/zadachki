#include <iostream>
#include <cstring>

int last_occurrence(const char* str, char ch) {
    int pos = -1;
    for (int i = 0; str[i] != '\0'; ++i) {
        if (str[i] == ch) pos = i;
    }
    return pos;
}

void test() {
    const char* str = "Hello World";
    std::cout << "Строка: " << str << "\n";
    std::cout << "Последнее 'l': " << last_occurrence(str, 'l') << "\n";
    std::cout << "Последнее 'o': " << last_occurrence(str, 'o') << "\n";
    std::cout << "Последнее 'z': " << last_occurrence(str, 'z') << "\n";
}

int main() {
    test();
    return 0;
}
