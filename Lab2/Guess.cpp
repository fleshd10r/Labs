#include <iostream>
#include <string>
#include <sstream>
using namespace std;

void Guess()
{
    string str = "x*10 /2 +x /3 +4 /2 -2";
    stringstream ss(str);
    string word;
    int result;
    int x;
    cout << "Загадайте число та введіть його: ";
    cin >> x;//вводимо задумане число
    cout << "Виконайте дії у такому порядку: \n" << endl;

    while (!ss.eof())//поки не дійдимо до кінця
    {
        getline(ss, word, ' ');//розділяємо по пробілу
        cout << word << endl;//виводимо дії
        system("pause");
    }
    result = (((x * 10) / 2 + x) / 3 + 4) / 2 - 2;
    cout << "Ось що отримав я: " << result << endl;//результат програми
    cout << "Введіть, що отримали: ";
    cin >> result;//вводимо результат
}

int main()
{
    setlocale(LC_ALL, "rus");
    cout << "\n-------------------Guess-----------------\n";
    Guess();
    system("pause");
}