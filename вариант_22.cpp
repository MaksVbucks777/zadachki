#include <iostream>
#include <chrono>

int main() {
    std::cout << "Нажмите Enter...";
    std::cin.get();
    
    auto start = std::chrono::steady_clock::now();
    
    std::cout << "Нажмите Enter еще раз...";
    std::cin.get();
    
    auto end = std::chrono::steady_clock::now();
    auto diff = end - start;
    
    std::cout << "Интервал: " 
              << std::chrono::duration<double>(diff).count() 
              << " секунд\n";
    
    return 0;
}
