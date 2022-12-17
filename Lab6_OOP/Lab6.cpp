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
			cout << "�������� ����� ������ ���������: 1)������� �����, 2)���������� ����� ";
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
				cout << "�������� ����!" << endl;
				label1 = true;
				break;
			}
		}

		bool label2 = true;
		while (label2)
		{
			cout << "�������� ��������: 1)+, 2)-, 3)*, 4)/, 5)= ";
			cin >> oper;
			switch (oper)
			{
			case '1':
				p3 = *(p1 + p2);
				cout << "���������: " << p3 << endl;
				label2 = false;
				break;
			case '2':
				p3 = *(p1 - p2);
				cout << "���������: " << p3 << endl;
				label2 = false;
				break;
			case '3':
				p3 = *(p1 * p2);
				cout << "���������: " << p3 << endl;
				label2 = false;
				break;
			case '4':
				p3 = *(p1 / p2);
				cout << "���������: " << p3 << endl;
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
				cout << "�������� ����!" << endl;
				label2 = true;
				break;
			}
		}

		char choice;
		bool label3 = true;
		while (label3)
		{
			cout << "������� ������ ������ ��� �����? 1 - ������, 2 - ����� ";
			cin >> choice;
			switch (choice)
			{
			default:
				cout << "�������� ����!" << endl;
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