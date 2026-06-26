#include <iostream>

void multiply_matrices(const double* A, const double* B, double* C, 
                       int m, int n, int k) {
    for (int i = 0; i < m; ++i) {
        for (int j = 0; j < k; ++j) {
            C[i * k + j] = 0;
            for (int l = 0; l < n; ++l) {
                C[i * k + j] += A[i * n + l] * B[l * k + j];
            }
        }
    }
}

void print_matrix(const double* M, int rows, int cols) {
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            std::cout << M[i * cols + j] << " ";
        }
        std::cout << "\n";
    }
}

void test() {
    double A[6] = {1, 2, 3, 4, 5, 6};
    double B[6] = {7, 8, 9, 10, 11, 12};
    double C[4];
    
    std::cout << "Матрица A (2x3):\n";
    print_matrix(A, 2, 3);
    std::cout << "Матрица B (3x2):\n";
    print_matrix(B, 3, 2);
    
    multiply_matrices(A, B, C, 2, 3, 2);
    std::cout << "Произведение C (2x2):\n";
    print_matrix(C, 2, 2);
}

int main() {
    test();
    return 0;
}
