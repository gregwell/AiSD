#pragma once
#include <iostream>
#include "Element.hpp"
#include <utility>
#include <string>
#define MAX_SIZE 10

using namespace std;

class ArrayQueue {
public:
	//ArrayQueue(int);
	//ArrayQueue();

	void enqueue(int x);
	int& dequeue();
	bool IsEmpty();

	bool IsFullCircularArray();
private:
	int arr[MAX_SIZE];
	int counter = 0; // no of elements in queue
	int front = -1;
	int arr_size = MAX_SIZE;
	int rear = -1;
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
