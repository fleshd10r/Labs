#include <iostream>
using namespace std;

void abc()
{
    int a, b, c, temp;
    cout << "A = ";
    cin >> a;
    cout << "\nB = ";//�������� � � �
    cin >> b;
    cout << "\nC = ";
    cin >> c;
    if (a > b)
    {
        temp = b;
        b = a;
        a = temp;
    }
    if (a > c)
    {
        temp = c;//̳����� ������ ��������
        c = a;
        a = temp;
    }
    if (b > c)
    {
        temp = c;
        c = b;
        b = temp;
    }
    printf("A = %d  B = %d  C = %d\n", a, b, c);//��������
}

int main()
{
    setlocale(LC_ALL, "rus");
    cout << "\n--------------------ABC----------------------\n";
    abc();
}