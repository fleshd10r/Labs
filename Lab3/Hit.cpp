#include <iostream>
using namespace std;

void hit()
{
    int x, y, f, dx, dy;
    int r = rand() % 10 + 1;//��������� ����� �� 10
    int x0 = rand() % 100 + 1;
    int y0 = rand() % 100 + 1;//��������� ���������� �� 100
    cout << "������ x: ";
    cin >> x;
    cout << "������ y: ";//�������� � �
    cin >> y;
    dx = x - x0;
    dy = y - y0;//������ ������ ���������
    f = dx * dx + dy * dy;//������ "�������� �����"
    if (f <= r * r)
    {
        printf("����� (%d, %d) ��������� � ���� � ������� � ����� (%d, %d) ������ %d", x, y, x0, y0, r);
    }//�������� ����������
    else
        printf("����� (%d, %d) �� ��������� � ���� � ������� � ����� (%d, %d) ������ %d", x, y, x0, y0, r);
}

int main()
{
    setlocale(LC_ALL, "rus");
    cout << "\n--------------------HIT----------------------\n";
    hit();
}