#include <iostream>
#include <string>
#include <utility>
#include "Element.hpp"
#include "Stack.hpp"

using namespace std;

//insertion and deletion only from the top of stack

void ArrayStack::push(int& number)
{
	if (counter == MaxSize)
	{
		cout << "stack is full";
		return;
	}
	else {
		top++;
		tab[top] = number;
		counter++;
	}
}


int& ArrayStack::pop()
{
	if (this->IsEmpty())
	{
		cout << "empty stack";
		int number = 0;
		return number;
	}
	else {
		int number = tab[top];
		tab[top] = NULL;
		top--;
		counter--;
		return number;
	}
}



bool ArrayStack::IsEmpty()
{
	bool a;
	counter == 0 ? a = true : a = false;
	return a;
}

bool ArrayStack::IsFull()
{
	bool a;
	counter == MaxSize ? a = true : a = false;
	return a;
}

//constructor when we fill the size manually
ArrayStack::ArrayStack(int rozmiar)
{
	MaxSize = rozmiar;
	tab = new int[MaxSize];
	top = 0;
	counter = 0;
}

//default constructor
ArrayStack::ArrayStack()
{
	MaxSize = 100;
	tab = new int[MaxSize];
	top = 0;
	counter = 0;
}

///////////////////////////////////////// STOS WSKANIKOWY ////////////////////////////////
Node* Stack::pop(){
	if (counter == 0)
	{
		cout << "stos jest pusty, nie mozna sciagnac Nodeu\n";
		return nullptr;
	}
	Node* wsk = top;
	top = top->GetPointer();
	counter--;
	return wsk;
}

void Stack::push(int& number)
{
		top = new Node(number,top);
		counter++;
}

bool Stack::IsEmpty()
{
	bool a;
	counter == 0 ? a = true : a = false;
	return a;
}

Stack::Stack(){
counter = 0;
top = nullptr;
}

