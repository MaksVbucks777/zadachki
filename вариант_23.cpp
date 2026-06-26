#include <iostream>
#include <cstring>

int compare_dates(const char* date1, const char* date2) {
    int d1, m1, y1, d2, m2, y2;
    sscanf(date1, "%d/%d/%d", &d1, &m1, &y1);
    sscanf(date2, "%d/%d/%d", &d2, &m2, &y2);
    
    if (y1 != y2) return y1 - y2;
    if (m1 != m2) return m1 - m2;
    return d1 - d2;
}

void test() {
    const char* d1 = "15/06/2023";
    const char* d2 = "20/06/2023";
    const char* d3 = "10/06/2023";
    const char* d4 = "15/06/2023";
    
    std::cout << d1 << " vs " << d2 << ": " << compare_dates(d1, d2) << "\n";
    std::cout << d1 << " vs " << d3 << ": " << compare_dates(d1, d3) << "\n";
    std::cout << d1 << " vs " << d4 << ": " << compare_dates(d1, d4) << "\n";
}

int main() {
    test();
    return 0;
}
