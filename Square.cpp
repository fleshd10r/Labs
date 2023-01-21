#include <iostream>
#include <string>
#include <Windows.h>
using namespace std;

void square()
{
    cout << endl;
    for (int i = 0; i < 8; i++)
    {
        cout << "\t";
        for (int j = 0; j < 8; j++)
        {
            cout << '*' << ' ';
        }
        cout << endl;
    }
}

int main()
{
    square();
    system("pause");
}
