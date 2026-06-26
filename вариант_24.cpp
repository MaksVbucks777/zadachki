#include <iostream>
#include <ctime>
#include <string>

std::string get_current_date() {
    time_t now = time(nullptr);
    tm* local = localtime(&now);
    
    const char* months[] = {
        "январь", "февраль", "март", "апрель", "май", "июнь",
        "июль", "август", "сентябрь", "октябрь", "ноябрь", "декабрь"
    };
    
    char buffer[50];
    sprintf(buffer, "%02d/%s/%d", local->tm_mday, months[local->tm_mon], local->tm_year + 1900);
    return std::string(buffer);
}

void test() {
    std::cout << "Текущая дата: " << get_current_date() << "\n";
}

int main() {
    test();
    return 0;
}
