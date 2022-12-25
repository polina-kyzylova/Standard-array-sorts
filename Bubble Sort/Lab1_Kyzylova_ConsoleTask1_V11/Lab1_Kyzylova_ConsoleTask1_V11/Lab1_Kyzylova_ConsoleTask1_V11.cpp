// Lab1_Kyzylova_ConsoleTask1_V11.cpp: ���������� ����� ����� ��� ����������� ����������.
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
* ����: 12.02.2021                                                       *
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

	cout << "������ �1, ������� �11" << endl;
	cout << "-----------------------------------------------------------------------" << endl;
	cout << "������� ������:" << endl;
	cout << "���������� ������������� ������������ ���������� ��������" << endl;
	cout << "Bubble Sort (���������� ���������)" << endl;
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

	cout << "��������������� ������: " << endl;

	TimeStart = clock();
	// ���������� ���������
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

	cout << "�������� ���������� ���������� Bubble Sort: " << TimeWork << " �������." << endl;
	cout << "������ ���������� Bubble Sort: " << count << endl;


	cout << endl;
	cout << "-----------------------------------------------------------------------" << endl;
	cout << "������������ ������ �1 ��������� �������� ������ ���������" << endl;
	cout << "-----------------------------------------------------------------------" << endl;
	cout << endl;

	system("Pause");
	return 0;
}

