// ChyrunSofialab6.2.1.cpp : This file contains the 'main' function. Program execution begins and ends there.
// Lab_06_2.cpp
// < Чирун Софія >
// Лабораторна робота № 6.2.1
// Опрацювання одновимірних масивів ітераційним способом  
// Варіант 18

#include <iostream>
#include <iomanip>
#include <time.h>

using namespace std;

void Create(int* a, const int size, const int Low, const int High)
{
	for (int i = 0; i < size; i++)
		a[i] = Low + rand() % (High - Low + 1);
}

void Print(int* a, const int size)
{
	for (int i = 0; i < size; i++)
		cout << "a[" << setw(2) << i + 1 << " ] = " << setw(4) << a[i] << endl;
	    cout << endl;
}

int Max(int* a, const int size)
{
	int max = a[0], l = 0;
	for (int i = 1; i < size; i++)
		if (a[i] > max)
		{
			max = a[i];
			l = i;
		}

	cout << "max = " << max << endl;
	return l + 1;
}

int Min(int* a, const int size)
{
	int min = a[0], l = 0;
	for (int i = 1; i < size; i++)
		if (a[i] < min)
		{
			min = a[i];
			l = i;
		}

	cout << "min = " << min << endl;
	return l + 1;
}

int main()
{
	srand((unsigned)time(NULL)); 
	const int n = 26;
	int a[n], c, d;
	int Low = 3;
	int High = 92;
	Create(a, n, Low, High);
	Print(a, n);
	c = Max(a, n);
	d = Min(a, n);
	cout << "imax = " << c << endl;
	cout << "imin = " << d << endl;
	cout << "imax+imin = " << c + d;
	return 0;
}

