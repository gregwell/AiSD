#pragma once
#include <iostream>
#include <fstream>
#include <vector>
#include "List.hpp"

using namespace std;

//graf


//Lista sasiedztwa:
//tablica n(liczba wierzcholkow)-elementowa
// Każdy element tej tablicy jest listą

// //  Lista reprezentuje wierzchołek startowy.
//Na liście są przechowywane numery wierzchołków końcowych, 
//czyli sąsiadów wierzchołka startowego, z którymi jest on 
//połączony krawędzią.  


class Graph
{
private:
	int krawedz;
	int wierzcholek;
	int v;				//aktualny wierzcholek
	vector<int>* adj; //wektor dla macierzy sasiedztwa
	vector<int>* inc;  //wektor dla maciezy incydencji
	vector<List> adj_list;  //wektor/dynamiczna tablica dla listy sasiedztwa
	//kazdy element tablicy jest lista

public:
	inline Graph(int x, int y) //konstruktor
	{
		this->krawedz = y; //licbza krawedzi
		this->wierzcholek = x; //liczba wierzcholkow
		this->v = 0; //biezacy wierzcholek = 0

		adj = new vector<int>[x]; //tablica wektorow dla macierzy sasiedztwa
		inc = new vector<int>[x]; //tablica wektorow dla macierzy incydencji

		for (int i = 0; i < wierzcholek; i++)  //dla kazdego wierzcholka po kolei
		{
			//dla macierzy sasiedztwa //wierzcholek x wierzcholek
			for (int j = 0; j < wierzcholek; j++)
				adj[i].push_back(0); //push_back- dodaje na koncu wektora kopie przekazanego argumentu
			//czyli wypelniam zerami

			//dla macierzy incydencji //wierzchjolek x krawedz
			for (int k = 0; k < krawedz; k++)
				inc[i].push_back(0);
			//dla kazdego wierzcholka wykonuje sie krawedz razy

			//dla listy sasiedztwa
			List ls; 
			ls.add_last_item(i); //po kolei dla kazdego i dodaje do listy tymczasowej
			adj_list.push_back(ls); //dodaje ta liste do tej z klasy
		}
	}

	inline ~Graph() //desruktor
	{
		delete[] adj;
		delete[] inc;
	}

	void addEdge(int x, int y, int value);
	void printList();
	void printAdj();
	void printIncidence();
	void ListAdd(int v, SNode* node);
	bool check(int v, int r);
};