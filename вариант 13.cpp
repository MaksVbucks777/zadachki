#include <iostream>

bool has_zero_in_every_row_col(const int* matrix, int rows, int cols) {
    for (int i = 0; i < rows; ++i) {
        bool has_zero = false;
        for (int j = 0; j < cols; ++j) {
            if (matrix[i * cols + j] == 0) {
                has_zero = true;
                break;
            }
        }
        if (!has_zero) return false;
    }
    
    for (int j = 0; j < cols; ++j) {
        bool has_zero = false;
        for (int i = 0; i < rows; ++i) {
            if (matrix[i * cols + j] == 0) {
                has_zero = true;
                break;
            }
        }
        if (!has_zero) return false;
    }
    
    return true;
}

void test() {
    int m1[9] = {1, 0, 3, 4, 5, 6, 7, 8, 0};
    std::cout << "Матрица 3x3 с нулями: " 
              << (has_zero_in_every_row_col(m1, 3, 3) ? "Да" : "Нет") << "\n";
    
    int m2[9] = {1, 2, 3, 0, 5, 6, 7, 8, 9};
    std::cout << "Матрица 3x3 без нуля в строке: " 
              << (has_zero_in_every_row_col(m2, 3, 3) ? "Да" : "Нет") << "\n";
}

int main() {
    test();
    return 0;
}
