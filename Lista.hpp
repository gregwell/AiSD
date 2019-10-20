#pragma once
#include <iostream>
#include <utility>
#include "Element.hpp"

class Lista {
public:
	void Del();
	void Insert(std::string);
	void Next();
	void Head();
	void Save(std::string filename);
	void Printtt();
public:
	std::string RetCurrent();
	int SizeOf() { return licznik; };
	Element* Find(std::string a);
	Element* ReturnCurrent();
public:
	Lista();
	~Lista();
private:
	Element * head;
	Element*wartownik;
	Element*current;
	int licznik = 0;
};
