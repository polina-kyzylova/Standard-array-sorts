// Lab1_Kyzylova_ConsoleTask3_V11.cpp: ���������� ����� ����� ��� ����������� ����������.
//
/*
**************************************************************************
* ������������ ������ �1                                                 *
* ������ �1                                                              *
*                                                                        *
* �������:                                                               *
* �������� ������������� ���������� ������� Tree Sort � �������������    *
* ������������ ��������(Bubble Sort, Insertion Sort, Selection Sort).    *
* ���������� ��������� � ������� �� ����� 100 �����.                     *
* ���������� �������� ����������� ����������.                            *
*                                                                        *
* ���������:                                                             *
* �������� ������ ���������                                              *
* ������: ����-20-1                                                      *
*                                                                        *
* ����: 16.02.2021                                                       *
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

	cout << "������ �3, ������� �11" << endl;
	cout << "------------------------------------------------------------------------" << endl;
	cout << "������� ������:" << endl;
	cout << "���������� ������������ ������������ ���������� ��������" << endl;
	cout << "Selection Sort (���������� �������)" << endl;
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

	cout << "��������������� ������:" << endl;

	TimeStart = clock();
	// ���������� �������
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

	cout << "�������� ���������� ���������� Selection Sort: " << TimeWork << " �������." << endl;

	cout << endl;
	cout << "------------------------------------------------------------------------" << endl;
	cout << "������������ ������ �1 ��������� �������� ������ ���������" << endl;
	cout << "------------------------------------------------------------------------" << endl;
	cout << endl;

	system("Pause");
	return 0;
}

