#include <iostream>
#include <string>
#include <sstream>
using namespace std;

void Swap3()
{
    int a, b, c;
    cout << "¬вед≥ть ј: ";
    cin >> a;
    cout << "¬вед≥ть B:"; //вводимо числа
    cin >> b;
    cout << "¬вед≥ть C:";
    cin >> c;
    int ta = a;
    int tb = b;
    a = c;
    b = ta;//м≥н€Їмо м≥сц€ми
    c = tb;
    cout << "\nј: " << a << "\t B: " << b << "\t C: " << c;//виводимо
}

int main()
{
    setlocale(LC_ALL, "rus");
    cout << "\n-------------------Swap3-----------------\n";//викликаЇмо методи
    Swap3();
    system("pause");
}