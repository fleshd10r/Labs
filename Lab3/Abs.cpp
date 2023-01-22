#include <iostream>
using namespace std;

void abs()
{
    int x;
    cout << "Введіть число x: ";//введення х
    cin >> x;
    cout << "|" << x << "| = ";
    if (x < 0)
    {
        x = -x;//якщо менше 0 змінюємо знак
    }
    cout << x;
}

int main()
{
    setlocale(LC_ALL, "rus");
    cout << "\n--------------------ABS----------------------\n";
    abs();
}