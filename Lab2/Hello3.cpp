#include <iostream>
#include <string>
#include <sstream>
using namespace std;

void Hello3()
{
    string name;
    int age;
    string eduPlace;
    cout << "�� ��� �����? = ";
    cin >> name;
    cout << "������ ��� ����? = ";
    cin >> age;
    cout << "�� �� ���������? = ";//������� �������� ������
    cin >> eduPlace;
    cout << "������ ����, " << name << "!" << endl;
    cout << "³���� ���, ��� ������ " << age << ", � �� ��� ������ ����� � ����������!" << endl;
    cout << eduPlace << " ���� �������� ����!" << endl;//�������� �����������
}

int main()
{
    setlocale(LC_ALL, "rus");
    cout << "\n-------------------Hello3-----------------\n";
    Hello3();
    system("pause");
}