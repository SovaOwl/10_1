#include<iostream>

using namespace std;

int main()
{
	system("chcp 1251");

	string name = "<3";

	cout << "Введите имя: ";
	cin >> name;
	cout << "Здравствуйте, " << name << "!" << endl;
}