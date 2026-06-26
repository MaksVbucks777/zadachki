#include <iostream>
#include <cstdlib>
#include <ctime>
#include <iomanip>

int main() {
    const int ROWS = 100;
    const int COLS = 200;
    
    std::srand(static_cast<unsigned int>(std::time(nullptr)));
    
    float** array = new float*[ROWS];
    
    for (int i = 0; i < ROWS; ++i) {
        array[i] = new float[COLS];
    }
    
    for (int i = 0; i < ROWS; ++i) {
        for (int j = 0; j < COLS; ++j) {
            array[i][j] = -1.0f + 2.0f * (static_cast<float>(std::rand()) / RAND_MAX);
        }
    }
    
    for (int i = 0; i < 5; ++i) {
        for (int j = 0; j < 10; ++j) {
            std::cout << std::fixed << std::setprecision(3) 
                      << std::setw(8) << array[i][j] << " ";
        }
        std::cout << "\n";
    }
    
    for (int i = 0; i < ROWS; ++i) {
        delete[] array[i];
    }
    delete[] array;
    
    return 0;
}
