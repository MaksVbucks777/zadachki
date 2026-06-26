#include <iostream>
#include <cstring>

void trim(char* str) {
    int start = 0;
    while (str[start] == ' ' || str[start] == '\t') start++;
    
    int end = strlen(str) - 1;
    while (end >= start && (str[end] == ' ' || str[end] == '\t')) end--;
    
    if (start > 0) {
        int len = end - start + 1;
        for (int i = 0; i < len; ++i) {
            str[i] = str[start + i];
        }
        str[len] = '\0';
    } else {
        str[end + 1] = '\0';
    }
}

void test() {
    char str1[] = "   Hello World   ";
    trim(str1);
    std::cout << "|" << str1 << "|\n";
    
    char str2[] = "NoSpaces";
    trim(str2);
    std::cout << "|" << str2 << "|\n";
    
    char str3[] = "   ";
    trim(str3);
    std::cout << "|" << str3 << "|\n";
}

int main() {
    test();
    return 0;
}
