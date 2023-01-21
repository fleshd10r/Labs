#include <iostream>
#include <string>
#include <Windows.h>
using namespace std;

void anketa()
{
    setlocale(LC_ALL, "Russian");
    cout << "Name : Paley" << endl;
    cout << "Name : Bogdan" << endl;
    cout << "Surname : Evgenyevich" << endl;
    cout << "Become : male" << endl;
    cout << "Date of birth : 2004-03-17" << endl;
    cout << "Addresses : Dnipro, Gagarina Ave. 28" << endl;
    cout << "Phone number : +380680461509" << endl;
    cout << "Place of study : FPM, DNU named after Olesya Honchara" << endl;
    cout << "Group : PZ-21-3" << endl;
    cout << "Hobby : Programming" << endl;
}

int main()
{
    anketa();
    system("pause");
}
