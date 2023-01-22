#include <iostream>
using namespace std;

void abcd()
{
    int a, b, c, d, temp;
    cout << "A = ";
    cin >> a;
    cout << "\nB = ";
    cin >> b;
    cout << "\nC = ";//Введення А В С D
    cin >> c;
    cout << "\nD = ";
    cin >> d;
    if (a > b)
    {
        temp = b;
        b = a;
        a = temp;
    }
    if (a > c)
    {
        temp = c;
        c = a;
        a = temp;
    }
    if (a > d)
    {
        temp = d;//Міняємо місцями значення
        d = a;
        a = temp;
    }
    if (b > c)
    {
        temp = c;
        c = b;
        b = temp;
    }
    if (b > d)
    {
        temp = d;
        d = b;
        b = temp;
    }
    if (c > d)
    {
        temp = d;
        d = c;
        c = temp;
    }
    printf("A = %d  B = %d  C = %d D = %d", a, b, c, d);//Виводимо
}

int main()
{
    setlocale(LC_ALL, "rus");
    cout << "\n--------------------ABCD----------------------\n";
    abcd();
}