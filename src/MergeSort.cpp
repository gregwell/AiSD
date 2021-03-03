#include <string>
#include <iostream>
#include <algorithm>

using namespace std;

////konczymy dzialanie gdy zostaje 1 elements
//
////Merge array into 2 arrays
////arrays: arr[l...m] and arr[m+1 ... r]
//
////m-middle
//void merge(int arr[], int l, int m, int r)
//{
//	int i, j, k; 
//	const int n1 = m - l + 1; 
//	const int n2 = r - m;
//
//	//tymczasowe tablice
//	int *L = new int[n1];
//	int *R = new int[n1];
//
//	//kopiowanie danych do tych tablic
//	for (i = 0; i < n1; i++)	L[i] = arr[l + i]; //wykonuje n1 razy czyli rozmiar lewej podtablicy
//	for (j = 0; j < n2; j++)	R[j] = arr[m + 1 + j];  //zaczynam od m i dodaje j, czyli druga polowka
//
//
//	//Teraz merguje z powrotem do pierwotnej tablocy ale juz posortowane
//
//	i = 0; //index pierwszej podtablicy
//	j = 0; //index drugiej podatblicy
//	k = l; // index zscalonej podtablicy
//
//	while (i < n1 && j < n2)
//	{
//		if (L[i] <= R[j]) //dopoki LEWE od indexu lewego i jest mniejsze niz PRAWE od indexu prawego to uzupelniam w tamtej tablicy
//		{
//			arr[k] = L[i]; 
//			//element z lewej mniejszy wiec nim uzupelniam
//			//biezace miejsce w polowce wyzej (wiekszej)
//			i++;
//			//zwiekszam indeks i
//		}
//		else
//		{
//			//w przeciwnym wypadku uzupelniam elementem z prawej polowki
//			arr[k] = R[j];
//			j++;
//		}
//		k++;
//	}
//
//	////uzup elementy z  lewej nieuzyte 
//	//while (i < n1)
//	//{
//	//	arr[k] = L[i];
//	//	i++;
//	//	k++;
//	//}
//
//	////z prawej 
//	//while (j < n2)
//	//{
//	//	arr[k] = R[j];
//	//	j++;
//	//	k++;
//	//}
//
//	delete L;
//	delete R;
//}
//
////l - lewy index
////r - prawy index
//void mergeSort(int arr[], int l, int r)
//{
//	if (l < r) //jesli lewy index jest mniejszy niz prawy, czyli jest wiecej elementow
//	{
//		//middle ustalam na polowe
//		int m = l + (r - l) / 2;
//
//		//reukrencyjnie wywolujemy az zostanie 1 element 
//		mergeSort(arr, l, m); //pierwsza polowa , z kazda iteracja funkcji m sie zmniejsza, robie tak dopoki bedzie 1 element
//		mergeSort(arr, m + 1, r); //druga polowa
//
//		merge(arr, l, m, r); // scalanie dwoch podtablic
//	}	//scalam juz posortowane
//		// wiec idac do gory ( w coraz wieksze polowki )
//		//porownuje 0 element z 0 elementem bo one sa posortowane
//		//potem zwiekszam indeks i patrze na kolejny element czy jest wieksze od prawego
//}
//
//
//
//
//
//
//
//
//void printArray(int A[], int size)
//{
//	int i;
//	for (i = 0; i < size; i++)
//		printf("%d ", A[i]);
//	printf("\n");
//}
