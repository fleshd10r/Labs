#include <iostream>
using namespace std;

void ab()
{
    int a, b;
    cout << "A = ";
    cin >> a;
    cout << "\nB = ";//Введення А та В
    cin >> b;
    if (a > b)
    {
        int temp = a;
        a = b;
        b = temp;//Міняємо місяцями у пам'яті
    }
    printf("A = %d  B = %d\n", a, b);//Виводимо
}

int main()
{
    setlocale(LC_ALL, "rus");
    cout << "\n--------------------AB----------------------\n";
    ab();
}