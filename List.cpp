#include <iostream>
#include <utility>
#include <fstream>
#include "List.hpp"
#include "Element.hpp"

using namespace std;
//
//void List::Save(string filename)
//{
//	fstream file;
//	file.open(filename, ios::out);
//	if (file.good() != true)
//	{
//		cerr << "Error!";
//	}
//	Node* temp = head;
//	file << counter << "\n";
//	while (temp != sentinel)
//	{
//		file << (temp->ReturnValue());
//		file << "\n";
//		temp = temp->GetPointer();
//	}
//	file.close();
//}
//
//List::List() 
//{
//	sentinel = new Node();
//	head = sentinel;
//	current = head;
//}
//
//List::~List()
//{
//
//}
//
//int List::SizeOf() {
//	return counter;
//}