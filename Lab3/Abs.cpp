#include <iostream>
using namespace std;

void abs()
{
    int x;
    cout << "������ ����� x: ";//�������� �
    cin >> x;
    cout << "|" << x << "| = ";
    if (x < 0)
    {
        x = -x;//���� ����� 0 ������� ����
    }
    cout << x;
}

int main()
{
    setlocale(LC_ALL, "rus");
    cout << "\n--------------------ABS----------------------\n";
    abs();
}