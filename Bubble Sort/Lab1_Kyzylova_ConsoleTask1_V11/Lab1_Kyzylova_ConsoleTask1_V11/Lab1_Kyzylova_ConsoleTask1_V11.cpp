// Lab1_Kyzylova_ConsoleTask1_V11.cpp: определяет точку входа для консольного приложения.
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
* Дата: 12.02.2021                                                       *
**************************************************************************
*/

#include "stdafx.h"
#include <iostream>
#include <windows.h>
#include <ctime>
#include <conio.h>

using namespace std;

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	cout << "Задача №1, Вариант №11" << endl;
	cout << "-----------------------------------------------------------------------" << endl;
	cout << "Условие задачи:" << endl;
	cout << "Определить эффективность классической сортировки массивов" << endl;
	cout << "Bubble Sort (Сортировка пузырьком)" << endl;
	cout << "-----------------------------------------------------------------------" << endl;
	cout << endl;

	int i,j,k;
	const int n = 10000;
	int mas[n];

	srand(time(0));

	for (i = 0; i < n; i++)
	{
		mas[i] = rand() % 1000;
	}

	int TimeStart;
	int TimeEnd;
	int count = 0;
	unsigned int TimeWork;

	cout << "Отсортированный массив: " << endl;

	TimeStart = clock();
	// Сортировка пузырьком
	for (i = 0; i < n - 1; i++)
	{
		for (j = 0; j < n - 1; j++)
		{
			if (mas[j] > mas[j + 1])
			{
				k = mas[j + 1];
				mas[j + 1] = mas[j];
				mas[j] = k;
				count += 1;
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
	cout << "-----------------------------------------------------------------------" << endl;
	cout << endl;

	cout << "Скорость выполнения сортировки Bubble Sort: " << TimeWork << " милисек." << endl;
	cout << "Обмены сортировки Bubble Sort: " << count << endl;


	cout << endl;
	cout << "-----------------------------------------------------------------------" << endl;
	cout << "Лабораторную работу №1 выполнила Кызылова Полина Андреевна" << endl;
	cout << "-----------------------------------------------------------------------" << endl;
	cout << endl;

	system("Pause");
	return 0;
}

