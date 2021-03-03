#include <iostream>
#include <string>
#include <utility>
#include "Element.hpp"
#include "Stack.hpp"
#include "BTNode.hpp"

using namespace std;

//insertion and deletion only from the top of stack

ArrStack::ArrStack()
{
	int MaxSize = 100;
	top = -1; //empty stack (constructor)
	A = new int[MaxSize];
}

ArrStack::ArrStack(int x)
{
	int MaxSize = x;
	top = -1; //empty stack (constructor)
	A = new int[MaxSize];
}

void ArrStack::Push(int x)
{
	if (IsFull()) { 
		cout << " error, stack overflow" << endl;
		return;
	}
	A[++top] = x;
}

int ArrStack::Pop()
{
	if (IsEmpty()) { 
		cout << "error, stack empty" << endl;
		return NULL;
	}
	//top--;
	return A[top--];
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

int PointerStack::pop(){

	if (IsEmpty()) {
		cout << "Error, empty stack" << endl;
		return NULL;
	}

	Node* temp = top; //temporarly store Node info of current top
	top = top->GetPointer();  //make top point to the previous Node
	//return link stored in Node that top points to

	//example:
	//  1st Node: [2/0] with address 100
	//	2nd Node: [5/100] with address 250
	//		top: 100
	//so I look for link section in Node that top points to (first node)
	//in this case: 
	//top have the address to [2/0] Node and I get the link: 0
	
	return temp->ReturnValue();

	// i have to to delete the returned value
}

bool PointerStack::IsEmpty()
{
	bool a;
	top==nullptr ? a = true : a = false;
	return a; 
}



//array bt stack


ArrBTStack::ArrBTStack()
{
	top = 0; 
//	BTNode* A[10];
}

ArrBTStack::ArrBTStack(BTNode* v)
{
	top = 0; 
	A[0] = v; 
	top++;
}

//ArrBTStack::ArrBTStack(BTNode* v)
//{
//	BTNode* MaxSize = v;
//	top = -1; //empty stack (constructor)
//	A = new BTNode*[MaxSize];
//}

void ArrBTStack::InitialPush(BTNode* v)
{
	A[top++] = v;
}

void ArrBTStack::Push(BTNode* v)
{
	A[++top] = v;
}


//
//void ArrBTStack::Push(BTNode* v)
//{
//	if (top == nullptr) top = 0;
//	if (IsFull()) {
//		cout << " error, stack overflow" << endl;
//		return;
//	}
//	A[0] = v;
//	A[++top] = v;
//}

BTNode* ArrBTStack::Pop()
{
	if (IsEmpty()) {
		cout << "error, stack empty" << endl;
		return NULL;
	}
	top--;
	return A[top--];
}




int ArrBTStack::Top() {
	return top;
}

bool ArrBTStack::IsEmpty()
{
	bool a;
	top == 0 ? a = true : a = false;
	return a;
}

bool ArrBTStack::IsFull()
{
	bool a;
	top == MAX_SIZE - 1 ? a = true : a = false;
	return a;
}



// pointer binary tree stack

//Pointer stack
//
//PointerBTStack::PointerBTStack() {
//	top = nullptr;
//}
//
//void PointerBTStack::push(int number)
//{
//	top = new Node(number, top);
//	//data = number; link = top;
//}
//
//int PointerBTStack::pop() {
//
//	if (IsEmpty()) {
//		cout << "Error, empty stack" << endl;
//		return NULL;
//	}
//
//	Node* temp = top; //temporarly store Node info of current top
//	top = top->GetPointer();  //make top point to the previous Node
//	//return link stored in Node that top points to
//
//	//example:
//	//  1st Node: [2/0] with address 100
//	//	2nd Node: [5/100] with address 250
//	//		top: 100
//	//so I look for link section in Node that top points to (first node)
//	//in this case: 
//	//top have the address to [2/0] Node and I get the link: 0
//
//	return temp->ReturnValue();
//
//	// i have to to delete the returned value
//}
//
//bool PointerBTStack::IsEmpty()
//{
//	bool a;
//	top == nullptr ? a = true : a = false;
//	return a;
//}