#include <iostream>
#include <string>
#include <sstream>
using namespace std;

void Swap()
{
    int a, b;
    cout << "������ �: ";
    cin >> a;
    cout << "������ B:";//������� �����
    cin >> b;
    int temp = a;
    a = b;//������ ������
    b = temp;
    cout << "\n�: " << a << "\t B: " << b;//��������
}

int main()
{
    setlocale(LC_ALL, "rus");
    cout << "\n-------------------Swap-----------------\n";
    Swap();
    system("pause");
}