#include <string>
#include <iostream>
#include <algorithm>
#pragma once

using namespace std;


////pivot ostatni element
////umieszcza element pivotu na poprawnej pozycji w posortowanej tablicy
////wszystkie mniejsze niz pivot na lewo od pivota
////wszystkie wieksze na prawo od pivota
//
//int partition(int arr[], int low, int high)
//{
//	int pivot = arr[high];
//	int i = low - 1, j = high + 1;
//
//
//	while (true)
//	{
//		//znajduje najbardziej na lewo element WIKESZY od pivota i ustawia index
//		do
//		{
//			i++;
//		} while (arr[i] < pivot);
//
//		//znajduje najbardziej na prawo element MNIEJSZY/ROWNY od pivota
//		do
//		{
//			j--;
//		} while (arr[j] > pivot);
//
//		//gdy oba wskazniki sie spotkaja zwracam j
//		if (i >= j)
//			return j;
//		
//		//zamieniam znalezione elementy. wiekszy z mniejszym
//		swap(arr[i], arr[j]);
//	}
//}
//
////low starting index, high - ending index
//void quickSort(int arr[], int low, int high)
//{
//	if (low < high) //jesli starting index jest mniejszy niz ending index to wykonuje:
//	{
//
//		//index granicy pi
//		int pi = partition(arr, low, high);
//
////osonbno sort przed granica i po
//		quickSort(arr, low, pi);  // od startowego do granicy
//		quickSort(arr, pi + 1, high); //od granicy do koncowego
//	}
//}
//
//
//
//
//
//
//
//void printArray(int arr[], int n)
//{
//	for (int i = 0; i < n; i++)
//		printf("%d ", arr[i]);
//	printf("\n");
//}
