#include <iostream>
#include <utility>
#include <fstream>
#include "List.hpp"
#include "Element.hpp"

using namespace std;

void List::Save(string filename)
{
	fstream file;
	file.open(filename, ios::out);
	if (file.good() != true)
	{
		cerr << "Error!";
	}
	Node* temp = head;
	file << counter << "\n";
	while (temp != sentinel)
	{
		file << (temp->ReturnValue());
		file << "\n";
		temp = temp->GetPointer();
	}
	file.close();
}

List::List() 
{
	sentinel = new Node();
	head = sentinel;
	current = head;
}

List::~List()
{
	std::cout << "Destruktor listy\n";
	while (true) {
		current = head->GetPointer();
		delete head;
		head = current;
		if (head == sentinel) {
			counter--;
			break;
		}
		counter--;
	}
	delete head;
	std::cout << counter << std::endl;
	system("PAUSE");
}

int List::SizeOf() {
	return counter;
}


Node* List::Find(int a)  //!
{
	Node* wsk = head;
	Node* bufor = nullptr;
	int i = 0;
	while (i != counter)
	{
		i++;
		if (a != wsk->ReturnValue())
			bufor = wsk;
	}
	if (i == counter)
		std::cout << "Nie znalezieono\n";
	return bufor;
}
//
//Node* List::ReturnCurrent()
//{
//	return current;
//}


void List::Delete() //!
{
	try {

		Node* wsk;
		wsk = current->GetPointer();
		if (wsk == sentinel)
		{
			std::cerr << "Jestes poza zasiegiem\n";
			return;
		}
		current->SetValue(wsk->ReturnValue());
		current->SetPointer(wsk->GetPointer());

		delete wsk;
		counter--;
	}
	catch (std::bad_alloc)
	{
		std::cerr << "Bad_alloc podczas kasowania\n";
	}
}

void List::Head() {
	current = head;
}

void List::Print()
{
	Node* wsk = head;
	while (wsk != nullptr) {
		std::cout << wsk->ReturnValue() << std::endl;
		wsk = wsk->GetPointer();
	}
}

void List::Next()
{
	Node* wsk = current->GetPointer();
	if (sentinel == wsk) {
		current = head;
	}
	else
		current = wsk;
}

int List::ReturnCurrent()
{
	return current->ReturnValue();
}

void List::Insert(int x)
{
	Node* node = new Node{ x,head };
	head = node;
	current = head;
	counter++;
}

