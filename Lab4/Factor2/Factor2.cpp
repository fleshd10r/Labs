#include <iostream>
#include <conio.h>
using namespace std;

void factor2()
{
	cout << "��� ���������� N! ������ N: ";
	int n;
	cin >> n;
	if (!cin)
	{
		cout << "Error: N �� ���� ���� ������!";
		return;
	}
	if (n < 0)
	{
		cout << "Error: ����� N ������� ���� �������!" << endl;
		return;
	}
	int res = n;
	cout << n << "! = ";
	while (n != 1)
	{
		n--;
		res *= n;
	}
	cout << res;
}

int main()
{
	setlocale(LC_ALL, "rus");
	cout << "\n---------------FACTOR2---------------\n";
	factor2();
}