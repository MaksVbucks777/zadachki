#include <iostream>

int count_even(const int* arr, int size) {
    int count = 0;
    for (int i = 0; i < size; ++i) {
        if (arr[i] % 2 == 0) count++;
    }
    return count;
}

void test() {
    int arr1[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    std::cout << "Четных в [1..10]: " << count_even(arr1, 10) << "\n";
    
    int arr2[] = {2, 4, 6, 8};
    std::cout << "Четных в [2,4,6,8]: " << count_even(arr2, 4) << "\n";
    
    int arr3[] = {1, 3, 5, 7};
    std::cout << "Четных в [1,3,5,7]: " << count_even(arr3, 4) << "\n";
}

int main() {
    test();
    return 0;
}
