#include <iostream>
#include <string>
#include <windows.h>
#include "latin.h"
using namespace std;
bool isLatin(char let) {
	if (let >= 'a' && let <= 'z' || let >= 'A' && let <= 'Z')
		return true;
	else
		return false;
}
void latin() {
	setlocale(LC_ALL, "Rus");
	SetConsoleOutputCP(1251);
	SetConsoleCP(1251);
	cout << "Введите букву(буквы) латинского алфавита: ";
	cin.ignore();
	string sim;
	getline(cin, sim);
	for (int i = 0; i < sim.length(); i++)
	{
		if (sim[i] != ' ' && isLatin(sim[i]))
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