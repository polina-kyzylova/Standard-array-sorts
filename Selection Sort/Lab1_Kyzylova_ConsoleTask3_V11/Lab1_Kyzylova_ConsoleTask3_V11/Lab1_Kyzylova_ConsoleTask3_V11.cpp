// Lab1_Kyzylova_ConsoleTask3_V11.cpp: определяет точку входа для консольного приложения.
//
/*
**************************************************************************
* Лабораторная работа №1                                                 *
* Задача №1                                                              *
*                                                                        *
* Условие:                                                               *
* Сравнить эффективность сортировки массива Tree Sort с классическими    *
* сортировками массивов(Bubble Sort, Insertion Sort, Selection Sort).    *
* Количество элементов в массиве не менее 100 тысяч.                     *
* Определить наиболее эффективную сортировку.                            *
*                                                                        *
* Выполнила:                                                             *
* Кызылова Полина Андреевна                                              *
* Группа: ПКТб-20-1                                                      *
*                                                                        *
* Дата: 16.02.2021                                                       *
**************************************************************************
*/

#include "stdafx.h"
#include <iostream>
#include <Windows.h>
#include <ctime>
#include <conio.h>

using namespace std;

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	cout << "Задача №3, Вариант №11" << endl;
	cout << "------------------------------------------------------------------------" << endl;
	cout << "Условие задачи:" << endl;
	cout << "Определить эффекивность классической сортировки массивов" << endl;
	cout << "Selection Sort (Сортировка выбором)" << endl;
	cout << "------------------------------------------------------------------------" << endl;
	cout << endl;

	int i, j, k;
	const int n = 100000;
	int mas[n];
	int min;

	srand(time(0));

	for (i = 0; i < n; i++)
	{
		mas[i] = rand() % 1000;
	}

	int TimeStart;
	int TimeEnd;
	unsigned int TimeWork;

	cout << "Отсортированный массив:" << endl;

	TimeStart = clock();
	// Сортировка выбором
	for (i = 0; i < n - 1; i++)
	{
		min = i;
		for (j = i + 1; j < n; j++)
		{
			if (mas[j] < mas[min])
			{
				min = j;
			}
			if (mas[min] < mas[i])
			{
				k = mas[i];
				mas[i] = mas[min];
				mas[min] = k;
			}
		}
	}

	TimeEnd = clock();
	TimeWork = TimeEnd - TimeStart;

	for (i = 0; i < n; i++)
	{
		cout << mas[i] << " ";
	}
	cout << endl;
	cout << "------------------------------------------------------------------------" << endl;
	cout << endl;

	cout << "Скорость выполнения сортировки Selection Sort: " << TimeWork << " милисек." << endl;

	cout << endl;
	cout << "------------------------------------------------------------------------" << endl;
	cout << "Лабораторную работу №1 выполнила Кызылова Полина Андреевна" << endl;
	cout << "------------------------------------------------------------------------" << endl;
	cout << endl;

	system("Pause");
	return 0;
}

