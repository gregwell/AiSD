#pragma once
#include <iostream>
#include "Element.hpp"
#include <utility>
#include <string>

using namespace std;

class ArrayQueue {
public:
	ArrayQueue(int);
	ArrayQueue();

	void enqueue(string&);
	string& dequeue();
	bool IsEmpty();

	bool IsFullCircularArray();
private:
	string* arr;
	int counter = 0; // no of elements in queue
	int front = 0;
	int arr_size = 0;
	int rear = 0;
};

class Queue {
public:
	Queue();

public:
	void queue(string&);
	Element* dequeue();
	bool IsEmpty();
private:
	Element * front;
	Element* rear;
	int counter = 0;
};
