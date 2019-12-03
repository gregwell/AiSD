#include <iostream>
#include <string>
#include "BubbleSort.hpp"


//ciagla kontrola monotonicznosci
void bubbleSortCKM(int arr[], int n) {

	int i = -1;
	int j;
	bool swapped;

	do {
		swapped = false;

		for ( ++i , j = n-1 ; j>i ; --j )

			if (arr[j] < arr[j - 1]) {

				swap(arr[j], arr[j - 1]);
				swapped = true;

			}
	} while (swapped == true);
}



// Sorts arrar a[0..n-1] using Cocktail sort 
void CocktailSort(int a[], int n)
{
	bool swapped = true;
	int start = 0;
	int end = n - 1;

	while (swapped) {
		swapped = false;

		for (int i = start; i < end; ++i) {
			if (a[i] > a[i + 1]) {
				swap(a[i], a[i + 1]);
				swapped = true;
			}
		}

//nothing swapped, then array is finally sorted.
		if (!swapped) break;

//The Second Step: 
		swapped = false;

//the item in the right is sorted, so move end one place to the left
		--end;

//Comparision from right to the left
		for (int i = end - 1; i >= start; --i) {
			if (a[i] > a[i + 1]) {
				swap(a[i], a[i + 1]);
				swapped = true;
			}
		}

//the item in the left i sorted, so ove start one place to the right
		++start;
	}
}

void printArray(int a[], int n)
{
	for (int i = 0; i < n; i++)
		printf("%d ", a[i]);
	printf("\n");
}