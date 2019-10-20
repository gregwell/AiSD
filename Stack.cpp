#include <iostream>
#include <string>
#include <utility>
#include "Element.hpp"
#include "Stack.hpp"


std::string& TabStack::pop()
{
	if (this->IsEmpty())
	{
		std::cout << "Stos jest juz pusty, nie mozna sciagnac, zwracam ERROR\n";
		std::string napis = "ERROR";
		return napis;
	}
	else {
		std::string napis = tab[top];
		tab[top] = "";
		top--;
		licznik--;
		return napis;
	}
}

void TabStack::push(std::string& napis)
{
	if (licznik == MaxSize)
	{
		std::cout << "Stos tablicowy jest pelny, blad\n";
		return;
	}
	else {
		top++;
		tab[top] = napis;
		licznik++;
	}
}

bool TabStack::IsEmpty()
{
	bool a;
	licznik == 0 ? a = true : a = false;
	return a;
}

bool TabStack::IsFull()
{
	bool a;
	licznik == MaxSize ? a = true : a = false;
	return a;
}

TabStack::TabStack(int rozmiar)
{
	MaxSize = rozmiar;
	tab = new std::string[MaxSize];
	top = 0;
	licznik = 0;
}

TabStack::TabStack()
{
	MaxSize = 100;
	tab = new std::string[MaxSize];
	top = 0;
	licznik = 0;
}

///////////////////////////////////////// STOS WSKANIKOWY ////////////////////////////////
Element* Stack::pop(){
	if (licznik == 0)
	{
		std::cout << "stos jest pusty, nie mozna sciagnac elementu\n";
		return nullptr;
	}
	Element* wsk = top;
	top = top->GetPtr();
	licznik--;
	return wsk;
}

void Stack::push(std::string& napis)
{
		top = new Element(napis,top);
		licznik++;
}

bool Stack::IsEmpty()
{
	bool a;
	licznik == 0 ? a = true : a = false;
	return a;
}

Stack::Stack(){
licznik = 0;
top = nullptr;
}

