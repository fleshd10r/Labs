#include <iostream>
#include <string>
#include <sstream>
using namespace std;

void Parrot()
{
    string str;
    cout << "������ �������� �����: ";
    cin >> str;//���� ������ ����������� ��������� �������� ������
    cout << str << endl;
    exit(1);
}

int main()
{
    setlocale(LC_ALL, "rus");
    cout << "\n-------------------Parrot-----------------\n";
    Parrot();
    system("pause");
}