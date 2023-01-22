#include <iostream>
#include <string>
#include <sstream>
using namespace std;

void Swap4()
{
    int a, b, c, d;
    cout << "¬вед≥ть ј: ";
    cin >> a;
    cout << "¬вед≥ть B:";
    cin >> b;
    cout << "¬вед≥ть C:";//вводимо числа
    cin >> c;
    cout << "¬вед≥ть D:";
    cin >> d;
    int ta = a;
    int tb = b;
    int tc = c;
    a = d;
    b = ta;//м≥н€Їмо м≥сц€ми
    c = tb;
    d = tc;
    cout << "\nј: " << a << "\t B: " << b << "\t C: " << c << "\t D: " << d;//виводимо
}

int main()
{
    setlocale(LC_ALL, "rus");
    cout << "\n-------------------Swap4-----------------\n";
    Swap4();
    system("pause");
}