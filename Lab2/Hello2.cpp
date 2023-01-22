#include <iostream>
#include <string>
#include <sstream>
using namespace std;

void Hello2()
{
    string name;
    cout << "Як вас звуть? = ";
    cin >> name;
    cout << "Добрий день, " << name << "!" << endl;//Виводимо повідомлення з ім'ям
}

int main()
{
    setlocale(LC_ALL, "rus");
    cout << "\n-------------------Hello2-----------------\n";
    Hello2();
    system("pause");
}