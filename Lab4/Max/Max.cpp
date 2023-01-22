#include <iostream>
#include <conio.h>
using namespace std;

void max()
{
	int x, max = 0;
	cout << "¬вед≥ть поcл≥довн≥сть чисел, що зак≥нчуЇтьс€ нулем(0 - означаЇ к≥нець вводу)" << endl;
	for (int i = 1;; i++)
	{
		cout << "a[" << i << "] = ";
		cin >> x;
		if (x == 0)
			break;
		if (x > max)
			max = x;
	}
	cout << "MAX = " << max << endl;
}

int main()
{
	setlocale(LC_ALL, "rus");
	cout << "\n---------------MAX---------------\n";
	max();
}