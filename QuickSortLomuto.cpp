#include <string>
#include <iostream>
#include <algorithm>
#pragma once
//#include "QuickSortLomuto.h"
using namespace std;

//ostatni element to pivot
//daje element pivotu na poprawnej pozycji w posortowanej tabeli
//wszystkie mniejsze niz pivot na lewo
//a wszystkie wieksze na prawo od pivotu

//low starting index, high - ending index



//
//int partition(int arr[], int low, int high)
//{
//	int pivot = arr[high];    // ostatni elementj jest pivotem
//	int i = (low - 1);  // index mniejszego elementu
//
//	int swaps;
//
//	for (int j = low; j <= high - 1; j++) //zwiekszam j od low do high-1
//	{
//		
//		if (arr[j] <= pivot) // jesli obecny element jest MNIEJSZY/ROWNY pivotowi to swapuje z elementem o mniejszym indexem
//		{
//			i++;    // wzrasta index mniejszego elementu
//			swap(arr[i], arr[j]); //zamieniam element od i (poczatkowo i= low-1, nastepnie i wzrasta gdy element od j jest mniejszy rowny pivotowi)
//			swaps++;
//		}
//	}
//	swap(arr[i + 1], arr[high]); //zamieniam  juz po przejsciu wszystkich j, na spokojnie, element od i+1 do ktorego doszlismy z elementem  bedacym high
//	swaps++;
//	return (i + 1);
//}
//
//
//
//  //low - Starting index,// high  - Ending index 
//void quickSort(int arr[], int low, int high)
//{
//	if (low < high) //jesli index startujacy jest mniejszy niz koncowy
//	{
//		//index granicy
//		int pi = partition(arr, low, high);
//
////osobno sortuje przed partycjonowaniem i po partycjonowaniu 
//		quickSort(arr, low, pi - 1);
//		quickSort(arr, pi + 1, high);
//	}
//}
//
//
//
//
//
//
//
//
//
//void printArray(int arr[], int size)
//{
//	int i;
//	for (i = 0; i < size; i++)
//		printf("%d ", arr[i]);
//	printf("\n");
//}