#include <iostream>
#include <conio.h>
using namespace std;

void sum()
{
	int x, res = 0;
	cout << "������ ��c�������� �����, �� ���������� �����(0 - ������ ����� �����)" << endl;
	for (int i = 1;; i++)
	{
		cout << "a[" << i << "] = ";
		cin >> x;
		if (x == 0)
			break;
		res += x;
	}
	cout << "SUM = " << res << endl;
}

int main()
{
	setlocale(LC_ALL, "rus");
	cout << "\n---------------SUM---------------\n";
	sum();
}