#include <iostream>
#include <conio.h>
using namespace std;

void menu2()
{
	int choise;
	bool flag = true;
	while (flag)
	{
		cout << "Працює інформаційна система ФПМ:" << endl;
		cout << "1. Новини дня" << endl;
		cout << "2. Анекдот тижня" << endl;
		cout << "3. Автора!" << endl;
		cout << "0. Вихід" << endl;
		cout << "Виберіть пункт і введіть його номер: ";
		cin >> choise;
		switch (choise)
		{
		case 0:
			cout << "\nВихід.." << endl;
			flag = false;
			break;
		case 1:
			cout << "\nНовини дня..!" << endl;
			break;
		case 2:
			cout << "\nАнекдот тижня..!" << endl;
			break;
		case 3:
			cout << "\nАвтора..!" << endl;
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