#pragma once
#include <iostream>
#include "Element.hpp"
#include <utility>
#include <string>
#define MAX_SIZE 10

using namespace std;

class ArrayQueue {
public:
	ArrayQueue(int);
	ArrayQueue();

	void enqueue(int x);
	int& dequeue();
	bool IsEmpty();
	bool IsFullCircularArray();
	int ReturnSize();

private:
	int MaxSize;
	int* arr;
	int counter = 0; // no of elemeents in queue
	int front = -1;
	int arr_size = MaxSize;
	int rear = -1;
};



//adress of the head node
// so head - might be a pointer to the head node

//both operations in constant time

// we need to change the adress of the last node
//so we need pointer to the actual last node (temp)
//but in linked lists we only keep with the adress of the head node

//so initially set temp to HEAD 
//temp = temp ->next
//so we will go through all nodes from head to rear node
//  


class PointerQueue {
public:
	PointerQueue();	//constructor
public:
	void enqueue(int);
	int dequeue();
	bool IsEmpty();
private:
	Node * front;
	Node* rear;
	int counter = 0;
};

