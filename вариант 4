#include <iostream>
#include <cmath>

double vector_length(const double* arr, int n) {
    double sum = 0;
    for (int i = 0; i < n; ++i) {
        sum += arr[i] * arr[i];
    }
    return std::sqrt(sum);
}

void test() {
    double v1[] = {3, 4};
    std::cout << "Длина (3,4): " << vector_length(v1, 2) << "\n";
    
    double v2[] = {1, 2, 2};
    std::cout << "Длина (1,2,2): " << vector_length(v2, 3) << "\n";
    
    double v3[] = {0, 0, 0, 0};
    std::cout << "Длина (0,0,0,0): " << vector_length(v3, 4) << "\n";
}

int main() {
    test();
    return 0;
}
