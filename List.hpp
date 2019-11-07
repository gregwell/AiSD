#pragma once
#include <iostream>
#include <utility>
#include "Element.hpp"

using namespace std;

class List {
public:
	List();
	~List();


	void Insert(int);

	int SizeOf();



private:
	Node * head;
	Node*sentinel;
	Node*current;
	int counter = 0;
};
