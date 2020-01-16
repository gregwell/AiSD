#include <string>
#include <iostream>
#include <algorithm>
#pragma once

using namespace std;
//
////n  -rozmiar kopca
////i - index arraya
//void heapify(int arr[], int n, int i)
//{
//	int largest = i; 
//	int l = 2 * i + 1; // left = 2*i + 1 
//	int r = 2 * i + 2; // right = 2*i + 2 
//
//	// jesli lewe dziekco jest wieksze niz root
//	if (l < n && arr[l] > arr[largest])
//		largest = l;
//
//	//jesli prawe dziecko jest wieksze niz largest do tej pory
//	if (r < n && arr[r] > arr[largest])
//		largest = r;
//
//	// jest largest nie jest rootem
//	if (largest != i)
//	{
//		swap(arr[i], arr[largest]);
//
//		// rekursyjnie kopcuj to poddrzewo
//		heapify(arr, n, largest);
//	}
//}
//
//
//void heapSort(int arr[], int n)
//{
////budowanie kopca
//	for (int i = n / 2 - 1; i >= 0; i--)
//		heapify(arr, n, i);
//
////po kolei wyjmuj elementy z kopca
//	for (int i = n - 1; i >= 0; i--)
//	{
//
//		//przenosze obecny root na koniec
//		swap(arr[0], arr[i]);
//
//		// wolam kopcowanie na zredukowanym kopcu
//		heapify(arr, i, 0);
//	}
//}
//
//
//
//
//void printArray(int arr[], int n)
//{
//	for (int i = 0; i < n; ++i)
//		cout << arr[i] << " ";
//	cout << "\n";
//}
