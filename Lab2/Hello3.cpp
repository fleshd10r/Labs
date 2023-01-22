#include <iostream>
#include <string>
#include <sstream>
using namespace std;

void Hello3()
{
    string name;
    int age;
    string eduPlace;
    cout << "Як вас звуть? = ";
    cin >> name;
    cout << "Скільки вам років? = ";
    cin >> age;
    cout << "Де Ви навчаєтесь? = ";//вводимо значення змінних
    cin >> eduPlace;
    cout << "Добрий день, " << name << "!" << endl;
    cout << "Вітаємо Вас, Вам усього " << age << ", а Ви вже ведете діалог з комп’ютером!" << endl;
    cout << eduPlace << " буде пишатися вами!" << endl;//виводимо повідомлення
}

int main()
{
    setlocale(LC_ALL, "rus");
    cout << "\n-------------------Hello3-----------------\n";
    Hello3();
    system("pause");
}