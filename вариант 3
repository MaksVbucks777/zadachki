#include <iostream>
#include <limits>

int main() {
    std::cout << "Тип float:\n";
    std::cout << "Машинный ноль: " << std::numeric_limits<float>::min() << "\n";
    std::cout << "Машинный эпсилон: " << std::numeric_limits<float>::epsilon() << "\n\n";
    
    std::cout << "Тип double:\n";
    std::cout << "Машинный ноль: " << std::numeric_limits<double>::min() << "\n";
    std::cout << "Машинный эпсилон: " << std::numeric_limits<double>::epsilon() << "\n";
    
    float eps = 1.0f;
    while (1.0f + eps > 1.0f) {
        eps /= 2.0f;
    }
    std::cout << "\nЭкспериментальный эпсилон (float): " << eps * 2 << "\n";
    
    return 0;
}
