#include <string>
#include <iostream>
#include <algorithm>
#pragma once
#include "InsertSort.hpp"

using namespace std;

//jest granica miedzy posortowanymi i niesortowanymi
//zawsze jak zmieniam granice to porownuje po kolei pary w lewo az osiagne posortowane lewo


void insert_Sort(int ar[], int n)
{
	int cmp = 0, counter = 0;	
	int i, key, j;

	for (i = 1; i < n; i++)
	{
		key = ar[i];			//dzieli sort/niesort
		j = i - 1;				
		cmp++;

		//jesli elementy z arr[0..i-1] są wieksze niz klucz to przneosze je na przod


		while (j >= 0 && ar[j] > key)		//porownoje obecny element z kluczem
		{
			counter++;
			ar[j + 1] = ar[j];		//zamieniam wartosci
			j--;				//porownuje dalsze wartosci w lewo
		}
		ar[j + 1] = key;			//granica miedzy posortowanymi a nieposortownaymi
	}

	cout << "porownania: " << cmp << endl;
	cout << "zamiany: " << counter << endl;
}
