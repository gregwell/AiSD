#pragma once
#include "Graphs.hpp"

//inline void write(string file_name, int text)
//{
//	fstream file;
//	file.open(file_name + ".txt", ios::out | ios::app);
//	file << text << endl;
//	file.close();
//}



//x,y wierzcholki
//value wartosc a la [km]
inline void Graph::addEdge(int x, int y, int value)
{
	//lista
	SNode* node = new SNode;
	node->data = y; //
	ListAdd(x, node); //jako x biezacy wierzcholek, a y kolejny w node

	//macierz sasiedztwa
	adj[x][y] = value; //wartosc dla danego odcinka od x do y
	adj[y][x] = value; //wartosc dla danego odcinka od y do x

	//macierz incydencji
	inc[x][this->v] = 1;
	inc[y][this->v] = -1;
}



//gethead() pobiera wskaznik do wezla
//at(i) jesli dana pozycje wykracza poza liste elementow to wrzuca wyjatek

inline void Graph::ListAdd(int v, SNode* node)
{
	SNode* tmp;

	for (int i = 0; i < adj_list.size(); i++) //od 0 do wielkosci listy
	{
		tmp = adj_list.at(i).gethead()->next; //tmp wskaznik do nastepnej pozycji z biezago el. listy

		if (tmp->data == v) //jesli obecna wartosc = wartosci aktualnego wierzcholka
			adj_list.at(i).add_last_item(node->data);
			//dodaje do listy sasiedztwa ( po weryfikacji at(i) pozycji czy w zakresie
			//wartosc z node podanego jako agument 
	}
}

inline void Graph::printList()
{
	cout << "Lista sasiedztwa:\n";

	for (auto l : adj_list) //po kolei przechodze adj_list
	{
		l.print_list();
		cout << endl;
	}
}

inline void Graph::printAdj()
{
	char q = 65; //ASCII A
	cout << "Macierz sasiedztwa:\n";

	for (int i = 0; i < 9; i++) //dla kazdego wierzcholka
	{
		cout << "char: " << q + 1 << endl;

		for (auto j = 0; j < adj[i].size(); j++)
		{
			if (adj[i].at(j) < 10) //liczba adjacent wierzcholkow musi byc <10
				cout << "\t" << adj[i].at(j); // \t tabulator

			else
				cout << "\t" << adj[i].at(j);
		}
		cout << endl;
	}
}

inline void Graph::printIncidence()
{
	int q = 65;
	cout << "Macierz incydencji:\n";

	for (int i = 0; i < wierzcholek; ++i)
	{
		cout << "char: " << q + 1 << endl;

		for (int j = 0; j < krawedz; ++j)
		{
			if (inc[i][j] == -1)
				cout << "\t" << inc[i][j];

			else
				cout << "\t" << inc[i][j];
		}
		cout << endl;
	}
}

inline bool Graph::check(int v, int r)
{
	SNode* tmp;

	for (int i = 0; i < adj_list.size(); i++)
	{
		tmp = adj_list.at(i).gethead()->next;

		if (tmp->data == r) {
			SNode* inl = adj_list.at(i).search(v);
			if (inl != nullptr)
				return true;
		}

		else if (tmp->data == v) {
			SNode* inl = adj_list.at(i).search(r);
			if (inl != nullptr)
				return true;
		}
	}
	return false;
}