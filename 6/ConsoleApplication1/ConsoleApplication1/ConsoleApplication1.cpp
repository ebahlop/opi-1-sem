#include <iostream>
#include <string>
#include <windows.h>
#include "latin.h"
#include "rus.h"
#include "num.h"
using namespace std;
void latin();
void rus();
void num();
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
		int n;
		cin >> n;
		switch (n) {
		case 1:
			latin(); break;
		case 2:
			rus(); break;
		case 3:
			num(); break;
		case 4:
			exit(0); break;
		default:
			cout << "error\n";
		}
	}
}
