#include <iostream>
#include <string>
#include <sstream>
using namespace std;

void Swap4()
{
    int a, b, c, d;
    cout << "������ �: ";
    cin >> a;
    cout << "������ B:";
    cin >> b;
    cout << "������ C:";//������� �����
    cin >> c;
    cout << "������ D:";
    cin >> d;
    int ta = a;
    int tb = b;
    int tc = c;
    a = d;
    b = ta;//������ ������
    c = tb;
    d = tc;
    cout << "\n�: " << a << "\t B: " << b << "\t C: " << c << "\t D: " << d;//��������
}

int main()
{
    setlocale(LC_ALL, "rus");
    cout << "\n-------------------Swap4-----------------\n";
    Swap4();
    system("pause");
}