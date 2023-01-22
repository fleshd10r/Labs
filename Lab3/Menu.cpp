#include <iostream>
using namespace std;

void menu()
{
    int choise;
    cout << "Працює інформаційна система факультету прикладної математики: \n1. Новини дня \n2. Анекдот тижня \n3. Автори !!! \nВведіть відповідний номер і натисніть ENTER." << endl;
    cin >> choise;//Введення номеру пункту
    if (choise == 1)
        cout << "Єгор не сдав усі лаби." << endl;
    if (choise == 2)//Виводимо результат залежний від значенння
        cout << "Єгор сдав усі лаби. Ха-ха-ха!" << endl;
    if (choise == 3)
        cout << "Хтось.." << endl;
}

int main()
{
    setlocale(LC_ALL, "rus");
    cout << "\n--------------------MENU----------------------\n";
    menu();
}