#include <iostream>
#include "Odczyt.hpp"
#include <vector>
#include "List.hpp"
#include "Queue.hpp"
#include "Stack.hpp"
#include "BTNode.hpp"
#include "BST.hpp"
#include "BubbleSort.hpp"
#include "CombSort.hpp"
#include "InsertSort.hpp"
#include "SelectionSort.hpp"
#include "ShellSort.hpp"
#include "MergeSort.hpp"
#include "HeapSort.hpp"
#include "Graphs.hpp"

using namespace std;

int main()
{
	
	//BTNode* root = NULL; 

	//BST tree;
	//root = tree.Insert(root, 15);
	//tree.Insert(root, 6);
	//tree.Insert(root, 18);
	//tree.Insert(root, 3);
	//tree.Insert(root, 7);
	//tree.Insert(root, 17);
	//tree.Insert(root, 20);
	//tree.Insert(root, 2);
	//tree.Insert(root, 4);
	//tree.Insert(root, 13);
	//tree.Insert(root, 9);

	//cout << "height drzewa" << tree.Height(root) << endl;
	//cout << "new lenght" << tree.NewLength(root, 6) << endl;

	//int min;
	//min = tree.MinBST(root)->data;
	//cout << "\nMinimalna wartosc w BST:" << min << endl;

	//int max;
	//max = tree.MaxBST(root)->data;
	//cout << "\nMaximalna wartosc w BST:" << max << endl;

	//BTNode* wsk = tree.Find(root, 17);
	//cout << "\nZnaleziony wskaznik do Node z wart. 17, potwierdzenie:" << wsk->data << endl;

	//cout << "\n\nDrzewo przed usunieciem dwoch najmniejszych wartosci" << endl;
	//tree.Inorder(root);

	//tree.Delete(root, tree.MinBST(root)->data);
	//tree.Delete(root, tree.MinBST(root)->data);


	//cout << "\n\nDrzewo po usunieciu " << endl;
	//tree.Inorder(root);


	//printf(" bubble sort: cockatail sort vefore and aftwer");
	//int arr[] = { 5, 1, 4, 2, 8, 0, 2 };
	//int n = sizeof(arr) / sizeof(arr[0]);
	//printArray(arr, n);
	//CocktailSort(arr, n);
	//printf("cocktail Sorted array :\n");
	//printArray(arr, n);

	//int arr2[] = { 5, 1, 4, 2, 8, 0, 2 };
	//bubbleSortCKM(arr2, n);
	//printf("CKM sorted array :\n");
	//printArray(arr, n);


	////Comb Sort
	//int a[] = { 6, 2, 1, 9, 3, 6, 4, 3, 11, 51, 1, 95, 31, 2, 61, 22, 9, 65, 82, 4, 6, 2, 1, 9, 3, 6, 4, 3, 11, 51, 1, 95, 31, 2, 61, 22, 9, 65, 82, 4, 6, 2, 1, 9, 3, 6, 4, 3, 11, 51, 1, 95, 31, 2, 61, 22, 9, 65, 82, 4, 6, 2, 1, 9, 3, 6, 4, 3, 11, 51, 1, 95, 31, 2, 61, 22, 9, 65, 82, 4, 6, 2, 1, 9, 3, 6, 4, 3, 11, 51, 1, 95, 31, 2, 61, 22, 9, 65, 82, 4 };
	//int n = sizeof(a) / sizeof(a[0]);
	//int h;
	//Comb_Sort(a, n);
	//cout << "Comb Sorted array: \n";
	//printArray(a, n);
	//cin >> h;

	//int ar[] = { 51, 21, 2, 34, 1, 56, 12, 56, 89, 66, 54, 31, 12, 12, 15, 99, 81, 52, 56, 98 };
	//n = sizeof(ar) / sizeof(ar[0]);
	//insert_Sort(ar, n);
	//cout << "Insertion Sorted array: \n";
	//printArray(ar, n);
	//cin >> h;

	//int arr[] = { 83, 88, 1, 23, 15, 14, 25, 98, 92, 65, 55, 12, 5, 89, 37, 82, 74, 77, 2, 10 };
	//n = sizeof(arr) / sizeof(arr[0]);
	//selectionSort(arr, n);
	//cout << "Selection sorted array: \n";
	//printArray(arr, n);
	//cin >> h;

	//merge
	//int arr[] = { 12, 11, 13, 5, 6, 7 };
	//int arr_size = sizeof(arr) / sizeof(arr[0]);

	//printf("Given array is \n");
	//printArray(arr, arr_size);

	//mergeSort(arr, 0, arr_size - 1);

	//printf("\nSorted array is \n");
	//printArray(arr, arr_size);

	////heap
	//int arr[] = { 12, 11, 13, 5, 6, 7 };
	//int n = sizeof(arr) / sizeof(arr[0]);

	//heapSort(arr, n);

	//cout << "Sorted array is \n";
	//printArray(arr, n);

	Graph graph = Graph(9, 16);
	graph.dodaj_krawedz(0, 1, 4);
	graph.dodaj_krawedz(0, 4, 6);
	graph.dodaj_krawedz(0, 5, 8);
	graph.dodaj_krawedz(0, 6, 10);
	graph.dodaj_krawedz(1, 2, 3);
	graph.dodaj_krawedz(1, 3, 7);
	graph.dodaj_krawedz(1, 5, 15);
	graph.dodaj_krawedz(1, 7, 6);
	graph.dodaj_krawedz(1, 8, 1);
	graph.dodaj_krawedz(2, 4, 2);
	graph.dodaj_krawedz(2, 6, 15);
	graph.dodaj_krawedz(3, 5, 12);
	graph.dodaj_krawedz(3, 8, 1);
	graph.dodaj_krawedz(4, 7, 12);
	graph.dodaj_krawedz(5, 8, 9);
	graph.dodaj_krawedz(6, 7, 5);

	graph.printList();
	graph.printIncidence();
	graph.printAdj();

	int x, y;
	cout << "Check():\n";
	cin >> x;
	cin >> y;

	if (graph.check(x, y))
		cout << "Poloczenie istnieje\n";

	else
		cout << "Brak poloczenia\n";

	system("PAUSE");
	return 0;
}