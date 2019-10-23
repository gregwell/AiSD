#include <iostream>
#include "Element.hpp"
#include <utility>
#include "Queue.hpp"
#include <string>

using namespace std;

//first In First Out (like Mcdonalds queue)

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

void PointerQueue::enqueue(int& number)
{
	if (rear == nullptr)		//if rear is null create new node
	{
		front = new Node(number); //data = number (1st contructor)
		rear = front;
	}
	else {
		Node* link = new Node(number, rear);
		rear = link;
	}
	counter++;
}


Node* PointerQueue::dequeue()
{
	if (counter == 0)
	{
		cout << "Empty queue, ";
		return nullptr;
	}

	Node *wsk;
	wsk = rear;
	while (wsk->GetPointer() != front)
	{
		wsk = wsk->GetPointer();
	}
	Node*bufor = front;
	front = wsk;
	front->SetPtr(nullptr);
	counter--;
	return wsk;
}

bool PointerQueue::IsEmpty()
{
	bool a;
	counter == 0 ? a = true : a = false;
	return a;
}