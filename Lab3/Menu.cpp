#include <iostream>
using namespace std;

void menu()
{
    int choise;
    cout << "������ ������������ ������� ���������� ��������� ����������: \n1. ������ ��� \n2. ������� ����� \n3. ������ !!! \n������ ��������� ����� � �������� ENTER." << endl;
    cin >> choise;//�������� ������ ������
    if (choise == 1)
        cout << "���� �� ���� �� ����." << endl;
    if (choise == 2)//�������� ��������� �������� �� ���������
        cout << "���� ���� �� ����. ��-��-��!" << endl;
    if (choise == 3)
        cout << "�����.." << endl;
}

int main()
{
    setlocale(LC_ALL, "rus");
    cout << "\n--------------------MENU----------------------\n";
    menu();
}