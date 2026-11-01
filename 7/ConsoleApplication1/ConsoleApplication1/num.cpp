#include <iostream>
#include <string>
#include <windows.h>
#include "num.h"
using namespace std;
void showNumCodes() 
{
	cout << "Введите цифру(цифры): ";
	cin.ignore();
	string sim;
	getline(cin, sim);
	for (int i = 0; i < sim.length(); i++)
	{
		if (sim[i] == ' ')
		{
			continue;
		}

		if (sim[i] >= '0' && sim[i] <= '9')
		{
			int charCode = static_cast<int>(sim[i]);
			cout << sim[i] << endl;
			cout << "Dec: " << charCode << endl;
			cout << "Hex: 0x" << hex << charCode << dec << endl;
		}
		else
		{
			cout << "error" << endl;
		}
	}
}