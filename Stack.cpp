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

//Pointer stack

PointerStack::PointerStack() {
	top = nullptr;
}

void PointerStack::push(int number)
{
	top = new Node(number, top);
	//data = number; link = top;
}

Node* PointerStack::pop(){

	if (IsEmpty()) {
		return nullptr;
	}

	Node* temp = top; //temporarly store Node info of current top
	top = top->GetPointer();  //make top point to the previous Node
	//return link stored in Node that top points to

	//example:
	//  1st Node: [2/0] with address 100
	//	2nd Node: [5/100] with address 250
	//		top: 100
	//so I look for link section in Node that top points to
	//in this case: 
	//top points to [2/0] and I get the link: 0

	free(temp);
	return temp;
}

bool PointerStack::IsEmpty()
{
	bool a;
	top==nullptr ? a = true : a = false;
	return a; 
}



