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
    cout << "��������� ����� �� ������ ����: ";
    cin >> x;//������� �������� �����
    cout << "��������� 䳿 � ������ �������: \n" << endl;

    while (!ss.eof())//���� �� ������ �� ����
    {
        getline(ss, word, ' ');//��������� �� ������
        cout << word << endl;//�������� 䳿
        system("pause");
    }
    result = (((x * 10) / 2 + x) / 3 + 4) / 2 - 2;
    cout << "��� �� ������� �: " << result << endl;//��������� ��������
    cout << "������, �� ��������: ";
    cin >> result;//������� ���������
}

int main()
{
    setlocale(LC_ALL, "rus");
    cout << "\n-------------------Guess-----------------\n";
    Guess();
    system("pause");
}