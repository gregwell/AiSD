#include <iostream>
#include <utility>
#include <fstream>
#include "Lista.hpp"
#include "Element.hpp"

void Lista::Save(std::string filename)
{
	std::fstream plik;
	plik.open(filename, std::ios::out);
	if(plik.good()!=true)
	{
		std::cerr << "Blad podczas zapisu do pliku\n";
	}
	Element* wsk = head;
	plik << licznik << "\n";
	while (wsk != wartownik)
	{
		plik << (wsk->RetVal());
		plik << "\n";
		wsk = wsk->GetPtr();
	}
	plik.close();
}

Lista::~Lista()
{
	std::cout << "Destruktor listy\n";
	while (true) {
		current = head->GetPtr();
		delete head;
		head = current;
		if (head == wartownik) {
			licznik--;
			break;
		}
		licznik--;
	}
	delete head;
	std::cout << licznik << std::endl;
	system("PAUSE");
}

Element* Lista::Find(std::string a)  //!
{
	Element* wsk = head;
	Element* bufor = nullptr;
	int i = 0;
	while (i != licznik)
	{
		i++;
		if (a != wsk->RetVal())
			bufor = wsk;
	}
	if(i==licznik)
		std::cout << "Nie znalezieono\n";
	return bufor;
}

Element* Lista::ReturnCurrent()
{

	return current;
}


void Lista::Del() //!
{
	try {
		
		Element* wsk;
		wsk= current->GetPtr();
		if (wsk == wartownik)
		{
			std::cerr << "Jestes poza zasiegiem\n";
			return;
		}
		current->SetVal(wsk->RetVal());
		current->SetPtr(wsk->GetPtr());
		
		delete wsk;
		licznik--;
	}
	catch (std::bad_alloc)
	{
		std::cerr << "Bad_alloc podczas kasowania\n";
	}
}

void Lista::Head() {
	current = head;
}

void Lista::Printtt()
{
	Element* wsk = head;
	while (wsk != nullptr) {
		std::cout << wsk->RetVal() << std::endl;
		wsk = wsk->GetPtr();
	}
}

void Lista::Next()
{
	Element* wsk = current->GetPtr();
	if (wartownik == wsk) {
		current = head;
	}
	else
		current = wsk;
}

std::string Lista::RetCurrent()
{
	return current->RetVal();
}

void Lista::Insert(std::string imie) //!
{
	Element* node= new Element{ imie,head };
	head = node;
	current = head;
	licznik++;
}

Lista::Lista() //!
{
	wartownik = new Element();
	head = wartownik;
	//wartownik->SetPtr(nullptr);
	//current->SetPtr(head);
	current = head;
}