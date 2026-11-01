#include <iostream>
#include <string>
#include <windows.h>
#include "num.h"
using namespace std;
void num() {
	setlocale(LC_ALL, "Rus");
	SetConsoleOutputCP(1251);
	SetConsoleCP(1251);
	cout << "Введите цифру(цифры): ";
	cin.ignore();
	string sim;
	getline(cin, sim);
	for (int i = 0; i < sim.length(); i++)
	{
		if (sim[i] >= '0' && sim[i] <= '9')
		{
			cout << sim[i] << endl;
			cout << "Dec: " << (int)static_cast<unsigned char>(sim[i]) << endl;
			cout << "Hex: 0x" << hex << (int)static_cast<unsigned char>(sim[i]) << endl;
		}
		else if (sim[i] != ' ')
		{
			cout << "error" << endl;
		}
	}
}