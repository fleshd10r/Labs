#include <iostream>
#include <conio.h>
using namespace std;

void menu2()
{
	int choise;
	bool flag = true;
	while (flag)
	{
		cout << "������ ������������ ������� ���:" << endl;
		cout << "1. ������ ���" << endl;
		cout << "2. ������� �����" << endl;
		cout << "3. ������!" << endl;
		cout << "0. �����" << endl;
		cout << "������� ����� � ������ ���� �����: ";
		cin >> choise;
		switch (choise)
		{
		case 0:
			cout << "\n�����.." << endl;
			flag = false;
			break;
		case 1:
			cout << "\n������ ���..!" << endl;
			break;
		case 2:
			cout << "\n������� �����..!" << endl;
			break;
		case 3:
			cout << "\n������..!" << endl;
			break;
		}
	}
}

int main()
{
	setlocale(LC_ALL, "rus");
	cout << "\n---------------MENU2---------------\n";
	menu2();
}