#include <iostream>
#include <conio.h>
using namespace std;

void parrot2()
{
	const int count = 30;
	char a[count];
	while (true)
	{
		cout << "\n������ ����� ������� ������. �������� Enter ��� ���������� �����." << endl;
		cin.getline(a, count);
		cout << "�����: ";
		cout << a;
		if (a[0] == '\0')
			break;
	}
}

int main()
{
	setlocale(LC_ALL, "rus");
	cout << "\n---------------PARROT2---------------\n";
	parrot2();
}