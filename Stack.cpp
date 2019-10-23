#include <iostream>
#include <string>
#include <utility>
#include "Element.hpp"
#include "Stack.hpp"

using namespace std;

//insertion and deletion only from the top of stack

ArrStack::ArrStack()
{
	top = -1; //empty stack (constructor)
}

void ArrStack::Push(int x)
{
	if (IsFull()) { 
		cout << " error, stack overflow" << endl;
		return;
	}
	A[++top] = x;
}

void ArrStack::Pop()
{
	if (IsEmpty()) { 
		cout << "error, stack empty" << endl;
		return;
	}
	top--;
}

bool ArrStack::IsEmpty()
{
	bool a;
	top == -1 ? a = true : a = false;
	return a;
}

bool ArrStack::IsFull()
{
	bool a;
	top == MAX_SIZE -1 ? a = true : a = false;
	return a;
}

//Pointer STACK

PointerStack::PointerStack() {
	counter = 0;
	top = nullptr;
}

void PointerStack::push(int& number)
{
	top = new Node(number, top);
	//data = number; link = top;
	counter++;
}

Node* PointerStack::pop(){

	if (counter == 0)
	{
		cout << "empty stack";
		return nullptr;
	}

	Node* temp = top; //temporarly store Node info of current top
	top = top->GetPointer();  //current top get the link
	counter--;
	return temp;
}


bool PointerStack::IsEmpty()
{
	bool a;
	counter == 0 ? a = true : a = false;
	return a; 
}



