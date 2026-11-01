#include <iostream>
#include <string>
#include <windows.h>
#include "latin.h"

using namespace std;

bool isLatin(char let) {
	return (let >= 'a' && let <= 'z') || (let >= 'A' && let <= 'Z');
}

void showLatinCodes() 
{
	cout << "Введите букву(буквы) латинского алфавита: ";
	cin.ignore();
	string sim;
	getline(cin, sim);
	for (int i = 0; i < sim.length(); i++) {
		if (sim[i] == ' ')
		{
			continue;
		}

		if (isLatin(sim[i]))
		{
			cout << (char)tolower(sim[i]) << "/" << (char)toupper(sim[i]) << endl;
			cout << "Разница: 32" << endl;
		}
		else
		{
			cout << "error" << endl;
		}
	}
}