#include <iostream>
#include <fstream>
#include <cstring>

bool compare_files(const char* file1, const char* file2) {
    std::ifstream f1(file1, std::ios::binary);
    std::ifstream f2(file2, std::ios::binary);
    
    if (!f1.is_open() || !f2.is_open()) return false;
    
    char c1, c2;
    while (f1.get(c1) && f2.get(c2)) {
        if (c1 != c2) {
            f1.close();
            f2.close();
            return false;
        }
    }
    
    bool result = f1.eof() && f2.eof();
    f1.close();
    f2.close();
    return result;
}

void test() {
    std::ofstream f1("file1.txt");
    f1 << "Hello World";
    f1.close();
    
    std::ofstream f2("file2.txt");
    f2 << "Hello World";
    f2.close();
    
    std::ofstream f3("file3.txt");
    f3 << "Hello C++";
    f3.close();
    
    std::cout << "file1.txt == file2.txt: " << (compare_files("file1.txt", "file2.txt") ? "Да" : "Нет") << "\n";
    std::cout << "file1.txt == file3.txt: " << (compare_files("file1.txt", "file3.txt") ? "Да" : "Нет") << "\n";
}

int main(int argc, char* argv[]) {
    if (argc == 3) {
        std::cout << "Файлы " << (compare_files(argv[1], argv[2]) ? "совпадают" : "не совпадают") << "\n";
    } else {
        test();
    }
    return 0;
}
