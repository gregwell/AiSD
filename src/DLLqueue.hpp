#pragma once
#include <iostream>
#include "Element.hpp"
#include <utility>
#include <string>
#define MAX_SIZE 10

using namespace std;

class DLLqueue {
public:
	DLLqueue();	//constructor
public:
	void insertRear(int);
	void insertFront(int);
	int dequeueFront();
	int dequeueRear();
	bool IsEmpty();
private:
	Node* front;
	Node* rear;
	int counter = 0;
};