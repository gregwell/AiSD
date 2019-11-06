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



//void DLLqueue::insertRear(int number)
//{
//	if (rear == nullptr)
//	{
//		front = new Node(number); 
//		rear = front;
//	}
//	else {
//		Node* link = new Node(number, rear);
//		rear = link;
//		}
//	counter++;
//}




int DLLqueue::dequeue()
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
		front = front->GetPointer();
		//make front point to the next Node
		//EXAMPLE: front: 100
		//		   1st Node: [2/200] with address 100
		//then:	   I ask to GetPointer() (get the link) from 1stNode
		//so:	   Now: front=200 
		//e.g. 2nd Node: [8/300] with address 200
	}
	return temp->ReturnValue();
}

//it should return dequeued int
//jednak dziala jak jest na voidzie ale wtedy nie wyswietle
//se co zdjolem z kolejki

bool DLLqueue::IsEmpty()
{
	bool a;
	counter == 0 ? a = true : a = false;
	return a;
}