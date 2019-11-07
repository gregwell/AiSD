#include <iostream>
#include "Element.hpp"
#include <utility>
#include "DLLqueue.hpp"
#include <string>

using namespace std;

//DLL QUEUE

DLLqueue::DLLqueue()
{
	counter = 0;
	rear = nullptr;
	front = nullptr;
}

//I have to change head ptr value
//first node: (E):
//prev = NULL
//next = address of A, so actual front

// earlier first node (A):
//prev = address of E

//FRONT == address of E


void DLLqueue::insertFront(int number)
{
	if (front == nullptr)
	{
		front = new Node(number);
		rear = front;
	}
	else {
		Node* newnode = new Node(number, NULL, front);
		front->SetPrev(newnode);
		front = newnode;
	}
	counter++;
}

void DLLqueue::insertRear(int number)
{
	if (rear == nullptr)
	{
		front = new Node(number); 
		rear = front;
	}
	else {
		Node* newnode = new Node(number, rear, NULL);
		front->SetPointer(newnode); //link to newnode in actual front
		front = newnode; //change actual front
		}
	counter++;
}


int DLLqueue::dequeueFront()
{
	Node* temp = front;

	//case: empty queue
	if (front == nullptr) {
		cout << "Error, empty queue" << endl;
		return NULL;
	}

	//case: only one element in queue
	if (front == rear) {
		front = rear = nullptr;
	}
	else {
		front = front->GetPointer();	//change front to second node
		front->SetPrev(nullptr);	//set prev od second node to null
	}
	counter--;
	return temp->ReturnValue();
}

int DLLqueue::dequeueRear()
{
	Node* temp = rear;

	//case: empty queue
	if (front == nullptr) {
		cout << "Error, empty queue" << endl;
		return NULL;
	}

	//case: only one element in queue
	if (front == rear) {
		front = rear = nullptr;
	}
	else {
		rear = rear->GetPrev();	//change rear to second node from the end
		rear->SetPointer(nullptr);	//null the pointer to the last node
	}
	counter--;
	return temp->ReturnValue();
}



bool DLLqueue::IsEmpty()
{
	bool a;
	counter == 0 ? a = true : a = false;
	return a;
}