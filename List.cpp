#include <iostream>
#include <utility>
#include <fstream>
#include "List.hpp"
#include "Element.hpp"

//void Lista::Save(std::string filename)
//{
//	std::fstream plik;
//	plik.open(filename, std::ios::out);
//	if(plik.good()!=true)
//	{
//		std::cerr << "Blad podczas zapisu do pliku\n";
//	}
//	Node* wsk = head;
//	plik << licznik << "\n";
//	while (wsk != wartownik)
//	{
//		plik << (wsk->ReturnValue());
//		plik << "\n";
//		wsk = wsk->GetPointer();
//	}
//	plik.close();
//}
//
//Lista::~Lista()
//{
//	std::cout << "Destruktor listy\n";
//	while (true) {
//		current = head->GetPointer();
//		delete head;
//		head = current;
//		if (head == wartownik) {
//			licznik--;
//			break;
//		}
//		licznik--;
//	}
//	delete head;
//	std::cout << licznik << std::endl;
//	system("PAUSE");
//}
//
//Node* Lista::Find(std::string a)  //!
//{
//	Node* wsk = head;
//	Node* bufor = nullptr;
//	int i = 0;
//	while (i != licznik)
//	{
//		i++;
//		if (a != wsk->ReturnValue())
//			bufor = wsk;
//	}
//	if(i==licznik)
//		std::cout << "Nie znalezieono\n";
//	return bufor;
//}
//
//Node* Lista::ReturnCurrent()
//{
//
//	return current;
//}
//
//
//void Lista::Del() //!
//{
//	try {
//		
//		Node* wsk;
//		wsk= current->GetPointer();
//		if (wsk == wartownik)
//		{
//			std::cerr << "Jestes poza zasiegiem\n";
//			return;
//		}
//		current->SetVal(wsk->ReturnValue());
//		current->SetPtr(wsk->GetPointer());
//		
//		delete wsk;
//		licznik--;
//	}
//	catch (std::bad_alloc)
//	{
//		std::cerr << "Bad_alloc podczas kasowania\n";
//	}
//}
//
//void Lista::Head() {
//	current = head;
//}
//
//void Lista::Printtt()
//{
//	Node* wsk = head;
//	while (wsk != nullptr) {
//		std::cout << wsk->ReturnValue() << std::endl;
//		wsk = wsk->GetPointer();
//	}
//}
//
//void Lista::Next()
//{
//	Node* wsk = current->GetPointer();
//	if (wartownik == wsk) {
//		current = head;
//	}
//	else
//		current = wsk;
//}
//
//std::string Lista::RetCurrent()
//{
//	return current->ReturnValue();
//}
//
//void Lista::Insert(std::string imie) //!
//{
//	Node* node= new Node{ imie,head };
//	head = node;
//	current = head;
//	licznik++;
//}
//
//Lista::Lista() //!
//{
//	wartownik = new Node();
//	head = wartownik;
//	//wartownik->SetPtr(nullptr);
//	//current->SetPtr(head);
//	current = head;
//}