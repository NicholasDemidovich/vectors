#include "stdio.h"
#include <locale.h>
#include <iomanip>
#include <iostream>
#include <typeinfo> 
#include "vector.h"
#include "func.h"
#include "Cls.h"
using namespace std;



void main()
{
	setlocale(LC_ALL,"Rus");
	vector <Cls> vect;
	bool flag;
	int sw;
	while (true)
	{
		cout << "\n\t 0 - выход, 1 - int, 2 - char:   ";
		cin >> sw;
		switch (sw)
		{
		case 0:return;
		case 1:
			while (true)
			{
				cout << "\n\t 0 - выход на верхний уровень, 1 - ввод данных, 2 - вывод,"
					<< "\n\t 3 -поиск , 4 - сортировка , 5 - удаление:   ";
				cin >> sw;
				switch (sw)
				{
				case 0: break;
				case 1:
					enterInt(vect);
					break;
				case 2:
					printInt(vect);
					break;
				case 3:
					findInt(vect);
					break;
				case 4:
					sort(vect);
					break;
				case 5:
					deleteInt(vect);
					break;
				default:
					break;
				}
				if (sw == 0) { deleteAll(vect); break; }
			}
			break;
		case 2:
			while (true)
			{
				cout << "\n\t 0 - выход на верхний уровень, 1 - ввод данных, 2 - вывод,"
					<< "\n\t 3 -поиск , 4 - сортировка , 5 - удаление:   ";
				cin >> sw;
				switch (sw)
				{
				case 0: break;
				case 1:
					enterChar(vect);
					break;
				case 2:
					printChar(vect);
					break;
				case 3:
					findChar(vect);
					break;
				case 4:
					sortChar(vect);
					break;
				case 5:
					deleteChar(vect);
				default:
					break;
				}
				if (sw == 0) { deleteAll(vect);  break; }
			}
			break;
		default:break;
		}

	}
	system("pause");
	return;
}





