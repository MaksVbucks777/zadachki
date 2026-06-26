#include <iostream>
#include <cstring>

struct Date {
    int day, month, year;
};

struct Person {
    char name[100];
    Date birth;
};

struct Worker {
    Person person;
    char professions[5][50];
    int categories[5];
    int count;
};

struct Programmer {
    Person person;
    char university[100];
    int grad_year;
    char languages[5][50];
    int proficiency[5];
    int count;
};

void input_person(Person* p) {
    std::cout << "ФИО: ";
    std::cin.getline(p->name, 100);
    std::cout << "Дата рождения (день месяц год): ";
    std::cin >> p->birth.day >> p->birth.month >> p->birth.year;
    std::cin.get();
}

int main() {
    int choice;
    std::cout << "1 - Рабочий, 2 - Программист: ";
    std::cin >> choice;
    std::cin.get();
    
    if (choice == 1) {
        Worker w;
        input_person(&w.person);
        std::cout << "Количество профессий: ";
        std::cin >> w.count;
        std::cin.get();
        for (int i = 0; i < w.count; ++i) {
            std::cout << "Профессия " << i+1 << ": ";
            std::cin.getline(w.professions[i], 50);
            std::cout << "Категория: ";
            std::cin >> w.categories[i];
            std::cin.get();
        }
        
        std::cout << "\nРабочий: " << w.person.name << "\n";
        for (int i = 0; i < w.count; ++i) {
            std::cout << w.professions[i] << " (кат. " << w.categories[i] << ")\n";
        }
    } else if (choice == 2) {
        Programmer p;
        input_person(&p.person);
        std::cout << "ВУЗ: ";
        std::cin.getline(p.university, 100);
        std::cout << "Год окончания: ";
        std::cin >> p.grad_year;
        std::cin.get();
        std::cout << "Количество языков: ";
        std::cin >> p.count;
        std::cin.get();
        for (int i = 0; i < p.count; ++i) {
            std::cout << "Язык " << i+1 << ": ";
            std::cin.getline(p.languages[i], 50);
            std::cout << "Степень владения (1-10): ";
            std::cin >> p.proficiency[i];
            std::cin.get();
        }
        
        std::cout << "\nПрограммист: " << p.person.name << "\n";
        std::cout << p.university << " (" << p.grad_year << ")\n";
        for (int i = 0; i < p.count; ++i) {
            std::cout << p.languages[i] << " (" << p.proficiency[i] << "/10)\n";
        }
    }
    
    return 0;
}
