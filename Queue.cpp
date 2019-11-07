#include <iostream>
#include "Element.hpp"
#include <utility>
#include "Queue.hpp"
#include <string>

using namespace std;

//constructor to -1,-1

//first In First Out (like Mcdonalds queue)

ArrayQueue::ArrayQueue() {
	MaxSize = 100;
	arr = new int[MaxSize];
	return;
}

ArrayQueue::ArrayQueue(int x) {
	MaxSize = x;
	arr = new int[MaxSize];
	return;
}

//enqueue - add Node to arr Node with bigger index
void ArrayQueue::enqueue(int x)
{
	if (IsFullCircularArray() == true)							
	{
		cout << "Full array(circular arr, so no wasting any space), cannot add the Node\n";
		return;
	}
	else if (IsEmpty()==true)
	{ 
		front = rear = 0; //I set both to 0 because queue is empty.
	}
	else
	{
		rear = (rear + 1) % arr_size; 
		// e. g. when I have array of Nodes from [2] to [9] then I have free 0,1 slots
		// rear = ( 9 + 1 ) % 10 = 0; so instead of returning error and wasting space
		//I set the next Node as [0]
	}
	arr[rear] = x;
	counter++;
}

//just increment front
int& ArrayQueue::dequeue()
{
	if (IsEmpty() == true){			//queue is empty
		cout << "Empty queue\n";
		int number = 0;
		return number; 
	}
	else if (front == rear)			//queue has only one Node
	{								//so I have to make queue empty.
		front = rear = -1;
		int number = 0;
		return number;
	}
	else {
		int buffer = arr[front];
	//	arr[front] = nullptr;
		front = (front + 1) % arr_size;
		//as above: when my arr_size=10 and I want to dequeue
		//[9]Node then front = ( 9 + 1 ) % 10 = 0;
		//so I go to beginning
		counter--;
		return buffer; //return dequeued Node
	}
}
//circular array concept
//current position = i;
//next position = (i+1)%N is still i+1 upon i+1 == N
//for any i(current position) other than N-1 it will not take any effect.
//bur for i=N-1 the next position will be 0; 
//prev. position = (i+N-1)%N    //N to have positive number

//if front == size(A) -1 then queue is full


bool ArrayQueue::IsFullCircularArray()
{
	bool a;
	( rear + 1 ) % arr_size == front ? a = true : a = false;
	return a;
}

bool ArrayQueue::IsEmpty()
{
	bool a;
	counter == 0 ? a = true : a = false;
	return a;
}

int ArrayQueue::ReturnSize(){
	return counter;
}


//ArrayQueue::ArrayQueue(int rozmiar)
//{
//	arr_size = rozmiar;
////	arr = new string[arr_size];
//	return;
//}
//
//ArrayQueue::ArrayQueue()
//{
//	arr_size = 10;
////	arr = new string[arr_size];
//	return;
//}





//Pointer queue:

PointerQueue::PointerQueue()
{
	counter = 0;
	rear = nullptr;
	front = nullptr;
}

void PointerQueue::enqueue(int number)
{
	//queue is empty
	if (rear == nullptr)		//if rear is null create new node
	{
		//so we fill front and rear value part with enetered value
		front = new Node(number); //data = number (1st contructor)
		rear = front;
		//the address part will be stil null
	}
	else {
		Node* link = new Node(number, rear); 
		//FIRST: 
		//in the newly created Node:
		//data = [entered number]; link = [current rear address part]
		//so for second iteration link will be 0
		//but the old rear will point to the new Node


		rear = link; 
		//SECOND: modify the address of the rear
		//		  to make it point to the newly created Node
	}
	counter++;
}

//Main ideas:
//-	rear have the address of the last Node
//-	the one before last Node also have address to the last Node
//the last Node have address 0

//in the same way:
//	-front have the address to first Node
//	-first Node have address to second node.


int PointerQueue::dequeue()
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

bool PointerQueue::IsEmpty()
{
	bool a;
	counter == 0 ? a = true : a = false;
	return a;
}

