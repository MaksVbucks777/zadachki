#include <iostream>
#include <cstring>

struct Date {
    int day, month, year;
};

struct Person {
    char name[100];
    Date birth;
};

struct Student {
    Person person;
    char university[100];
    char faculty[100];
    char group[50];
};

struct Schoolchild {
    Person person;
    char school[100];
    int grade;
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
    std::cout << "1 - Школьник, 2 - Студент: ";
    std::cin >> choice;
    std::cin.get();
    
    if (choice == 1) {
        Schoolchild s;
        input_person(&s.person);
        std::cout << "Школа: ";
        std::cin.getline(s.school, 100);
        std::cout << "Класс: ";
        std::cin >> s.grade;
        
        std::cout << "\nШкольник: " << s.person.name << "\n";
        std::cout << "Школа: " << s.school << ", класс: " << s.grade << "\n";
    } else if (choice == 2) {
        Student s;
        input_person(&s.person);
        std::cout << "ВУЗ: ";
        std::cin.getline(s.university, 100);
        std::cout << "Факультет: ";
        std::cin.getline(s.faculty, 100);
        std::cout << "Группа: ";
        std::cin.getline(s.group, 50);
        
        std::cout << "\nСтудент: " << s.person.name << "\n";
        std::cout << "ВУЗ: " << s.university << ", " << s.faculty << ", " << s.group << "\n";
    }
    
    return 0;
}
