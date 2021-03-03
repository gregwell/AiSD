#include <string>
#include <iostream>
#include <algorithm>
#pragma once
#include "CombSort.hpp"
//grzebieniowe

using namespace std;
//najpierw najwiekszy gap, potem dzielimy przez 1.3, na koncu 1

//znalezc roznice miedzy elementami
int getNextGap(int gap)
{
//dziele przez 1.3
	gap = (gap * 10) / 13;

//ostatecznie roznica nie moze byc mniejsza niz 1
	if (gap < 1)
		return 1;
	return gap;
}

// sortowanie [0..n-1] 
void Comb_Sort(int a[], int n)
{
	int counter = 0;	//licznik zamian
	int cmp = 0;		//licznik porownan

//inicjalizuje roznice rowna ilosci
	int gap = n;

	// zmienna do napedzania petli while, true zeby sie wykonalo na poczatku
	bool swapped = true;

	// dopoki gap wieksze niz 1 to dzialamy
	while (gap != 1 || swapped == true)
	{
		
		gap = getNextGap(gap);
		swapped = false;

		//porownanie elementow z uzyciem gapu
		for (int i = 0; i < n - gap; i++)
		{
			if (a[i] > a[i + gap])
			{
				cmp++;
				swap(a[i], a[i + gap]);
				swapped = true;
				counter++;
			}
		}
	}
	cout << "porownan: " << cmp << endl;
	cout << "ilosc zamian: " << counter << endl;
}

void printArray(int a[], int size)
{
	int i;
	for (i = 0; i < size; i++)
		cout << a[i] << " ";
	cout << endl;
}
