#pragma once
#include <iostream>
#include <utility>
#include "Element.hpp"

using namespace std;

class List {
public:
	List();
	~List();
private:
	Node * head;
	Node*sentinel;
	Node*current;
	int licznik = 0;
};
