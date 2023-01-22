#include <iostream>
#include <string>
#include <sstream>
using namespace std;

void Swap()
{
    int a, b;
    cout << "Введіть А: ";
    cin >> a;
    cout << "Введіть B:";//вводимо числа
    cin >> b;
    int temp = a;
    a = b;//міняємо місцями
    b = temp;
    cout << "\nА: " << a << "\t B: " << b;//виводимо
}

int main()
{
    setlocale(LC_ALL, "rus");
    cout << "\n-------------------Swap-----------------\n";
    Swap();
    system("pause");
}