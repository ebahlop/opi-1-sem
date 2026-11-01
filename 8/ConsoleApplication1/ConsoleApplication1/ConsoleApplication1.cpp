#include <iostream>
#include <string>
#include <windows.h>
using namespace std;

bool isLatin(char let) {
	if (let >= 'a' && let <= 'z' || let >= 'A' && let <= 'Z')
		return true;
	else
		return false;
}

bool isRus(char let) {
	if (let >= 'а' && let <= 'я' || let >= 'А' && let <= 'Я' || let == 'Ё' || let == 'ё')
		return true;
	else
		return false;
}

int main()
{
	setlocale(LC_ALL, "Rus");
	SetConsoleOutputCP(1251);
	SetConsoleCP(1251);

	cout << "1 - Разница ASCII кодов (латинские буквы)" << endl;
	cout << "2 - Разница Windows-1251 кодов (русские буквы)" << endl;
	cout << "3 - Вывод кода консоли для цифры" << endl;
	cout << "4 - Выход из программы" << endl;

	while (true)
	{
		cout << "Выберите вариант (1-4): ";
		int n; string sim;
		cin >> n;
		switch (n) {
		case 1:
			cout << "Введите букву(буквы) латинского алфавита: ";
			cin.ignore();
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
			break;
		case 2:
			cout << "Введите букву(буквы) русского алфавита: ";
			cin.ignore();
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
			break;
		case 3:
			cout << "Введите цифру(цифры): ";
			cin.ignore();
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
			break;
		case 4:
			return 0; break;
		default:
			cout << "error\n";
		}
	}
}
