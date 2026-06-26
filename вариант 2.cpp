#include <iostream>
#include <cstdlib>
#include <ctime>

int main() {
    const int ROWS = 100, COLS = 200;
    std::srand(static_cast<unsigned int>(std::time(nullptr)));
    
    int** array = new int*[ROWS];
    for (int i = 0; i < ROWS; ++i) {
        array[i] = new int[COLS];
    }
    
    for (int i = 0; i < ROWS; ++i) {
        for (int j = 0; j < COLS; ++j) {
            array[i][j] = -3 + rand() % 14;
        }
    }
    
    for (int i = 0; i < 5; ++i) {
        for (int j = 0; j < 10; ++j) {
            std::cout << array[i][j] << " ";
        }
        std::cout << "\n";
    }
    
    for (int i = 0; i < ROWS; ++i) {
        delete[] array[i];
    }
    delete[] array;
    
    return 0;
}
