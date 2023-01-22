#include <iostream>
#include <conio.h>
using namespace std;

void factor()
{
	int n;
	cout << "Для обчислення N! введіть N: ";
	cin >> n;
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
	cout << "\n---------------FACTOR---------------\n";
	factor();
}