#include <string>
#include <iostream>
#include <algorithm>
#pragma once
#include "SelectionSort.hpp"
#include <math.h>

using namespace std;

// Selection 1. select the lowest element in the reamining array
// Selection 2. bring it to the starting position
//counter shift: change the counter for unsorted array by one

//wybiera najmniejszy, zamienia miejscami z tym ostatnim z nieposortowanych, i zwieksza granice posortowanych


void selectionSort(int arr[], int n)
{
	int cmp = 0, 
	int counter = 0;
	int i, j, arrmin;

	// zwiekszamy po jednym granice miedzy posortownaym a nieposortowanym
	for (i = 0; i < n - 1; i++)
	{
		// znajduje minumum w nieposortowanej
		arrmin = i;
		for (j = i + 1; j < n; j++) {
			cmp++;
			if (arr[j] < arr[arrmin])
				arrmin = j;
		}
		// zamieniam znaleziony element z tym rozpatrywanym na granicy sort/nieposortowane
		swap(&arr[arrmin], &arr[i]);
		counter++;
	}
	cout << "porownania: " << cmp << endl;
	cout << "zamiany: " << counter << endl;
}