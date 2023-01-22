#include <iostream>
using namespace std;

void hit()
{
    int x, y, f, dx, dy;
    int r = rand() % 10 + 1;//Рандомимо радіус до 10
    int x0 = rand() % 100 + 1;
    int y0 = rand() % 100 + 1;//Рандомимо координати до 100
    cout << "Введіть x: ";
    cin >> x;
    cout << "Введіть y: ";//Введення х у
    cin >> y;
    dx = x - x0;
    dy = y - y0;//шукаємо різниці координат
    f = dx * dx + dy * dy;//шукаємо "можливий радіус"
    if (f <= r * r)
    {
        printf("Точка (%d, %d) потрапляє в коло з центром в точці (%d, %d) радіуса %d", x, y, x0, y0, r);
    }//Виводимо результати
    else
        printf("Точка (%d, %d) не потрапляє в коло з центром в точці (%d, %d) радіуса %d", x, y, x0, y0, r);
}

int main()
{
    setlocale(LC_ALL, "rus");
    cout << "\n--------------------HIT----------------------\n";
    hit();
}