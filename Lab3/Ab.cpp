#include <iostream>
using namespace std;

void ab()
{
    int a, b;
    cout << "A = ";
    cin >> a;
    cout << "\nB = ";//�������� � �� �
    cin >> b;
    if (a > b)
    {
        int temp = a;
        a = b;
        b = temp;//̳����� ������� � ���'��
    }
    printf("A = %d  B = %d\n", a, b);//��������
}

int main()
{
    setlocale(LC_ALL, "rus");
    cout << "\n--------------------AB----------------------\n";
    ab();
}