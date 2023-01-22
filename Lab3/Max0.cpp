#include <iostream>
using namespace std;

void max0()
{
    int a, b;
    cout << "A = ";
    cin >> a;
    cout << "\nB = ";//введення А та В
    cin >> b;
    cout << "Max(" << a << ", " << b << ") = ";
    if (a < b)
        cout << b;//Шукаємо максимальне
    else
        cout << a;
}

int main()
{
    setlocale(LC_ALL, "rus");
    cout << "\n--------------------MAX0----------------------\n";
    max0();
}