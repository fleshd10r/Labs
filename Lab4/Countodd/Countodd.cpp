#include <iostream>
#include <conio.h>
using namespace std;

void countodd()
{
	int x, res = 0;
	cout << "¬вед≥ть поcл≥довн≥сть чисел, що зак≥нчуЇтьс€ нулем(0 - означаЇ к≥нець вводу)" << endl;
	while (true)
	{
		cout << "¬вед≥ть число = ";
		cin >> x;
		if (x == 0)
			break;
		if (x % 2 != 0)
		{
			res++;
		}
	}
	cout << "«устр≥лос€ " << res << "непарних числа." << endl;
}

int main()
{
	setlocale(LC_ALL, "rus");
	cout << "\n---------------COUNTODD---------------\n";
	countodd();
}