#include <iostream>
#include <conio.h>
using namespace std;

void hit2()
{
	int x, y, f, dx, dy, prev = -1;
	int r = rand() % 10 + 1;
	int x0 = rand() % 100 + 1;
	int y0 = rand() % 100 + 1;
	while (true)
	{
		cout << "Введіть x: ";
		cin >> x;
		cout << "Введіть y: ";
		cin >> y;

		dx = x - x0;
		dy = y - y0;
		f = dx * dx + dy * dy;

		if (f <= r * r)
		{
			printf("\nТочка (%d, %d) потрапляє в коло з центром у точці (%d, %d) радіуса %d\n", x, y, x0, y0, r);
			break;
		}
		if (prev < f && prev != -1)
			cout << "Холодніше.." << endl;
		if (prev > f && prev != -1)
			cout << "Тепліше.." << endl;
		prev = f;
	}
}

int main()
{
	setlocale(LC_ALL, "rus");
	cout << "\n---------------HIT2---------------\n";
	hit2();
}