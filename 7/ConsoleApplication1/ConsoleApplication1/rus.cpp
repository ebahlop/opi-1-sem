#include <iostream>
#include <string>
#include <windows.h>
#include "rus.h"
using namespace std;

bool isRus(char let) {
		return (let >= 'а' && let <= 'я' || let >= 'А' && let <= 'Я' || let == 'Ё' || let == 'ё');
}

void showRusCodes()
{
	cout << "Введите букву(буквы) русского алфавита: ";
	cin.ignore();
	string sim;
	getline(cin, sim);
	for (int i = 0; i < sim.length(); i++)
	{
		if (sim[i] == ' ')
		{
			continue;
		}

		if (isRus(sim[i]))
		{
			unsigned char c = static_cast<unsigned char>(sim[i]);
			unsigned char lower = c;
			unsigned char upper = c;

			if (c == 168) { // 'Ё' 'ё'
				lower = 184;
			}
			else if (c == 184) { // 'ё' 'Ё'
				upper = 168;
			}
			else if (c >= 192 && c <= 223) { // Заглавные
				lower = c + 32;
			}
			else if (c >= 224 && c <= 255) { // Строчные
				upper = c - 32;
			}

			cout << static_cast<char>(lower) << "/" << static_cast<char>(upper) << endl;

			if (c == 168 || c == 184) {
				cout << "Разница: 16" << endl;
			}
			else {
				cout << "Разница: 32" << endl;
			}
		}
	}
}
