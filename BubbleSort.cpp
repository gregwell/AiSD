#include <iostream>
#include <string>
#include "BubbleSort.hpp"


//ciagla kontrola monotonicznosci
void bubbleSortCKM(int arr[], int n) { //n-size of array

	int i = 0;
	int j;
	bool swapped;
	int changes = 0;
	int comparisions=0;

	do {
		swapped = false;

		for (i++, j = n - 1; j > i; --j)
			comparisions++;
			if (arr[j] < arr[j - 1]) {

				swap (arr[j], arr[j - 1]);
				swapped = true;
				changes++;

			}
	} while (swapped == true);

	cout << changes << endl;
}



// arr[0 do n-1]
void CocktailSort(int a[], int n)
{
	bool swapped = true;
	int start = 0;
	int end = n - 1;
	int changes = 0;
	int comparisions = 0;

	while (swapped) {
		swapped = false;

		for (int i = start; i < end; ++i) {
			comparisions;
			if (a[i] > a[i + 1]) {
				swap(a[i], a[i + 1]);
				swapped = true;
				changes++;
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
	cout << changes << endl;
}

void printArray(int a[], int n)
{
	for (int i = 0; i < n; i++)
		printf("%d ", a[i]);
	printf("\n");
}