#include <iostream>
using namespace std;

void max0()
{
    int a, b;
    cout << "A = ";
    cin >> a;
    cout << "\nB = ";//�������� � �� �
    cin >> b;
    cout << "Max(" << a << ", " << b << ") = ";
    if (a < b)
        cout << b;//������ �����������
    else
        cout << a;
}

int main()
{
    setlocale(LC_ALL, "rus");
    cout << "\n--------------------MAX0----------------------\n";
    max0();
}