#pragma once
#include <iostream>
#include <string>
#include <utility>
#include "Element.hpp"
#define MAX_SIZE 100

using namespace std;

class ArrayStack
{
public:
	ArrayStack();
	ArrayStack(int);

	void push(int&);
	int& pop();
	bool IsEmpty();
	bool IsFull();
private:
	int top;
	int MaxSize;
	int counter;

	int tab[MAX_SIZE];
};


//////////////////////// STOS WSKAzèNIKOWY
class Stack {
public:
	Stack();

	void push(int&);
	Node* pop();
	bool IsEmpty();
private:
	Node * top;
	int counter = 0;
};

