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
    char adress[100];//��'������� ������ �����
    char tel[100];
    char eduPlace[100];
    char group[100];
    char hobby[100];
    cout << "������� : ";
    cin >> surname;
    cout << "��'� : " << endl;
    cin >> name;
    cout << "��-������� : " << endl;
    cin >> patronymic;
    cout << "����� : " << endl;
    cin >> gender;
    cout << "���� ���������� : " << endl;
    cin >> dateOfBirth;
    cout << "������ : " << endl;//������� ����
    cin >> adress;
    cout << "����� �������� : " << endl;
    cin >> tel;
    cout << "̳��� �������� : " << endl;
    cin >> eduPlace;
    cout << "����� : " << endl;
    cin >> group;
    cout << "���� : " << endl;
    cin >> hobby;

    //�out << "\t\t ������" << endl;
    printf("������� : %.*s \t��'� : %.*s: \t��-������� : %.*s \n", 10, surname, 8, name, 10, patronymic);
    printf("����� �������� : %.*s \t\t���� : %.*s \n", 15, tel, 10, hobby);
    printf("̳��� �������� : %.*s \t����� : %.*s \n", 20, eduPlace, 8, group);//��������� � �������� �����
    printf("���� ���������� : %.*s \t����� : %.*s \n", 15, dateOfBirth, 10, gender);
    printf("������ : %.*s", 30, adress);
}

int main()
{
    setlocale(LC_ALL, "rus");
    cout << "\n-------------------Anketa-----------------\n";
    Anketa();
    system("pause");
}