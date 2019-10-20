#pragma once
#include <iostream>
#include <string>
#include <utility>
#include "Element.hpp"

class TabStack
{
public:
	TabStack();
	TabStack(int);

	void push(std::string&);
	std::string& pop();
	bool IsEmpty();
	bool IsFull();
private:
	int top;
	int MaxSize;
	int licznik;

	std::string* tab;
};


//////////////////////// STOS WSKAèNIKOWY
class Stack {
public:
	Stack();

	void push(std::string&);
	Element* pop();
	bool IsEmpty();
private:
	Element * top;
	int licznik = 0;
};

