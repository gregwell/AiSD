#pragma once
#include <iostream>
#include <fstream>
#include <vector>
#include "List.hpp"
#include <list>

using namespace std;

//graf


//Lista sasiedztwa:
//tablica n(liczba wierzcholkow)-elementowa
// Każdy element tej tablicy jest listą

// //  Lista reprezentuje wierzchołek startowy.
//Na liście są przechowywane numery wierzchołków końcowych, 
//czyli sąsiadów wierzchołka startowego, z którymi jest on 
//połączony krawędzią.  


//class Graph
//{
//private:
//	int krawedz;
//	int wierzcholek;
//	int v;				//aktualny wierzcholek
//	vector<int>* adj; //wektor dla macierzy sasiedztwa
//	vector<int>* inc;  //wektor dla maciezy incydencji
//	vector<List> adj_list;  //wektor/dynamiczna tablica dla listy sasiedztwa
//	//kazdy element tablicy jest lista
//
//public:
//	inline Graph(int x, int y) //konstruktor
//	{
//		this->krawedz = y; //licbza krawedzi
//		this->wierzcholek = x; //liczba wierzcholkow
//		this->v = 0; //biezacy wierzcholek = 0
//
//		adj = new vector<int>[x]; //tablica wektorow dla macierzy sasiedztwa
//		inc = new vector<int>[x]; //tablica wektorow dla macierzy incydencji
//
//		for (int i = 0; i < wierzcholek; i++)  //dla kazdego wierzcholka po kolei
//		{
//			//dla macierzy sasiedztwa //wierzcholek x wierzcholek
//			for (int j = 0; j < wierzcholek; j++)
//				adj[i].push_back(0); //push_back- dodaje na koncu wektora kopie przekazanego argumentu
//			//czyli wypelniam zerami
//
//			//dla macierzy incydencji //wierzchjolek x krawedz
//			for (int k = 0; k < krawedz; k++)
//				inc[i].push_back(0);
//			//dla kazdego wierzcholka wykonuje sie krawedz razy
//
//			//dla listy sasiedztwa
//
//			List ls;
//			ls.add_last_item(i);
//			int tdata = ls.find_last_element().data;
//			adj_list.push_back(ls);
//
//		}
//	}
//
//	inline ~Graph() //desruktor
//	{
//		delete[] adj;
//		delete[] inc;
//	}
//
//	void addEdge(int x, int y, int value);
//	void printList();
//	void printAdj();
//	void printIncidence();
//	void ListAdd(int v, SNode* node);
//	bool check(int v, int r);
//};

//wierzcholek
class Vertex { 
public:
	int nr;
	int data;
	Vertex* next;
	Vertex(int a, int b, Vertex* c) {
		nr = a;
		data = b;
		next = c;
	}
};

class Graph {
public:
	Vertex** NL;
	int size;
	int data;
	void AddToNL(Vertex*& H, int nr, int data) {
		Vertex* t = new Vertex(nr, data, H);
		H = t;
	};
	Graph() {
		//konstruktor domyslnie czyta z pliku graf.txt
		fstream file;
		file.open("graf.txt", ios::in);
		size;
		data;
		file >> size; //pierwsza liczba w pliku ilosc krawedzi

		//LISTA SASIEDZTWA
		NL = new Vertex *[size];
		for (int i = 0; i < size; i++) {
			NL[i] = NULL;
		}
		for (int i = 0; i < size; i++) {
			for (int j = 0; j < size; j++) {
				file >> data;
				if (data > 0) {
					AddToNL(NL[i], j, data);
				}
			}
		}
	}

	char* colors = new char[size];

	void DFS();
	void BFS(int s); //wszerz ang. breadth-first search, BFS )

	void visit(int s);

};
