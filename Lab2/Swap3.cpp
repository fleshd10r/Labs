#include <iostream>
#include <string>
#include <sstream>
using namespace std;

void Swap3()
{
    int a, b, c;
    cout << "������ �: ";
    cin >> a;
    cout << "������ B:"; //������� �����
    cin >> b;
    cout << "������ C:";
    cin >> c;
    int ta = a;
    int tb = b;
    a = c;
    b = ta;//������ ������
    c = tb;
    cout << "\n�: " << a << "\t B: " << b << "\t C: " << c;//��������
}

int main()
{
    setlocale(LC_ALL, "rus");
    cout << "\n-------------------Swap3-----------------\n";//��������� ������
    Swap3();
    system("pause");
}