#include <iostream>
#include <string>
#include <windows.h>
#include "rus.h"
using namespace std;

bool isRus(char let) {
	if (let >= 'а' && let <= 'я' || let >= 'А' && let <= 'Я' || let == 'Ё' || let == 'ё')
		return true;
	else
		return false;
}

void rus() {
	setlocale(LC_ALL, "Rus");
	SetConsoleOutputCP(1251);
	SetConsoleCP(1251);
	cout << "Введите букву(буквы) русского алфавита: ";
	cin.ignore();
	string sim;
	getline(cin, sim);
	for (int i = 0; i < sim.length(); i++)
	{
		if (sim[i] == 'Ё' || sim[i] == 'ё')
		{
			cout << (char)tolower(sim[i]) << "/" << (char)toupper(sim[i]) << endl;
			cout << "Разница: 16" << endl;
		}
		else if (sim[i] != ' ' && isRus(sim[i]))
		{
			cout << (char)tolower(sim[i]) << "/" << (char)toupper(sim[i]) << endl;
			cout << "Разница: 32" << endl;
		}
		else if (sim[i] != ' ')
		{
			cout << "error" << endl;
		}
	}
}
