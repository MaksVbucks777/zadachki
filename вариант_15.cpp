#include <iostream>

void sort_array(float* arr, int size) {
    for (int i = 0; i < size - 1; ++i) {
        for (int j = 0; j < size - i - 1; ++j) {
            if (arr[j] > arr[j + 1]) {
                float temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

void print_array(const float* arr, int size) {
    for (int i = 0; i < size; ++i) {
        std::cout << arr[i] << " ";
    }
    std::cout << "\n";
}

void test() {
    float arr[] = {5.5, 2.2, 8.8, 1.1, 9.9, 3.3};
    std::cout << "До: ";
    print_array(arr, 6);
    sort_array(arr, 6);
    std::cout << "После: ";
    print_array(arr, 6);
}

int main() {
    test();
    return 0;
}
