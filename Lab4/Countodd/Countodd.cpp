#include <iostream>
#include <conio.h>
using namespace std;

void countodd()
{
	int x, res = 0;
	cout << "������ ��c�������� �����, �� ���������� �����(0 - ������ ����� �����)" << endl;
	while (true)
	{
		cout << "������ ����� = ";
		cin >> x;
		if (x == 0)
			break;
		if (x % 2 != 0)
		{
			res++;
		}
	}
	cout << "��������� " << res << "�������� �����." << endl;
}

int main()
{
	setlocale(LC_ALL, "rus");
	cout << "\n---------------COUNTODD---------------\n";
	countodd();
}