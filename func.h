#pragma once
#include "stdio.h"
#include <locale.h>
#include <iomanip>
#include <iostream>
#include <typeinfo> 
#include "vector.h"
#include "Cls.h"
using namespace std;

void enterInt(vector<Cls> &vect)
{
	Cls* obj1 = new Cls();
	Cls* obj2 = new Cls();
	Cls* obj3 = new Cls();
	int tmpInt;
	cout << "Введите число:  ";
	cin >> tmpInt;
	obj1->setVectInt(tmpInt);
	vect.set(*obj1);

	cout << "Введите число:  ";
	cin >> tmpInt;
	obj2->setVectInt(tmpInt);
	vect.set(*obj2);

	cout << "Введите число:  ";
	cin >> tmpInt;
	obj3->setVectInt(tmpInt);
	vect.set(*obj3);
}

void printInt(vector<Cls> &vect)
{
	if (vect.get_size() == 0) { cout << "\n\tВектор пуст!" << endl; return; }
	cout << "\nВывод вектора: " << endl;
	for (int i = 0; i < vect.get_size(); i++)
	{
		cout << "Число:  " << vect[i].getVectInt()<<endl;
	}
}

void findInt(vector<Cls>& vect)
{
	bool flag = true;
	int tmpInt;
	cout << "\n\t Введите искомый элемент:  ";
	cin >> tmpInt;
	for (int i = 0; i < vect.get_size(); i++)
	{
		if (tmpInt==vect[i].getVectInt())
		{
			cout << "\n\t Элемент найден: ";
			cout << setw(3) << vect[i].getVectInt() << endl;
			flag = false;
			break;
		}
	}
	if (flag) { cout << "\n\t Элемента: " << tmpInt << " в векторе нет!" << endl; }
}

void sort(vector<Cls>& vect)
{
	int tmpInt;
	for (int i = 0; i < vect.get_size(); i++)
	{
		for (int j = i; j < vect.get_size(); j++)
			if (vect[i].getVectInt() > vect[j].getVectInt())
			{
				tmpInt = vect[i].getVectInt();
				vect[i].setVectInt(vect[j].getVectInt());
				vect[j].setVectInt(tmpInt);
			}
	}
}

void deleteInt(vector<Cls>& vect)
{
	int tmpInt;
	int count = vect.get_size();
	bool flag = true;
	cout << "\n\t Введите удаляемый элемент:  ";
	cin >> tmpInt;
	for (int i = 0; i < vect.get_size(); i++)
	{
		if (tmpInt == vect[i].getVectInt())
		{
			cout << "\n\t Элемент: " << tmpInt << " удален!" << endl;
			for (int j = i; j < vect.get_size() - 1; j++)
			{
				vect[j].setVectInt(vect[j+1].getVectInt());
			}
			count--;
			vect.set_size(count);
			flag = false;
			return;
		}
	}
	if (flag) { cout << "\n\t Элемента: " << tmpInt << " в векторе нет!" << endl; }
}


void enterChar(vector<Cls>& vect)
{
	Cls* obj1 = new Cls();
	Cls* obj2 = new Cls();
	Cls* obj3 = new Cls();
	char tmpChar;
	cout << "Введите символ:  ";
	cin >> tmpChar;
	obj1->setVectChar(tmpChar);
	vect.set(*obj1);

	cout << "Введите символ:  ";
	cin >> tmpChar;
	obj2->setVectChar(tmpChar);
	vect.set(*obj2);

	cout << "Введите символ:  ";
	cin >> tmpChar;
	obj3->setVectChar(tmpChar);
	vect.set(*obj3);
}

void printChar(vector<Cls>& vect)
{
	if (vect.get_size() == 0) { cout << "\n\tВектор пуст!" << endl; return; }
	cout << "\nВывод вектора: " << endl;
	for (int i = 0; i < vect.get_size(); i++)
	{
		cout << "Символ:  " << vect[i].getVectChar() << endl;
	}
}

void findChar(vector<Cls>& vect)
{
	bool flag = true;
	char tmpChar;
	cout << "\n\t Введите искомый символ:  ";
	cin >> tmpChar;
	for (int i = 0; i < vect.get_size(); i++)
	{
		if (tmpChar == vect[i].getVectChar())
		{
			cout << "\n\t Символ найден: ";
			cout << setw(3) << vect[i].getVectChar() << endl;
			flag = false;
			break;
		}
	}
	if (flag) { cout << "\n\t Элемента: " << tmpChar << " в векторе нет!" << endl; }
}

void sortChar(vector<Cls>& vect)
{
	char tmpChar;
	for (int i = 0; i < vect.get_size(); i++)
	{
		for (int j = i; j < vect.get_size(); j++)
		{
			char a = vect[i].getVectChar();
			char b = vect[j].getVectChar();
			if (a > b)
			{
				tmpChar = vect[i].getVectChar();
				vect[i].setVectChar(vect[j].getVectChar());
				vect[j].setVectChar(tmpChar);
			}
		}
	}
}

void deleteChar(vector<Cls>& vect)
{
	char tmpChar;
	int count = vect.get_size();
	bool flag = true;
	cout << "\n\t Введите удаляемый символ:  ";
	cin >> tmpChar;
	for (int i = 0; i < vect.get_size(); i++)
	{
		if (tmpChar == vect[i].getVectChar())
		{
			cout << "\n\t Элемент: " << tmpChar << " удален!" << endl;
			for (int j = i; j < vect.get_size() - 1; j++)
			{
				vect[j].setVectChar(vect[j + 1].getVectChar());
			}
			count--;
			vect.set_size(count);
			flag = false;
			return;
		}
	}
	if (flag) { cout << "\n\t Элемента: " << tmpChar << " в векторе нет!" << endl; }
}


void deleteAll(vector<Cls>& vect)
{
	int count = vect.get_size();
	for (int i = 0; i < vect.get_size(); i++)
	{
			for (int j = i; j < vect.get_size()-1; j++)
			{
				vect[j].setVectInt(vect[j + 1].getVectInt());
			}
	}
	count=0;
	vect.set_size(count);
	
}