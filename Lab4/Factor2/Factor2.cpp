#include <iostream>
#include <conio.h>
using namespace std;

void factor2()
{
	cout << "Для обчислення N! введіть N: ";
	int n;
	cin >> n;
	if (!cin)
	{
		cout << "Error: N не може бути рядком!";
		return;
	}
	if (n < 0)
	{
		cout << "Error: число N повинно бути додатнім!" << endl;
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