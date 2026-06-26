#include <iostream>
#include <fstream>
#include <cstdlib>
#include <ctime>

int main() {
    std::srand(static_cast<unsigned int>(std::time(nullptr)));
    const int N = 10000;
    
    std::ofstream file("numbers.bin", std::ios::binary);
    for (int i = 0; i < N; ++i) {
        int num = (rand() % 2 == 0) ? -1 : 1;
        file.write(reinterpret_cast<const char*>(&num), sizeof(int));
    }
    file.close();
    
    int* array = new int[N];
    std::ifstream infile("numbers.bin", std::ios::binary);
    for (int i = 0; i < N; ++i) {
        infile.read(reinterpret_cast<char*>(&array[i]), sizeof(int));
    }
    infile.close();
    
    long long sum = 0;
    for (int i = 0; i < N; ++i) {
        sum += array[i];
    }
    
    std::cout << "Сумма " << N << " чисел: " << sum << "\n";
    
    delete[] array;
    return 0;
}
