#include <iostream>
#include <string>
#include <sstream>
using namespace std;

void Anketa()
{
    char name[100];
    char surname[100];
    char patronymic[100];
    char gender[100];
    char dateOfBirth[100];
    char adress[100];//об'являємо масиви знаків
    char tel[100];
    char eduPlace[100];
    char group[100];
    char hobby[100];
    cout << "Прізвище : ";
    cin >> surname;
    cout << "Ім'я : " << endl;
    cin >> name;
    cout << "По-батькові : " << endl;
    cin >> patronymic;
    cout << "Стать : " << endl;
    cin >> gender;
    cout << "Дата народження : " << endl;
    cin >> dateOfBirth;
    cout << "Адреса : " << endl;//вводимо данні
    cin >> adress;
    cout << "Номер телефону : " << endl;
    cin >> tel;
    cout << "Місце навчання : " << endl;
    cin >> eduPlace;
    cout << "Група : " << endl;
    cin >> group;
    cout << "Хоббі : " << endl;
    cin >> hobby;

    //сout << "\t\t АНКЕТА" << endl;
    printf("Прізвище : %.*s \tІм'я : %.*s: \tПо-батькові : %.*s \n", 10, surname, 8, name, 10, patronymic);
    printf("Номер телефону : %.*s \t\tХоббі : %.*s \n", 15, tel, 10, hobby);
    printf("Місце навчання : %.*s \tГрупа : %.*s \n", 20, eduPlace, 8, group);//форматуємо і виводимо рядки
    printf("Дата народження : %.*s \tСтать : %.*s \n", 15, dateOfBirth, 10, gender);
    printf("Адреса : %.*s", 30, adress);
}

int main()
{
    setlocale(LC_ALL, "rus");
    cout << "\n-------------------Anketa-----------------\n";
    Anketa();
    system("pause");
}