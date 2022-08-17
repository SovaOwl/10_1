#include<iostream>

using namespace std;

int main()
{
	system("chcp 1251");
	setlocale(LC_ALL, "Rus");

	string name = "<3";

	cout << "Введите имя: ";
	cin >> name;
	cout << "Здравствуйте, " << name << "!" << endl;
}