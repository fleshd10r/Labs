#include <iostream>
#include <conio.h>
using namespace std;

void product()
{
	int x, res = 1;
	cout << "������ ��c�������� �����, �� ���������� �����(0 - ������ ����� �����)" << endl;
	for (int i = 1;; i++)
	{
		cout << "a[" << i << "] = ";
		cin >> x;
		if (x == 0)
			break;
		if (x % 2 == 0)
		{
			res *= x;
		}
	}
	cout << "������� = " << res << endl;
}

int main()
{
	setlocale(LC_ALL, "rus");
	cout << "\n---------------PRODUCT---------------\n";
	product();
}