#include <iostream>  
#include <cstring>  
#include <Windows.h>
using namespace std;

struct Date {
    int day;
    int month;
    int year;
};

struct Address {
    char street[100];
    char city[50];
    char zeyrs[10];
};

struct Student {
    char* lastName;
    char* firstName;
    char* middleName;
    Date birthDate;
    Address homeAddress;
    char* phoneNumber;
    float* zacket;
    float* Kurs;
    float* eczam;
    int creditsCount;
    int courseworksCount;
    int examsCount;
    
    Student() : lastName(nullptr), firstName(nullptr), middleName(nullptr),
        phoneNumber(nullptr), zacket(nullptr),
        Kurs(nullptr), eczam(nullptr),
        creditsCount(0), courseworksCount(0), examsCount(0) {}
    
    ~Student() {
        delete[] lastName;
        delete[] firstName;
        delete[] middleName;
        delete[] phoneNumber;
        delete[] zacket;
        delete[] Kurs;
        delete[] eczam;
    }

    void fillData() {
        char Charics[100];

        lastName = new char[100];
        cout << "Введите фамилечку: ";
        cin >> lastName;

        firstName = new char[100];
        cout << "Введите имечко: ";
        cin >> firstName;

        middleName = new char[100];
        cout << "Введите отчество: ";
        cin >> middleName;

        cout << "Введите дату рождения (денёк месяцок годик): ";
        cin >> birthDate.day >> birthDate.month >> birthDate.year;

        cout << "Введите домашненький адресок (улицочка городок и почтовый индекс): ";
        cin.ignore(); 
        cin.getline(homeAddress.street, 100);
        cin.getline(homeAddress.city, 50);
        cin.getline(homeAddress.zeyrs, 10);

        phoneNumber = new char[20];
        cout << "Введите номерок телефончика: ";
        cin >> phoneNumber;
 
        cout << "Введите количество зачетиков: ";
        cin >> creditsCount;
        zacket = new float[creditsCount];
        cout << "Введите оценочки за зачетие (через пробельчик): ";
        for (int i = 0; i < creditsCount; ++i) {
            cin >> zacket[i];
        }

        cout << "Введите количество курсовых работ: ";
        cin >> courseworksCount;
        Kurs = new float[courseworksCount];
        cout << "Введите оценочки за курсовые работки (через пробельчик): ";
        for (int i = 0; i < courseworksCount; ++i) {
            cin >> Kurs[i];
        }

        cout << "Введите количество экзаменчиков: ";
        cin >> examsCount;
        eczam = new float[examsCount];
        cout << "Введите оценочки за экзаменчики (через пробельчики очень желательно! ): ";
        for (int i = 0; i < examsCount; ++i) {
            cin >> eczam[i];
        }
    }

    void printInfo() { 
        cout << "Фамилия: " << lastName << "\n";
        cout << "Имёчко: " << firstName << "\n";
        cout << "Отчество: " << middleName << "\n";
        cout << "Дата рождения: " << birthDate.day << "." << birthDate.month << "." << birthDate.year << "\n";
        cout << "Домашний адресок: " << homeAddress.street << ", " << homeAddress.city << ", " << homeAddress.zeyrs << "\n";
        cout << "Телефончик: " << phoneNumber << "\n";

        cout << "Оценочки за зачетик: ";
        for (int i = 0; i < creditsCount; ++i) {
            cout << zacket[i] << " ";
        }
        cout << "\n";

        cout << "Оценочки за курсовые работки: ";
        for (int i = 0; i < courseworksCount; ++i) {
            cout << Kurs[i] << " ";
        }
        cout << "\n";

        cout << "Оценки за экзаменчики: ";
        for (int i = 0; i < examsCount; ++i) {
            cout << eczam[i] << " ";
        }
        cout << "\n";
    }
};

int main() {
    Student student;
    student.fillData();
    student.printInfo();

    return 0;
}