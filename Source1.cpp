#include<iostream>

using namespace std;

int main()
{
	system("chcp 1251");

	string name = "<3";

	cout << "Enter your name: ";
	cin >> name;
	cout << "Hello, " << name << "!" << endl;
}