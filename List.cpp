#include <iostream>
#include <utility>
#include <fstream>
#include "List.hpp"
#include "Element.hpp"

using namespace std;


void List::Insert(int x)
{
	Node* node = new Node{ x,head };
	head = node;
	current = head;
	counter++;
}

List::List() 
{
	sentinel = new Node();
	head = sentinel;
	current = head;
}

int List::SizeOf() {
	return counter;
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
	cout << counter << std::endl;
	system("PAUSE");
}