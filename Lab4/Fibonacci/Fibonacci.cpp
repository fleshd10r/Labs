#include <iostream>
#include <conio.h>
using namespace std;

void fibonacci()
{
	int a = 0, b = 1;
	int n;
	cout << "¬вед≥ть номер n-го члену, €кий треба знайти:";
	cin >> n;
	if (n == 1)
		cout << "F(1) = " << a;
	else if (n == 2)
		cout << "F(2) = " << b;
	else
	{
		for (int i = 3; i <= n; i++)
		{
			//b += a;
			//a = b - a
			int c = a + b;
			a = b;
			b = c;
		}
		cout << "F(" << n << ") = " << b << endl;
	}
}

int main()
{
	setlocale(LC_ALL, "rus");
	cout << "\n---------------FIBONACCI---------------\n";
	fibonacci();
}