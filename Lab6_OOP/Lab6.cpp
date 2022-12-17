#include "FazzyNumber.h"
#include "Fraction.h"
#include <Windows.h>

using namespace std;

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	FazzyNumber p1, p2, p3;
	Fraction p4, p5, p6;

	bool flag = true;
	while (flag)
	{
		char mode, oper;
		bool label1 = true;
		while (label1)
		{
			cout << "Выберите режим работы программы: 1)неявные числа, 2)десятичные дроби ";
			cin >> mode;
			switch (mode)
			{
			case '1':
				cin >> p1 >> p2;
				label1 = false;
				break;
			case '2':
				cin >> p4 >> p5;
				label1 = false;
				break;
			default:
				cout << "Неверный ввод!" << endl;
				label1 = true;
				break;
			}
		}

		bool label2 = true;
		while (label2)
		{
			cout << "Выберите операцию: 1)+, 2)-, 3)*, 4)/, 5)= ";
			cin >> oper;
			switch (oper)
			{
			case '1':
				p3 = *(p1 + p2);
				cout << "Результат: " << p3 << endl;
				label2 = false;
				break;
			case '2':
				p3 = *(p1 - p2);
				cout << "Результат: " << p3 << endl;
				label2 = false;
				break;
			case '3':
				p3 = *(p1 * p2);
				cout << "Результат: " << p3 << endl;
				label2 = false;
				break;
			case '4':
				p3 = *(p1 / p2);
				cout << "Результат: " << p3 << endl;
				label2 = false;
				break;
			case '5':
				if (p1 == p2)
				{
					cout << p1 << " = " << p2 << endl;
				}
				else
				{
					cout << p1 << " != " << p2 << endl;
				}
				label2 = false;
				break;
			default:
				cout << "Неверный ввод!" << endl;
				label2 = true;
				break;
			}
		}

		char choice;
		bool label3 = true;
		while (label3)
		{
			cout << "Желаете начать заново или выйти? 1 - заново, 2 - выйти ";
			cin >> choice;
			switch (choice)
			{
			default:
				cout << "Неверный ввод!" << endl;
				label3 = true;
				break;
			case '1':
				flag = true;
				label3 = false;
				break;
			case '2':
				flag = false;
				label3 = false;
				break;
			}
		}
	}
}