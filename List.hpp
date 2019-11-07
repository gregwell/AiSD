#pragma once
#include <iostream>
#include <utility>
#include "Element.hpp"

using namespace std;

class List {
public:
	List();
	~List();

	void Delete();
	void Insert(int);
	void Next();
	void Head();
	void Save(string filename);
	void Print();

	int SizeOf();
	Node* Find(int a);
	int ReturnCurrent();

private:
	Node * head;
	Node*sentinel;
	Node*current;
	int counter = 0;
};
