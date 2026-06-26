#include <iostream>
#include <cstring>

void sort_strings(char** strings, int count) {
    for (int i = 0; i < count - 1; ++i) {
        for (int j = 0; j < count - i - 1; ++j) {
            if (strcmp(strings[j], strings[j + 1]) > 0) {
                char* temp = strings[j];
                strings[j] = strings[j + 1];
                strings[j + 1] = temp;
            }
        }
    }
}

void test() {
    const char* words[] = {"banana", "apple", "cherry", "date", "fig"};
    char** strings = new char*[5];
    for (int i = 0; i < 5; ++i) {
        strings[i] = new char[strlen(words[i]) + 1];
        strcpy(strings[i], words[i]);
    }
    
    std::cout << "До: ";
    for (int i = 0; i < 5; ++i) std::cout << strings[i] << " ";
    std::cout << "\n";
    
    sort_strings(strings, 5);
    
    std::cout << "После: ";
    for (int i = 0; i < 5; ++i) std::cout << strings[i] << " ";
    std::cout << "\n";
    
    for (int i = 0; i < 5; ++i) delete[] strings[i];
    delete[] strings;
}

int main() {
    test();
    return 0;
}
