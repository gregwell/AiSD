#pragma once
#include <iostream>
#include <fstream>
#include <string>


//funkcja w pierwszym wierszu odczytuje ilosc wierszy jaka ma wczyta, nastepnie
//wczytuje kolejene wiersze typu U do kontenera, wymaga sie od kontenera przeladowania
//operatora [] i =
//w razie klopotow, funkcja zawsze wczyta tablice stringow, mozna stad latwo przeniesc dane na dowolny typ
template <typename T>
void LoadFromFile(T kontener[], std::string filename)
{
	std::fstream plik;
	plik.open(filename, std::ios::in);
	if (plik.good()!=true)
	{
		std::cerr << "Blad otwarcia pliku\n";
	}
	std::string bufor;
	std::getline(plik, bufor);
	int rozmiar = std::atoi(bufor.c_str());
	for (int i = 0; i < rozmiar; i++) {
		std::getline(plik, kontener[i]);
	}

	plik.close();
}
