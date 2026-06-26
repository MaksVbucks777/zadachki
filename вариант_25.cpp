#include <iostream>
#include <fstream>
#include <string>

int count_lines(const char* filename) {
    std::ifstream file(filename);
    if (!file.is_open()) return -1;
    
    int lines = 0;
    std::string line;
    while (std::getline(file, line)) {
        lines++;
    }
    file.close();
    return lines;
}

void test() {
    std::ofstream file("test.txt");
    file << "Строка 1\nСтрока 2\nСтрока 3\n";
    file.close();
    
    std::cout << "Количество строк в test.txt: " << count_lines("test.txt") << "\n";
}

int main() {
    test();
    return 0;
}
